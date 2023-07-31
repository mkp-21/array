#include<stdio.h>
int main()
{
    int array[10];
    printf("read element of array");
    printf("\nenter array element");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("ouput of array elememt");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",array[i]);
    }
}