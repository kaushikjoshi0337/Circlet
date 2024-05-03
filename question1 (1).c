#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
for(int  row=41;row<=45;row++){
for(int col=41;col<=row;col++){
printf("%d ",col);
}
printf("\n");
}

getch();
}