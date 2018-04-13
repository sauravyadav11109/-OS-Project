#include<stdio.h>
#include<time.h>

struct prior
{
	char pname[10];
	int arrival_time,burst_time;
	int execute;
	float waiting_time,turnaround;
	float priority;
	
}pr[20],pr1[20],temp;

int ta=0,tot_bt=0,n;

void calc_prior()			//function to calculate priorities
{    int i;
	for(i=0;i<n;i++)
	{
	 if(pr[i].execute==0)		//only priorities of processes whose execute=0 that are not yet executed will be calculated
	 {
	 	if(pr[i].arrival_time<=tot_bt)
		{	
			if(pr[i].burst_time==0)
			{
				pr[i].waiting_time=tot_bt-pr[i].arrival_time;
				pr[i].priority=9999;							//taking a possible larger value instead of infinity for process with burst=0
			}
			else
			{
				pr[i].waiting_time=tot_bt-pr[i].arrival_time;
		
				pr[i].priority=1+(pr[i].waiting_time/pr[i].burst_time);
			}
		}
	 }
    
	}
}
