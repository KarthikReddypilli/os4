#include<stdio.h>
main()
{
	int comp(int a,int b);
	int bt[5],ct[5],wt[5],n,tt[5];
	float awt=0,att=0;
	printf("enter the number of argument to be passed");
	scanf("%d",&n);
	if(n==5)
	{
		for(int i=0;i<5;i++)
		{
			scanf("%d",&bt[i]);
		}
		ct[0]=bt[0];
		wt[0]=comp(ct[0],bt[0]);
		for(int j=1;j<5;j++)
		{
			ct[j]=ct[j-1]+bt[j];
			wt[j]=comp(ct[j],bt[j]);
		}
		int s1=0,s2=0;
		for(int y=0;y<5;y++)
		{
			s1+=ct[y];
			s2+=wt[y];
		}
		att=s1/5;
		awt=s2/5;
		printf("\naverage turn around time is = %f\n",att);
		printf("average waiting time is = %f",awt);
	}
	else if(n<5)
	{
		printf("arguments are less than 5");
	}
	else
	{
		printf("arguments are more than 5");
	}
}
int comp(int a,int b)
{
	return (a-b);
}
