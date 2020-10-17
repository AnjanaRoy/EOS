#include<stdio.h> 
int add(int,int);
int sub(int,int);
int mul(int,int);

int main(int argc, char const agrv[])
{
    printf("addition=%d\n",add(20,30));
    printf("substraction=%d\n",sub(40,20));
    printf("multiplication=%d\n",mul(5,5));
    return 0;
}
