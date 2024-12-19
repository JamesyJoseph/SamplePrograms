#include<bits/stdc++.h>
using namespace std;

int main()
{
int num,prev=1,sum=2,temp;
cout<<"Enter the position number:";
cin>>num;
if(num==1 ||num ==2)
{
cout<<1;
}
else
{
for(int j=2;j<num;j++)
{
temp=prev;
prev=sum;
sum=temp+sum;
}
cout<<prev;
}
}
