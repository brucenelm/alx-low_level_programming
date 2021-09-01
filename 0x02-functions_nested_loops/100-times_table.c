void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
	    for(int j = 0; j <= n; j++)
	    {
	    
	    for(int i = 0; i <= n;i++)
	    {
	        int x = j * i;
	        
	        printf("%d",x);
	        printf(",");
	    }
	    
	    printf("\n");
	    
	    }
	}
}
