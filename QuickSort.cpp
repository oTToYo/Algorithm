#include<iostream>
#include<cstdlib>
#define max 6
using namespace std;

void quickSort(int l,int h,int s[]);
void partition(int l,int h,int& pivot,int s[]);
void swap(int&,int&);
int main()
{
	int num[max] = {9,3,1,4,6,8};
	
	quickSort(0,max,num);
	for(int i=0;i<max;i++)
		cout<<num[i];
	return 0;
}

void quickSort(int l,int h,int s[])
{
	int pivot = 0;
	if(h>l)
	{
		
		partition(l,h,pivot,s);
		quickSort(l,pivot,s);
		quickSort(pivot+1,h,s);
	}
	
}
void partition(int l,int h,int& pivot,int s[])
{
	int pivotItem = s[l];
	int j = l;
	for(int i=l+1;i<h;i++)
	{
		if(s[i]<pivotItem)
		{
			j++;
			swap(s[i],s[j]);
		}
	}
	pivot = j;
	swap(s[l],s[pivot]);
	
}

void swap(int& a,int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
