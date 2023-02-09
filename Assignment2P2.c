#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct date
{
	int dat;
	int month;
	int year;
}date;
void main()
{
	date d;
	int s,m,add=45,l,y;
	printf("Enter Date \t Enter Month\tEnter Year:\n");
	scanf("%d%d%d",&d.dat,&d.month,&d.year);
	printf("Current date is :");
	printf("\n\t %d/%d/%d\n",d.dat,d.month,d.year);
	if(d.dat>31||d.month>12)
	{
		printf("INVALID");
		exit(0);
	}
	else if(d.month==2)
	{
		if(d.year%400==0||d.year%4==0 && d.year%100!=0)
		{
			if(d.dat>29)
			{
				printf("INVALID !!");
				exit(0);
			}
		}
		else if(d.dat>28)
		{
			printf("INVALID !!");
			exit(0);
		}
	}
	printf("\nNew Date is :\n");
	
	s=d.dat+add;
	m=d.month;
	// code for 31 days month
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	{
		if(s>=31)
		{
			d.month++;
			d.dat=s-31;
			l=d.dat;
			if(l>31)
			{
				d.month++;
				if(d.month>12)
				{
					d.year++;
					d.dat=l-31;
				    printf("\n\t %d/%d/%d",d.dat,d.month-12,d.year);
				}
				else
				{
					d.dat=l-31;
				    printf("\n\t %d/%d/%d",d.dat,d.month,d.year);
				}
			}	
		}
		else
		{
			printf("\n\t %d/%d/%d",d.dat+add,d.month,d.year);
		}
	}
	//code for 30 days month
	else if(m==4||m==6||m==9||m==11)
	{
		if(s>=30)
		{
			d.month++;
			d.dat=s-30;
			l=d.dat;
			if(l>30)
			{
				d.month++;
				if(d.month>12)
				{
					d.year++;
					d.dat=l-30;
				    printf("\n\t %d/%d/%d",d.dat,d.month-12,d.year);
				}
				else
				{
				    printf("\n\t %d/%d/%d",d.dat,d.month,d.year);
				}
			}
		}
		else
		{
			printf("\n\t %d/%d/%d",d.dat+add,d.month,d.year);
		}
	}
	// code for february month
	else
	{
		y=d.year;
		if((y%400==0)||(y%4==0)&&(y%100!=0))
		{
			if(s>=29)
			{
				d.month++;
			    d.dat=s-29;
			    l=d.dat;
			    if(l>29)
			    {
				   d.month++;
				   d.dat=l-29;
				   printf("\n\t %d/%d/%d",d.dat,d.month,d.year);
			    }  
				else
				{
				    printf("\n\t %d/%d/%d",d.dat,d.month,d.year);
				} 
			}
			else
			{
				printf("\n\t %d/%d/%d",d.dat+add,d.month,d.year);
			}
		}//end leap
		else
		{
			if(s>=28)
			{
				d.month++;
			    d.dat=s-28;
			    l=d.dat;
			   if(l>28)
			    {
				  d.month++;
				  d.dat=l-28;
				  printf("\n\t %d/%d/%d",d.dat,d.month,d.year);
			    }
			    else
				{
				    printf("\n\t %d/%d/%d",d.dat,d.month,d.year);
				}
			}
			else
			{
				printf("\n\t %d/%d/%d",d.dat+add,d.month,d.year);
			}
		}
	}
}
