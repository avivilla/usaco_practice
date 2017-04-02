#include<bits/stdc++.h>
#define pii                pair<int,int>
#define mkp            make_pair
#define fs                 first
#define sc                 second
#define pb                push_back
#define ppb              pop_back()
#define pcase(x)       cout<<"Case "<<x<<": ";
#define hi        cout<<"hi"<<endl;
#define mx                 1000000007
#define inf                  1000000007
#define pi                    acos(-1.0)
#define mem(arr,x)    memset((arr), (x), sizeof((arr)));
#define FOR(i,x)          for(int i=0;i<(x); i++)
#define FOR1(i,x)       for(int i = 1; i<=(x) ; i++)
#define jora(a,b)       make_pair(a,b)
using namespace std;
typedef long long int lint;
typedef double dbl;

int side[15],mark[15]={0};
set<vector<pii> >s;
int x[15],y[15];
map<int,int>mp;


int main()
{
ios_base::sync_with_stdio(false);
int test,case_no=1;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int n;
cin>>n;
FOR(i,n)
{
	
	cin>>x[i]>>y[i];

}
FOR(i,n)
{
	vector<pii>tem;
	FOR(j,n)
	{
     if(j==i)
     	continue;
     if(y[i]==y[j] && x[i]<x[j])
     {
     	tem.push_back(jora(x[i],j));
     }
	}
	sort(tem.begin(),tem.end());
	if(tem.size())
	{
		pii t=tem[0];
		mp[i]=t.sc;
     }

}
vector<pii>vt;
FOR1(i,n)
solve(i,n,0,vt);
cout<<s.size()<<endl;

return 0;
}
