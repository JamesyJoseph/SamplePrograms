#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,n,x,pizza;
cin>>t;
while(t--)
{
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
