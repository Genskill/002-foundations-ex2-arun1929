
#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int i, j, r, p;

	p = get_int("Enter type of pattern (1 or 2) ");
	r = get_int("Number of rows");
	if(p==1)
	 {
	      for(i=r;i>=1;i--)
	       {
	          for(j=1;j<=i;j++)
	           {
		    printf(" #");
		    }
		    printf("\n");
		}
	}
    	else
    	{
   	 for(i=1; i<=r; i++)
   	 {
       
       	 for(j=i; j<r; j++)
       	 {
           	 printf(" ");
        	}

       
        	for(j=1; j<=i; j++)
        	{
            printf("#");
        	}

        	printf("\n");
    		}
    	
   	} 
}
