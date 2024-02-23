#include<stdio.h>
int main(){
int i,j,range;
printf("Enter the Range : ");
scanf("%d",&range);
int a=range+1;
char b='A';
char c='A';
for(i=1;i<=range;i++){
    for(j=a;j>1;j--){
        printf(" ");
    }
    for(j=1;j<=i;j++){
        printf("%c",b);
        b=b+1;
    }
        b='A';
    for(j=c-1;j>=b;j--){
        printf("%c",j);
    }
        c=c+1;
    for(j=a;j>1;j--){
        printf(" ");
    }
    a=a-1;
    printf("\n");
}
}
