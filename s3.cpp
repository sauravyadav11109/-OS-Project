void main()
{

int i,j;
printf("   enter no. of processes:");
scanf("%d",&n);								


for(i=0;i<n;i++)
{
	printf("\nenter process %d name:",i+1);
	scanf("%s",&pr[i].pname);               //pname->process name
	
	printf("enter arrival time:");
	scanf("%d",&pr[i].arrival_time);		//arrival_time->process arrival time
	
	printf("enter burst time:");
	scanf("%d",&pr[i].burst_time);			//burst_time->process burst time
	
}
