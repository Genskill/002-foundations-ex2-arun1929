#include<stdio.h>
#include<cs50.h>
int main(void)
{
	float a,b,c;
	a = get_float("side 1 ");
	b = get_float("side 2 ");
	c = get_float("side 3 ");
	
	if(a>b&&a>c)
	
		if(b*b+c*c==a*a)
		{
		printf("Yes\n");		
		}
		else
		{
		printf("No\n");
		}
	
	else if(b>a&&b>c)
	{
		if(a*a+c*c==b*b)
		{
		printf("Yes\n");
		}
		else
		{
		printf("No\n");
		}
	}
	else
	{
		if(a*a+b*b==c*c)
		{
		printf("Yes\n");
		}
		else
		{
		printf("No\n");
		}
	}
	
	
}
