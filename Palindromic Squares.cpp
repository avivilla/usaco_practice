/*ID: avimall1
LANG: C++
TASK: palsquare
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
vector< pair<string,string> >vt;
string a="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int check(string st)
{
	for(int i=0;i<st.length()/2;i++)
	{
		if(st[i]!=st[st.length()-i-1])
			return 0;
	}
	return 1;
}
void  base_convert(int n,int b)
{
	int sq=n*n;
	string st;
	while(sq>0)
	{
       st.push_back(a[sq%b]) ;
       sq/=b;
	}
	reverse(st.begin(),st.end());
	if(!check(st))
		return ;
	string ss;
	while(n>0)
	{
       ss.push_back(a[n%b]) ;
       n/=b;
	}
	reverse(ss.begin(),ss.end());
	cout<<ss<<" "<<st<<endl;
  // vt.push_back(jora(ss,st));
   return ;
}
int main()
{
ios_base::sync_with_stdio(false);
int test,case_no=1;
freopen("palsquare.in","r",stdin);
freopen("palsquare.out","w",stdout);
int b;
cin>>b;
FOR1(i,300)
{
	base_convert(i,b);
}
// FOR(i,vt.size())
// {
// 	pair<string,string>tem=vt[i];
// 	cout<<tem.fs<<" "<<tem.sc<<endl;

// }
return 0;
}
