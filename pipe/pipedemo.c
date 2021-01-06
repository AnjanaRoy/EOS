#include<stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char const *argv[])
{
    unsigned char rbuff[128];
    int pfd[2];
    pipe(pfd);
    pid_t id;

    id= fork();
    //statement below this -> parent & child

    if (id == 0)
    {
        //child
        read(pfd[0], rbuff, 128);
        printf("Inside child: %s\n",rbuff);
        close(pfd[0]);
    }
    else
    {
        //parent
        write(pfd[1], "Anjana\n", 7);
        close(pfd[1]);
    }
    return 0;
}