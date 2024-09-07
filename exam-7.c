#include <stdio.h>

main() 
{
   
    for (int i=10;i>=6;i--) 
	{
        int val= i*i;

        for (int j=10;j>=i;j--) 
		{
            printf("%d ",val);
        }
        printf("\n");
    }

}