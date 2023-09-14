#include<stdio.h>
int main()
{
    int num=0;
    printf("enter a number\n");
    scanf("%d",&num);
    do{
        printf("%d\n",num);
        num+=1;
    }while (num<20);
    
    return 0;
}