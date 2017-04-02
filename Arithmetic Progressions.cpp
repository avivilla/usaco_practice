/*ID: avimall1
LANG: C++
TASK: ariprog
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
struct acompare
{
bool operator()(pii a,pii b)
{
	if(a.sc==b.sc)
		return a.fs<b.fs;
	return a.sc<b.sc;
}
};

int main()
{
ios_base::sync_with_stdio(false);
int test,case_no=1;
freopen("ariprog.in","r",stdin);
freopen("ariprog.out","w",stdout);
int n,m;
cin>>n>>m;
vector<int>vt;
vector<pii>ans;
int mark[2*m*m+5]={0};
FOR(i,m+1)
{
   for(int j=i;j<=m;j++)
   {

   	int a=i*i+j*j;

   	if(mark[a])
   		continue;
   	vt.push_back(a);
   	mark[a]=1;
   }
}
sort(vt.begin(),vt.end());
// FOR(i,vt.size())
//  cout<<vt[i]<<endl;
FOR(i,vt.size())
{
	int a=vt[i];
	for(int j=i+1;j<vt.size();j++)
	{
		int b=vt[j]-a;
		int k=1;
		while(k<n)
		{
			int x=a+k*b;
			if(x>2*m*m)
				break;
			if(!mark[x])
				break;
			if(k==n-1)
				{
					ans.push_back(jora(a,b));
					break;
				}

             k++;
		}
	}
}
if(ans.size()==0)
{
	cout<<"NONE\n";
	return 0;
}
sort(ans.begin(),ans.end(),acompare());
FOR(i,ans.size())
{
	pii tem=ans[i];
	cout<<tem.fs<<" "<<tem.sc<<endl;
}
return 0;
}
