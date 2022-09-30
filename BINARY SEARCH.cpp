#include<stdio.h>
int search_element(int a[],int search,int first,int last){
int mid = (first+last)/2;
if(a[mid] == search){
return mid;
}
else if(last == first && a[mid] != search){
return -1;
}
else{
if(search > a[mid]){
search_element(a,search,mid+1,last);
}
else if(search < a[mid]){
search_element(a,search,first,mid-1);
}
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
int inx = search_element(arr,s,0,n-1);
if(inx != -1){
printf("Element Found at index : %d ", inx);
}
else{
printf("Element Not Found");
}
return 0;
}

