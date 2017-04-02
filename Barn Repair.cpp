/*ID: avimall1
LANG: C++
TASK: barn1
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
freopen("barn1.in","r",stdin);
freopen("barn1.out","w",stdout);
int m,s,c;
cin>>m>>s>>c;
vector<int>vt,dis;
FOR(i,c)
{
    int x;
    cin>>x;
    vt.push_back(x);
}
sort(vt.begin(),vt.end());
FOR(i,vt.size()-1)
{
	dis.push_back(vt[i+1]-vt[i]-1);
	//cout<<vt[i+1]-vt[i]-1<<endl;
}
int cnt=vt[vt.size()-1]-vt[0]+1;
//cout<<vt[vt.size()-1]<<" "<<vt[0]<<" "<<cnt<<endl;
sort(dis.begin(),dis.end());
for(int i=dis.size()-1;i>=0 && --m ;i--)
{
	cnt-=(dis[i]);
	//cout<<dis[i]<<" "<<i<<" "<<cnt<<endl;
}
cout<<cnt<<endl;
return 0;
}
