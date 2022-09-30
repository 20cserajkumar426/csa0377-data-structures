#include<stdio.h>
int main(){
int n;
printf("Enter A Number : ");
scanf("%d", &n);
int fac = 1;
while(n>0){
fac*=n;
n--;
}
printf("Factorial : %d", fac);
}

