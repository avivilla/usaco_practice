/*ID: avimall1
LANG: C++
TASK: namenum
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
string arr[]={"","","ABC","DEF","GHI","JKL","MNO","PRS","TUV","WXY"};
map<string,int>my;
set<string>s;
vector<char>v;
void solve(int i,string st,int n)
{
	if(i==n)
	{
		string str;
		FOR(j,n)
		{
			str.push_back(v[j]);
		}
		if(my.find(str)!=my.end())
		{
   s.insert(str);
		}
		return;
	}
	int node=st[i]-'0';
	FOR(j,3)
	{
       v.push_back(arr[node][j]);
       solve(i+1,st,n);
       v.pop_back();
	}
	return ;
}

int main()
{
ios_base::sync_with_stdio(false);
int test,case_no=1;
freopen("namenum.in","r",stdin);
freopen("namenum.out","w",stdout);
ifstream fin("dict.txt");
string st;
while(fin>>st)
{
	my[st]=1;

}
cin>>st;
solve(0,st,st.length());
if(!s.size())
{
	cout<<"NONE"<<endl;
	return 0;
}
set<string>::iterator it;
for(it=s.begin();it!=s.end();it++)
{
	st=*it;
	cout<<st<<endl;
}
return 0;
}
