#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n)
{
	int j;
	for(int i=1;i<n;i++)
	{
		j=i-1;
		int e = arr[i];
		while(j>=0 and arr[j] > e){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = e;
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	insertion_sort(arr,n);
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}