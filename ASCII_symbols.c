#include <stdio.h>
#include<stdlib.h>
#include"box.h"
void main() {

	int i=0,x;
	char ch;
	for(i=0; i<=256; i++) {
		printf("%d-%c\t", i, i);
	}

	//box(10,10,40,26);
	//boxErase(10,10,40,26);
	/*while(1)
	{
		if(kbhit())
		{
			ch = getch();
			if(ch == '\r') exit(0);
		}
		printf("%d\t",ch);
		getch();
	}*/

	printf("hi%chello",13);

}
