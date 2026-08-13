// 7. Find largest out of three numbers

#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	clrscr();
	printf("\n Enter Number 1: ");
	scanf("%d",&x);
	printf("\n Enter Number 2: ");
	scanf("%d",&y);
    printf("\n Enter Number 3: ");
	scanf("%d",&z);
    
    if(x>y && x>z){
        printf("Number %d is largest",x);
    }
    else if(y>z && y>x){
        printf("Number %d is largest",y);
    }
    else{
        printf("Number %d is largest",z);
    }
    getch();

}
