/*ID: avimall1
LANG: C++
TASK: milk
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


int main()
{
ios_base::sync_with_stdio(false);
int test,case_no=1;
freopen("milk.in","r",stdin);
freopen("milk.out","w",stdout);
int n,m;
cin>>n>>m;
std::vector<pii>vt;
FOR(i,m)
{
	int t,u;
	cin>>t>>u;
	vt.push_back(jora(t,u));
}
sort(vt.begin(),vt.end());
lint sum=0;
FOR(i,m)
{
	pii tem=vt[i];
	//cout<<tem.fs<<" "<<tem.sc<<" "<<n<<" "<<sum<<endl;
	if(tem.sc>=n)
	{
		sum+=(n*tem.fs);
		break;
	}
  sum+=(tem.sc*tem.fs);
  n-=tem.sc;
}
cout<<sum<<endl;
return 0;
}
