#include "main.h"

void times_table(int n)
{
	int i, j;
	if (n >= 0 && n <= 15)
	{
	    for(j = 0; j <= n; j++)
	    {
	    
	    for(i = 0; i <= n; i++)
	    {
	        int x = j * i;
	        
	        _putchar(x);
	        _putchar(',');
	    }
	    
	    _putchar('\n');
	    
	    }
	}
}
