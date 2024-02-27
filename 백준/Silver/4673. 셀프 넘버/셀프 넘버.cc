#include <iostream>
		
using namespace std;

int main(void)
{
	int sum=0;
	int a;
	for(int i=1;i<10000;i++)
	{
		a=1;
	
		for(int j=1;j<10000;j++)
		{
			
		    sum=j;
		    sum=sum+sum/1000+sum%1000/100+sum%1000%100/10+sum%1000%100%10;
		    if(sum==i)
		    {
		    	a=0;
		    }
		 }
		 if(a)
		    {
		    	cout<<i<<"\n";
		    }
		
		
	}
}
			
		
