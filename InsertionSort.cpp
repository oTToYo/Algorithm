#include<cstdio>
#include<cstdlib>
#include<iostream>
#define max 6

using namespace std;


int main()
{
	int num[max] = {9,3,1,4,6,8};
	for(int i=1;i<max;i++)
	{
		int current = num[i];
		int j;
		for(j=i-1;j>=0;j--)
		{
			if(current<num[j])
				 num[j+1] = num[j];
			else
				break;
		}
		num[j+1] = current;
	}
	
	for(int i=0;i<max;i++)
	{
		cout<<num[i];
		if(i==max-1)
			break;
		cout<<",";
	}
	
	return 0;
}

