#include<cstdio>
#include<cstdlib>
#include<iostream>
#define max 6
using namespace std;

void Swap(int*,int*);
int main()
{
	int num[max] = {9,3,1,4,6,8};
	
	for(int i=max-1;i>=0;i--)
	{
		for(int j=0;j<i;j++)
		{
			int x = num[j];
			int y = num[j+1];
			
			if(x>y)
				Swap(&num[j],&num[j+1]);
			
		}
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

void Swap(int* a,int* b)
{
	int temp=0;
	temp = *a;
	*a = *b;
	*b= temp;
	
}
