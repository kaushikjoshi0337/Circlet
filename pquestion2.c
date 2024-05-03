#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int chara=11;
for(int  row=11;row<=15;row++){
for(int col=row;col>=11;col--){
printf("%d ",chara);
chara++;
}
printf("\n");
}
getch();
}