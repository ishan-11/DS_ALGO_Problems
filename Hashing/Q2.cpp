//naive
/* #include <iostream>
using namespace std;

int countDistinct(int arr[], int n)
{
	int res = 1;

	
	for (int i = 1; i < n; i++) {
		int j = 0;
		for (j = 0; j < i; j++)
			if (arr[i] == arr[j])
				break;

		
		if (i == j)
			res++;
	}
	return res;
	*/
#include<iostream>
#include<unordered_set>
using namespace std;

int countdistinct(int arr[], int n)
{
    unordered_set<int>s(arr,arr+n);

	return s.size();
}

int main()
{
	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++ )
	{
		cin>>arr[i];

	}

	cout<<countdistinct(arr,n)<<endl;

	return 0;
}