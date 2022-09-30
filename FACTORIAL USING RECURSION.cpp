#include<stdio.h>
int factorial(int x){
if(x ==0){
return 1;
}
else{
return factorial(x-1)*x;
}
}
int main(){
int n;
printf("Enter A Number : ");
scanf("%d", &n);
int fac = factorial(n);
printf("Factorial : %d", fac);
}

