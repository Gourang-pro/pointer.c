#include<stdio.h>
#include<conio.h>

int main()
{

    int a=10;
    int *ptr;
    
    ptr=&a;                     //-12
    printf("%d\n",ptr);         //-12
    printf("%d\n",*ptr);        // 10
    printf("%d\n",&a);          //-12
    printf("%d\n",a);             // 10
      printf("%d",a); 
    return 0;
}