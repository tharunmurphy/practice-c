#include<stdio.h>
int main()
{
    int a=1;
    int table,range;
    printf("Enter the Table you want : ");
    scanf("%d",&table);
    printf("Enter the Range : ");
    scanf("%d",&range);
    do{
        printf("%d x %d = %d\n",table,a,table*a);
        a=a+1;
    }while(a<=range);
}