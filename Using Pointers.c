#include <stdio.h>
int main()
{
    int a[5];
    int *arr;
    for(int i=0;i<=4;i++)
    {
        printf("Enter Number %d: ", i+1);
        scanf("%d", &a[i]);
    }
    arr=&a[0];
    for(int i=0;i<=4;i++)
    {
        if(*arr>a[i])
        {
           arr= &a[i];
        }
    }
    printf("-------------------------------\n");
    printf("min           : %d\n", *arr);
    printf("-------------------------------\n");
    printf("address of min: %p", arr);
}
