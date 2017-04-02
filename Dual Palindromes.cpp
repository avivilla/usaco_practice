/*ID: avimall1
LANG: C++
TASK: dualpal
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

string a="0123456789";

int check(string st)
{
	for(int i=0;i<st.length()/2;i++)
	{
		if(st[i]!=st[st.length()-i-1])
			return 0;
	}
	return 1;
}
int base_convert(int n,int b)
{
	
	string ss;
	while(n>0)
	{
       ss.push_back(a[n%b]) ;
       n/=b;
	}
	reverse(ss.begin(),ss.end());
	return check(ss);
	//cout<<ss<<" "<<st<<endl;
  // vt.push_back(jora(ss,st));
   
}
int main()
{
ios_base::sync_with_stdio(false);
int test,case_no=1;
freopen("dualpal.in","r",stdin);
freopen("dualpal.out","w",stdout);
int n,s;
cin>>n>>s;
for(int i=s+1;n>0;i++)
{
	int cnt=0;
	for(int j=2;j<=10;j++)
	{
		cnt+=base_convert(i,j);
		if(cnt>1)
		{
			cout<<i<<endl;
			n--;
			break;
		}
	}
}

return 0;
}
