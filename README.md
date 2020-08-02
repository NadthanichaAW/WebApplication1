#include <stdio.h>
int main()
{
	int kon,tang,x;
	
	scanf("%d",&kon);
	if(kon%4==0) 
	{
		x = kon/4;
		tang = (kon*249)-(249*x);
		printf("%d",tang); 
		
	}else if(kon%4!=0)
	{
		x = kon/4;
		tang = (kon*249)-(249*x);
		printf("%d",tang);
	}
}
