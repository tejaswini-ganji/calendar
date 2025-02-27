#include<stdio.h>
void finding_day()
{
	int d,m,year,daynum,year1,year2,n=0,cc=0;
	printf("\n\nEnter date in dd mm yy format:");
	scanf("%d %d %d",&d,&m,&year);
	int mc[]={1,4,4,0,2,5,0,3,6,1,4,6};
	char *days[]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
	year1=1900;
	year2=1999;
	if(year>=year1 && year<=year2)
	 cc=0;
	else
	{
		while(year>year1)
		{
		year1+=100;
		year2+=100;
		n=1;
		cc=-(2*n-1);
		n++;
		if(year>=year1 && year<=year2)
		  break;
	    }
	    while(year<year1)
		{
		year1-=100;
		year2-=100;
		n=0;
		cc=(2*n+1);
		n++;
		if(year>=year1 && year<=year2)
		  break;
	    }
    }
	daynum=((d+(year%100)+((year%100)/4)+mc[m-1])%7)+cc;
	printf("\n\n%d-%d-%d is %s :)\n\n",d,m,year,days[daynum]);
}
