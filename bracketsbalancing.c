#include<stdio.h>
void main()
{
	char e[50];
	int i,ctr=0;
	printf("enter the expression\n");
	scanf("%s",e);
	for(i=0;e[i]!='\0';i++)
	{
		if(e[i]=='(')
		{
			ctr++;
		}
		else if(e[i]==')')
		{
			ctr--;
		}
	}
	if(ctr==0)
	{
		printf("expression is balanced\n");
	}
	else
	{
		printf("expression is not balanced\n");
	}
}
