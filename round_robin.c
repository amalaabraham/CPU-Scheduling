#include<stdio.h>
int main()
{
int n ,p[20],bt[20],p1[20],wt[20],tat[20],bt_rem[20],t=0,i;
float atat,awt,ttat=0,twt=0;
printf("Enter the no. of process\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
p[i]=i+1;
printf("\n enter the burst time of the process:\n");
scanf("%d",&bt[i]);
}
for(i=0;i<n;i++)
{
bt_rem[i]=bt[i];
wt[i]=0;
}
while(1)
{
int done =1;
for(i=0;i<n;i++)
{
if(bt_rem[i]>0)
{
done=0;
if(bt_rem[i]>2)
{
t=t+2;
bt_rem[i]=bt_rem[i]-2;
}
else
{
t=t+bt_rem[i];
wt[i]=t-bt[i];
bt_rem[i]=0;
}
}
}
if(done==1)
{
break;
}
}
for(i=0;i<n;i++)
{

tat[i]=wt[i]+bt[i];
}
for(i=0;i<n;i++)
{
twt=twt+wt[i];
ttat=ttat+tat[i];
}
atat=ttat/n;
awt=twt/n;
printf("\nprocess\tburst time\tturnaround time\twaiting time");
for(i=0;i<n;i++)
{
printf("\n%d\t%d\t\t%d\t\t%d",p[i],bt[i],tat[i],wt[i]);
}
printf("\naverage waiting time= %f",awt);
printf("\naverage turn around time = %f",atat);
return 0;
}
