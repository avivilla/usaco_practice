/*ID: avimall1
LANG: C++
TASK: pprime
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
// bool Check(int N,int pos){return (bool)(N & (1<<pos));}
// int Set(int N,int pos){	return N=N | (1<<pos);}

// int N =100000005; 
// int status[100000005/32+5];

bool pali(int n)
{
  int i=n,rev=0;
  while(i>0)
  {
  	rev=rev*10+i%10;
  	i/=10;
  }
  if(rev==n)
  return true;
return false;

}
// void sieve(int s,int n)
// {
//      int i, j; 
    
//      for( i = 3; i<=n; i += 2 ) 
//      {
// 		 if( Check(status[i/32],i%32)==0)
// 		 {
//            if(i>=s && i<=n && pali(i))
//            	  cout<<i<<endl;
// 	 		 for( j = i*i; j <= n; j += 2*i )
// 			 {
// 				 status[j/32]=Set(status[j/32],j % 32)   ;
// 	 		 }
// 		 }
// 	 }
	
// 	 return ;
	 	
// }
bool prime(int n)
{
	int sqrtn=sqrt(n);
	for(int i=3;i<=sqrtn;i+=2)
		if(n%i==0)
			return false;
		return true;
}
int main()
{
ios_base::sync_with_stdio(false);
int test,case_no=1;
freopen("pprime.in","r",stdin);
freopen("pprime.out","w",stdout);

int a,b;
cin>>a>>b;

for(int i=5;i<=b && i<=9989899;i+=2)
{
	if(pali(i) && i>=a)
	{
		if(prime(i))
			cout<<i<<endl;
	}

}

return 0;
}
