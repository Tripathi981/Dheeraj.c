#include<stdio.h>
#include<conio.h>
void main(){

int n,i,fact=1;
clrscr();
printf("enter the value of n");
scanf("%d",&n);

for(i=1;i<=n;i++){
fact=fact*i;
}
printf("the facytorial of %d is %d",n,fact);
 getch();
 }