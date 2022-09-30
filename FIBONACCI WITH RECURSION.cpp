#include<stdio.h>

void fibonacci(int a,int b,int n){
  int c;
  if(n==0){
     return;
  }
  else{
    c=a+b;
    printf("%d\t",c);
    n--;
    return fibonacci(b,c,n);
   }
}
int main(){
  int n;
  printf("Enter a Limit: ");
  scanf("%d",&n);

  printf("0 1 ");
  fibonacci(0,1,n-2);

}

