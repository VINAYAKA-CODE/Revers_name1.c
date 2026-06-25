#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];
	int length,i;
	printf("enter the name\n");
	scanf("%s",&name);
	length=strlen(name);
	printf("The currect order of name is\n");
	for(i=0;i<length;i++)
	{
		printf("%c\n",name[i]);
	}
	printf("The reversing order of name is\n");
	for(i=length-1;i>=0;i--)
	{
		printf("%c\n",name[i]);
	}
	getch();
	return 0;
}
