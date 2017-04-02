/*ID: avimall1
LANG: C++
TASK: crypt1
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
vector<int>vt;
int cnt=0,mark[10]={0};
int multiplication(int d)
{
  
  int carry=0;
  int ans=0;
  ans+=((vt[2]*d)%10);
  carry=(vt[2]*d)/10;
  
  ans+=((carry+(vt[1]*d))%10)*10;
  
  carry=(carry+(vt[1]*d))/10;
  
   ans+=((carry+(vt[0]*d))%10)*100;


  carry=(carry+(vt[0]*d))/10;
 
  ans+=(carry*1000);
  
  return ans;

   

}
int check(int n)
{
	while(n>0)
	{
		if(!mark[n%10])
			return 1;
		n/=10;
	}
	return 0;
}
int multi()
{
   int a=multiplication(vt[3]);
   if(a>999 || a<=99 || check(a))
   	return 0;
   int b=multiplication(vt[4]);
   if(b>999 || b<=99 ||check(b))
   	return 0;
   if((a+b*10)>9999 || (a+b*10)<999 || check(a+(b*10)))
   	return 0;
   return 1;
}
void solve(int node,int a[],int n)
{
	if(node==5)
	{

		
		if(!multi())
			return;
		
		cnt++;
		return ;
	}
	int ans=0;
	FOR(i,n)
	{
		vt.push_back(a[i]);
		solve(node+1,a,n);
		vt.pop_back();
	}
	return ;
}

int main()
{
ios_base::sync_with_stdio(false);
int test,case_no=1;
freopen("crypt1.in","r",stdin);
freopen("crypt1.out","w",stdout);
int n;
cin>>n;
int a[n+1];
FOR(i,n)
{
	cin>>a[i];
     mark[a[i]]=1;
}
solve(0,a,n);
cout<<cnt<<endl;
// vt.push_back(6);
// vt.push_back(7);
// vt.push_back(8);
// vt.push_back(9);
// cout<<multiplication(9)<<endl;

return 0;
}
