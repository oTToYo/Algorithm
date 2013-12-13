#include<iostream>
#include<cstdlib>
#define max 6
using namespace std;

void merge(int left,int right, int l[],int r[],int s[]);
void mergeSort(int n ,int s[]);

int main()
{
	int num[max] = {9,3,1,4,6,8};
	
	mergeSort(max,num);
	for(int i=0;i<max;i++)
		cout<<num[i];
	return 0;
}


void mergeSort(int n ,int s[])
{
	if(n>1)
	{
		int left = n/2;
		int right = n - left;
		
		int* l = new int[left];
		int* r = new int[right];
		
		for(int i=0;i<left;i++)
			l[i] = s[i];
			
		for(int j=0;j<right;j++)
			r[j] = s[left+j];

		mergeSort(left, l);
		mergeSort(right,r);
		merge(left,right,l,r,s);
		//delete [] l,r;
	}
	
}

void merge(int left,int right, int l[],int r[],int s[])
{
	int i,j,k;
	i=j=k=0;
	
	while(i<left&&j<right)
	{
		if(l[i]<r[j])
		{
			s[k] = l[i];
			i++;
		}
		else
		{
			s[k] = r[j];
			j++;
		}
		k++;
	}
	
	if(i==left)
		while(j<right)
			s[k++] = r[j++];
	else if(j==right)
		while(i<left)
			s[k++] = l[i++];
}
