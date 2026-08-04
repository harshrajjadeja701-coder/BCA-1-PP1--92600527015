// 2. 2 Values from user and Perform All Arithmetic Operations.

#include<stdio.h> 
#include<conio.h> 
 
void main() 
{ 
    float x,y; 
    clrscr(); 
    printf("\n Enter Number 1: "); 
    scanf("%f",&x); 
    printf("\n Enter Number 2: "); 
    scanf("%f",&y); 
  
    printf(“Addition Is: %.2f \n”,x+y); 
    printf(“Subtraction Is: %.2f \n”,x-y); 
    printf(“Multiplication Is: %.2f \n”,x*y); 
    printf(“Division Is: %.2f \n”,x/y); 
  
    getch(); 
 
}