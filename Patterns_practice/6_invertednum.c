#include<stdio.h>
int main(){
int i,j,range;
printf("Enter the Range : ");
scanf("%d",&range);
for(i=range;i>0;i--){
for(j=1;j<=i;j++){
printf("%d",j);
}
printf("\n");
}
}
