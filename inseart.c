#include<stdio.h>
void insertion_sort(int A[],int n)
{
int i,j,t;
for(i=1;i<n;i++)
{
j=i;
while(A[j]<A[j-1] && j>0)
{
t=A[j];
A[j]=A[j-1];
A[j-1]=t;
j--;
}
}
}
void main()
{
int i,n,a[100];
printf("Enter the number of elements");
scanf("%d",&n);
printf("Enter the array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
insertion_sort(a,n);
printf("The sorted elements in array");
for(i=0;i<n;i++)
printf("%d\t",a[i]);

}
