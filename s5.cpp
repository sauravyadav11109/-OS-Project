


pr[0].execute=1;   		//process with minimum arrival time will be executed first
pr1[ta]=pr[0];
ta++;

tot_bt=pr[0].arrival_time+pr[0].burst_time;

for(i=0;i<n-1;i++)
	
	{  
		calc_prior();		
		prior_sort();
		tot_bt+=pr[0].burst_time;		
		ta++;	
	}
	
int max_bt=pr1[0].arrival_time+pr1[0].burst_time;
pr1[0].waiting_time=0;
pr1[0].turnaround=pr[i].burst_time;

	for(i=1;i<n;i++)
	{
		pr1[i].waiting_time=max_bt-pr1[i].arrival_time;				//calculating waiting time after full execution of process
		
		pr1[i].turnaround=pr1[i].waiting_time+pr1[i].burst_time;	//calculating turnaround time for each process
		max_bt+=pr1[i].burst_time;
	}

printf("\n\nProcess	   Arrival_time     Burst_time    waiting time     Turnaround time\n");

for(i=0;i<n;i++)
{
	printf("\n  %s\t\t%d\t\t %d\t    %f\t     %f\n",pr1[i].pname,pr1[i].arrival_time,pr1[i].burst_time,pr1[i].waiting_time,pr1[i].turnaround);
}

float Avg_turnaround=0,Avg_waiting=0;
int t=0;

for(i=0;i<n;i++)
{   //calculating Average turn around time and average waiting time of processes excluding process with burst time=0
	if(pr1[i].burst_time!=0)
	{
	t++;
	Avg_turnaround+=pr1[i].turnaround;		
	Avg_waiting+=pr1[i].waiting_time;
	}
}

Avg_turnaround/=t;
Avg_waiting/=t;

printf("\n------------------------------------------------------------------------------\n");
printf("Average Turn Around Time=%f\n",Avg_turnaround);
printf("Average Waiting time=%f\n",Avg_waiting);


}
