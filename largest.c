#include<stdio.h>
int main(){
    int array[10];
    printf("\nenter your array element");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\noutput of  largest element in array");
    int max=array[0];
    for(int i=0;i<10;i++)
    {
        if(max<array[i])
        max=array[i];
    }
    printf("\nlargest element of array %d",max);

}