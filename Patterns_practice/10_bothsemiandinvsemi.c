#include<stdio.h>
int main(){
int i,j,range;
char c='*';
printf("Enter the Range : ");
scanf("%d",&range);
for(i=1;i<=range;i++){
for(j=1;j<=i;j++){
printf("%c",c);
}
printf("\n");
}
for(i=range-1;i>0;i--){
for(j=1;j<=i;j++){
printf("%c",c);
}
printf("\n");
}
}
