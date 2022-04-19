#include<stdio.h>
#include<conio.h>
#include<windows.h>
void gotoxy(int x , int y)
{
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void main()
{
int i;
for(i=1 ; i<=10 ; i++)
{
	gotoxy(10,i);
	printf("p");
	Sleep(50);
	gotoxy(10,i);
	printf(" ");

		
}
gotoxy(10,10);
printf("p");

for(i=1 ; i<=10 ; i++)
{
	gotoxy(11,i);
	printf("a");
	Sleep(50);
	gotoxy(11,i);
	printf(" ");
		
}
gotoxy(10,10);
printf("pa");

for(i=1 ; i<=10 ; i++)
{
	gotoxy(12,i);
	printf("v");
	Sleep(50);
	gotoxy(12,i);
	printf(" ");
		
}
gotoxy(10,10);
printf("pav");

for(i=1 ; i<=10 ; i++)
{
	gotoxy(13,i);
	printf("a");
	Sleep(50);
	gotoxy(13,i);
	printf(" ");
		
}
gotoxy(10,10);
printf("pava");

for(i=1 ; i<=10 ; i++)
{
	gotoxy(14,i);
	printf("n");
	Sleep(50);
	gotoxy(14,i);
	printf(" ");
		
}

gotoxy(10,10);
printf("pavan");

}

