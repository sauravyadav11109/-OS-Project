for(i=0;i<n;i++)
{
	pr[i].execute=0;			//initialising execute=0 and priority=0 for every process
	pr[i].priority=0;
}

//sorting as per arrival time

    for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
	{
		if(pr[j].arrival_time>pr[j+1].arrival_time)			
		{
			temp=pr[j];
			pr[j]=pr[j+1];				
			pr[j+1]=temp;
		}
	}
}   
