#include <iostream>

int main()

{
	int n;
	int x,y,z;
	std::cin>>n;
	
	
	int sum1 =0;
	int sum2=0;
	int sum3=0;
	while(n--)
	{
		
		
		
		std::cin>>x>>y>>z;
		
		sum1 = sum1+x;
		sum2 = sum2 +y;
		sum3=sum3+z;
		
	}
	
	
	if(sum1==0 && sum2==0 && sum3==0)
	{
		std::cout<<"YES";
	}
	else
	std::cout<<"NO";
	
	return 0;
	
	
	
}
