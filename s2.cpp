void prior_sort()			//function to sort the processes as per priority after every execution
{	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{		
			if(pr[j].priority<pr[j+1].priority)	
			{
				temp=pr[j];
				pr[j]=pr[j+1];				
				pr[j+1]=temp;
			}
		}
	}
	pr[0].execute=1;			//setting execute to 1 i.e the process is executed
	pr1[ta]=pr[0];
	
	for(i=0;i<n;i++)
	{
		pr[i].priority=0;
    }
}


