#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,n;
cout<<"Enter the number of testcases:";
cin>>t;
while(t--)
{
cout<<"Enter the number of elements:";
cin>>n;
int arr[n];
long pt=1;
for(int i=0;i<n;i++)
{
cin>>arr[i];
pt=pt*arr[i];
}
if(pt<0)
{
cout<<1<<"\n";
}
else
{
cout<<0<<"\n";
}
}
return 0;
}
