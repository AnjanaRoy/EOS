#include<stdio.h>
#include <sys/types.h>
#include<unistd.h>

int main(int argc, char const *argv[])
{
    pid_t id;
    pid_t par_id;
    id = getpid();
    par_id = getppid();
    printf("PID: %d\n",id);
    printf("PPID: %d\n", par_id);
    return 0;
}
