/*ID: avimall1
LANG: C++
TASK: sprime
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
int a[5]={1,3,5,7,9};
bool check(int n)
{
	int sqr=sqrt(n);
	for(int i=3;i<=sqr;i+=2)
		if(n%i==0)
			return false;
		return true;
}
void solve(int sum,int node,int n)
{
	if(node==n)
	{
  if(check(sum))
  	cout<<sum<<endl;
  return ;
	}
	if(!check(sum))
		return ;
	FOR(i,5)
	{
       solve(sum*10+a[i],node+1,n);
	}
	return ;
}

int main()
{
ios_base::sync_with_stdio(false);
int test,case_no=1;
freopen("sprime.in","r",stdin);
freopen("sprime.out","w",stdout);
int n;
cin>>n;
solve(2,1,n);
solve(3,1,n);
solve(5,1,n);
solve(7,1,n);

return 0;
}
