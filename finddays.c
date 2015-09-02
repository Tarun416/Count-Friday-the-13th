#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int d1,d2,m1,m2,y1,y2,s=0,flag=0,i,j,k,p,u,a[100],t,l;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
//	char week[7][10];
	scanf("%d",&t);
	for(l=0;l<t;l++)
	{
	
	
	scanf("%d%d%d%d%d%d",&d1,&m1,&y1,&d2,&m2,&y2);
	//strcpy(week[5],"Friday");
	for(i=y1;i<=y2;i++)
	{
		if(((i%100!=0) && (i%4==0))|| (i%400==0))
		{
			month[1]=29;
			u=1;
		
		}
		else
		{
			month[1]=28;
			u=0;
		}
		if((y1==y2) && (i==y1))
		{
			for(j=m1;j<=m2;j++)
			{
				if(m1==m2)
				{
					for(k=d1;k<=d2;k++)
					{
						if(k==13)
						{
							for(p=0;p<j-1;p++)
							{
								s=s+month[p];
							}
							s=s+(k+i+(i/4)-2);
							s=s%7;
							
						
						}
					}
					   	if(u==1)
							{
								s=s-1;
							}
					if(s==5)
					{
						flag++;
						s=0;
						
					}
					s=0;
				}
				else if((m1<m2) && (j==m1))
				{
					for(k=d1;k<=month[j-1];k++)
					{
							if(k==13)
						{
								for(p=0;p<j-1;p++)
							{
								s=s+month[p];
							}
							s=s+(k+i+(i/4)-2);
							s=s%7;
							
						}
					}
					   if(u==1)
					   {
					   	s=s-1;
					   }
					if(s==5)
					{
						flag++;
					
						s=0;
					}	
					s=0;
				}
				else if((j!=m1) && (j!=m2))
				{
					for(k=1;k<=month[j-1];k++)
					{
						if(k==13)
						{
								for(p=0;p<j-1;p++)
							{
								s=s+month[p];
							}
							s=s+(k+i+(i/4)-2);
							s=s%7;
							
						}
					}
					    if(u==1)
					    {
					    	s=s-1;
						}
						if(s==5)
					{
						flag++;
						
						s=0;
						
					}	
					s=0;
				}
				else if((m1<m2 )&& (j==m2))
				{
					for(k=1;k<=d2;k++)
					{
						if(k==13)
						{
							for(p=0;p<j-1;p++)
							{
								
								s=s+month[p];
								
							}
							s=s+(k+i+(i/4)-2);
							s=s%7;
							
						}	
					}
					    if(u==1)
					    {
					    	s=s-1;
						}
						if(s==5)
					{
						flag++;
						s=0;
						
					}	
					s=0;
				}
			}
		}
		
		else if((y1<y2 )&& (i==y1))
		{
			for(j=m1;j<=12;j++)
			{
				if(j==m1)
				{
				
				  for(k=d1;k<=month[j-1];k++)
				  { 
					if(k==13)
						{
							for(p=0;p<j-1;p++)
							{
								s=s+month[p];
							}
							
							s=s+(k+i+(i/4)-2);
							s=s%7;
						}
				  } 
				      if(u==1)
				      {
				      	s=s-1;
					  }
				  
				  	if(s==5)
					{
						flag++;
						s=0;
					}	
					s=0;
			    }
			    else
			    {
			    	 for(k=1;k<=month[j-1];k++)
				  { 
					if(k==13)
						{
							for(p=0;p<j-1;p++)
							{
								s=s+month[p];
							}
							s=s+(k+i+(i/4)-2);
							s=s%7;
						}
				  } 
				      if(u==1)
				      {
				      	s=s-1;
					  }
				  	if(s==5)
					{
						flag++;
						s=0;
					}	
					s=0;
			    }
			}
		}
			
			else if((i!=y1 )&& (i!=y2))
			{
				for(j=1;j<=12;j++)
				{
					for(k=1;k<=month[j-1];k++)
					{
						if(k==13)
						{
							for(p=0;p<j-1;p++)
							{
								s=s+month[p];
							}
							s=s+(k+i+(i/4)-2);
							s=s%7;
						}
						    if(u==1)
						    {
						    	s=s-1;
							}
						if(s==5)
				     	{
						flag++;
						s=0;
						
				     	}
				     	s=0;
					}
				}
			}
			
			else if((i==y2 )&& (y1<y2))
			{
				for(j=1;j<=m2;j++)
				{
					if(j!=m2)
					{
						for(k=1;k<=month[j-1];k++)
						{
							if(k==13)
					     	{
					     		for(p=0;p<j-1;p++)
					     		{
					     			s=s+month[p];
								 }
								 
							s=s+(k+i+(i/4)-2);
							s=s%7;
					     	}
						}
						   if(u==1)
						   {
						   	 s=s-1;
						   }
							if(s==5)
				     	   {
						flag++;
						s=0;
						
				     	   }
				     	   s=0;
						
					}
					else if(j==m2)
					{
						for(k=1;k<=d2;k++)
						{
							if(k==13)
					     	{
					     		for(p=0;p<j-1;p++)
					     		{
					     			 s=s+month[p];
								 }
							s=s+(k+i+(i/4)-2);
							s=s%7;
					     	}
						}
						    if(u==1)
						    {
						    	 s=s-1;
							}
							if(s==5)
				     	   {
						flag++;
						s=0;
				     	   }
				     	   s=0;
					}
				}
			}
		}
	
	
	a[l]=flag;
	flag=0;
}
for(l=0;l<t;l++)
{
	printf("%d\n",a[l]);
}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

