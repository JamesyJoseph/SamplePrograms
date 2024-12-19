#include<bits/stdc++.h>
using namespace std;

int main()
{
 int arr[100],sum=0;
 cout<<"Enter the list:\n";
for(int i=0;i<99;i++)
{
 cin>>arr[i];
 sum=sum+arr[i];
}
cout<<(5050-sum);
return 0;
}
