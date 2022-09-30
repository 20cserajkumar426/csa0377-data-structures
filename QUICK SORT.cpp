#include<stdio.h>
void print_array(int a[],int n){
for(int i = 0;i<n;i++){
printf("%d \t", a[i]);
}
}
void swap(int *a, int*b){
int temp;
temp = *a;
*a = *b;
*b = temp;
}
int partition(int a[], int l ,int h){
int pivot = a[l];
int i=l,j,k,temp = 0;
j = h;
while(i<j){
do{
i++;
}while(a[i] <= pivot);
do{
j--;
}while(a[j] > pivot);
if(i<j){
swap(&a[i],&a[j]);
}
}
swap(&a[l],&a[j]);
return j;
}
void quick_sort(int a[], int l, int h){
int pi;
if(l<h){
pi = partition(a,l,h);
quick_sort(a,l,pi);
quick_sort(a,pi+1,h);
}
}
int main(){
int n;
printf("Enter Array Size : ");
scanf("%d", &n);
int arr[n];
printf("Enter Array Elements : ");
for(int i = 0;i<n;i++){
scanf("%d", &arr[i]);
}
quick_sort(arr,0,n-1);
print_array(arr,n);
return 0;
}

