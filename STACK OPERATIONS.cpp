#include<stdio.h>
int size,top = -1;
void push(int s[]){
if(top == size){
printf("Insertion Not Possible.");
}
else{
int x;
printf("Enter Element to be Inserted : ");
scanf("%d", &x);
top = top + 1;
s[top] = x ;
}
}
void pop(int s[]){
if(top == -1){
printf("Stack Is Empty. Popping Not Possible");
}
else{
printf("Popped Element : %d ", s[top]);
top = top - 1;
}
}
void display(int s[]){
if(top == -1){
printf("Stack is Empty.\n");
}
else{
printf("Current Stack : \n");
for(int i = 0;i<=top;i++){
printf("%d\t", s[i]);
}
}
}
int main(){
int choice;
printf("Enter Array Size : ");
scanf("%d", &size);
int stack[size];
printf("\nOperations Available \n");
printf("1. Push \n2. Pop \n3. Display");
while(1){
printf("\nEnter Choice : ");
scanf("%d", &choice);
switch(choice){
case 1:
push(stack);
break;
case 2:
pop(stack);
break;
case 3:
display(stack);
break;
default:
printf("Invalid Choice. \n");
}
}
}

