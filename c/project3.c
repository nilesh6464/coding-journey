#include<stdio.h>
int main()
{
    printf("hello\n");
    int a=57;
   int* ptra =&a;
    printf("the value of a is %d\n", a);
    printf("the address of a is %d\n",*ptra);
    return 0;

}