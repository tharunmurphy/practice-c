#include<stdio.h>
int main()
{
    int a,table,range;
    printf("Enter the Table you want : ");
    scanf("%d",&table);
    printf("Enter the Range : ");
    scanf("%d",&range);
    for(a=1;a<=range;a++)
    {
        printf("%d x %d = %d\n",table,a,table*a);
    }
}