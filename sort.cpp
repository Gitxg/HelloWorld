#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sort(int *nums, int begin, int end)
{
	//递归函数的结束条件 
	if(begin>end) return;
	
	int base = nums[begin];
	int i = begin;
	int j = end;
	while(i<j)
	{
		//从右边找比基准数小的数，并保存下标 
		while(i<j && nums[j]>=base)
		j--;
     	//从左边找比基准数大的数，并保存下标 
		while(i<j && nums[i]<=base)
		i++;
		
		if(i<j)
		{
			int buf = nums[i];
			nums[i] = nums[j];
			nums[j] = buf;
		}
	}
	nums[begin]=nums[i];
	nums[i] = base;
	
	sort(nums,begin,i-1);
	sort(nums,i+1,end);
}

void quicksort(int *nums, int n)
{
	sort(nums,0,n);
}

int main()
{
	int nums[] = {12,131,21,4,-27};
    int len = sizeof(nums)/sizeof(nums[0]);
    
	quicksort(nums,len-1);
	
	cout << "排序之后为:";
	for(int i=0; i<len; i++)
	   cout<< nums[i] <<" ";
	cout <<endl;
	return 0;
} 













