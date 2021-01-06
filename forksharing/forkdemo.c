#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int count = 0;

int main(int argc, char const *argv[])
{
    pid_t id;

    printf("Before fork: \n");//parent
    id = fork();

    if(0==id)
    {
        printf("\nchild process id:%d\t pid:%d\t ppid:%d\n",id, getpid(), getppid());

        printf("count in child: %d\n",count);
    }else
    {
        count++; //parent
        printf("\nparent process id:%d\t pid:%d\t ppid:%d\n",id, getpid(), getppid());
    }
    
    return 0;
}
