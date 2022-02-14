//interaction of two array
#include<iostream>
#include<unordered_set>
using namespace std;

int intersect(int a[],int b[], int m , int n)
{
    unordered_set<int>s(a,a+m);
    int res = 0;
    for(int i=0;i<n;i++)
    {
        if(s.find(b[i])!=s.end())
        {
            res++;
            s.erase(b[i]);
        }
    }

    return res;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int j=0;j<m;j++)
{
    cin>>b[j];
}
 cout<<intersect(a,b,n,m)<<endl;
 return 0;

    }