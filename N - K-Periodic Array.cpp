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
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int n,m;
cin>>n>>m;
int x;
std::vector<int>vt[m+2];
FOR(i,n)
{
  cin>>x;
  vt[i%m].push_back(x);
}
int cnt=0;
FOR(i,m)
{
   int mark[3]={0};
   FOR(j,vt[i].size())
   {
   	mark[vt[i][j]]++;
   }
   cnt+=(vt[i].size()-max(mark[1],mark[2]));
}
cout<<cnt<<endl;;
return 0;
}
