#include<cstdio>
#include<cstdlib>
#include<iostream>
#define max 6
using namespace std;

void Swap(int*,int*);
int main()
{
	int num[max] = {9,3,1,4,6,8};
	
	for(int i=0;i<max-1;i++)
	{
		int selectI = i;
		for(int j=i+1;j<max;j++)
		{
			if(num[j]<num[selectI])
				selectI = j;
		}
		
		if(selectI!=i)
			Swap(&num[i],&num[selectI]);
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
