#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    int fd;

    fd= open("anjana.txt", O_WRONLY | O_CREAT);
    
    if(-1 == fd)
    {
        perror("Error to open: \n");
        return -1;
    }
    
    write(fd, "Bhilai", 6);
    close(fd);
    return 0;
}
