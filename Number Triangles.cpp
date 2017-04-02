/*ID: avimall1
LANG: C++
TASK: numtri
*/
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
int dp[1005][1005],a[1005][1005];
int solve(int level,int node,int n)
{
  if(level==n)
  	return 0;
  if(dp[level][node]!=-1)
  	return dp[level][node];
  return dp[level][node]=max(solve(level+1,node,n),solve(level+1,node+1,n))+a[level][node];




}

int main()
{
ios_base::sync_with_stdio(false);
int test,case_no=1;
freopen("numtri.in","r",stdin);
freopen("numtri.out","w",stdout);
int n;
cin>>n;

FOR(i,n)
{
	FOR(j,i+1)
	{

  cin>>a[i][j];

	}
}
mem(dp,-1);
cout<<solve(0,0,n)<<endl;
return 0;
}
