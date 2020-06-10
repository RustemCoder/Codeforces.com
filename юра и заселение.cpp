#include <iostream>

int main()
{
	int n;
	std::cin>>n;
	int k=0;
	int a[n],q[n];
	
	while(n)
	{
		for(int i=0;i<n;i++)
		{
			
			std::cin>>a[i]>>q[i];
			
		}
		
		for(int i=0;i<n;i++)
		{
				if(q[i]-a[i]>=2)
				{
					k++;
				}
			
		}
	
		
	std::cout<<k;
	return 0;	
		
	}
	
	
	
	
}
