#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,d;
	cin>>n>>d;
	d=d%n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int arr1[n];
	for(int i=0;i<n;i++){
		int m=(i+d)%n;
		arr1[i]=arr[m];
	}
	for(int i=0;i<n;i++){
		cout<<arr1[i]<<" ";
	}
	return 0;
}
