#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
    while(t--)
	{
	ll n,k,l;
	cin>>n>>k>>l;
	ll w,b;
	cin>>w>>b;
	ll wh=k+l;
	ll bl=n*2-wh;
	if((w*2)<=wh && (b*2)<=bl)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	}
}
