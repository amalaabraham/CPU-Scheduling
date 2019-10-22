#include<stdio.h>
int main()
{
float c,p[10],w[10],t[10],avgw=0,avgt=0,temp,tem,pr[10];
int i,j;
printf("Enter the no of processes\n");
scanf ("%f",&c);
for (i=0;i<c;i++)
{
	
	
	printf("p[%d]:\n",i);
	scanf("%f",&p[i]);
	printf("enter the priority");
	printf("pr[%d]:\n",i);
	scanf("%f",&pr[i]);
}

for (i=0;i<c;i++)
{	

for(j=0;j<c-i-1;j++){
if (pr[j]>pr[j+1])

	{	temp=pr[j+1];
		pr[j+1]=pr[j];
		pr[j]=temp;
		tem=p[j+1];
		p[j+1]=p[j];
		p[j]=tem;


	}
}}
w[0]=0;
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
