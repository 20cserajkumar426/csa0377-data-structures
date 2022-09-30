#include<stdio.h>
int search(int a[],int search, int size){
int i;
for(i = 0;i<size;i++){
if(search == a[i]){
return i;
break;
}
}
if(i == size){
return -1;
}
}
int main(){
int n;
printf("Enter Array Size : ");
scanf("%d", &n);
int arr[n];
printf("Enter ArraY Elements : ");
for(int i = 0;i <n;i++){
scanf("%d", &arr[i]);
}
int s;
printf("Enter Search Element :");
scanf("%d", &s);
int inx = search(arr,s,n);
if(inx != -1){
printf("Element Found at : %d ", inx);
}
else{
printf("Element Not Found");
}
return 0;
}

