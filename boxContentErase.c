//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

#include"box.h"
//using namespace std;

void boxContentErase(int len , int bre , int x , int y)
{
	int i , j;
	for(j = y+1 ; j<bre ; j++)
		for(i=x+1 ; i<len ; i++)
		{
			gotoxy(i,j);
			printf(" ");
		}			
}
int main()
{
	
	box(40,10,0,0);
	gotoxy(4,4);
	printf("wdkfbksbfkj");
	gotoxy(34,7);
	printf("wdkfbksbfkj");
	gotoxy(24,1);
	printf("wdkfbksbfkj");
	gotoxy(11,9);
	printf("wdkfbksbfkj");
	getch();
	boxContentErase(40,10,0,0);
	getch();
	return 0;
}




