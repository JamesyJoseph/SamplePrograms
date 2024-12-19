#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,n,x,pizza;
cout<<"Enter the number of testcases:";
cin>>t;
while(t--)
{
  cout<<"Enter the number of friends & slices:";
cin>>n>>x;
if((n*x)%4==0)
{
pizza=(n*x)/4;
}
else
{
pizza=((n*x)/4)+1;
}
cout<<pizza<<"\n";
}
}
