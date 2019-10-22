#include<stdio.h>
int main()
{

printf("Enter the no of processes\n");
scanf ("%f",&c);
for (i;i<c;i++)
{
	printf("Enter the burst time of processes\n");
	printf("p[%d]:\n",i);
	scanf("%f",&p[i]);
}

for (i=0;i<c;i++)
{	

for(j=0;j<c-i-1;j++){
if (p[j]>p[j+1])

	{	temp=p[j+1];
		p[j+1]=p[j];
		p[j]=temp;

	}
}}

for (i=1;i<c;i++)
{

for (j=0;j<i;j++)
{
w[i]=w[i-1]+p[j];

}
}

for (i=0;i<c;i++)
{
t[i]=p[i]+w[i];
}

printf("BT\tWT\tTAT\t\n");
for (i=0;i<c;i++)
{
  printf("%f\t%f\t%f\t\n",p[i],w[i],t[i]);
}

for(i=0;i<c;i++)
{
	avgw=avgw+w[i];
}
for(i=0;i<c;i++)
{
	avgt=avgt+t[i];
}
printf("average waiting time=%f\n",avgw/c);
printf("average turn around time=%f\n",avgt/c);

return 0;
}
