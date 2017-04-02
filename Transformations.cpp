/*
ID: avimall1
LANG: C++
TASK: transform

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

void rotate(int n,vector<string> & s1)
{

	string scpy[12];
 FOR(i,n)
 {
 	scpy[i]=s1[i];
 	
 }
 FOR(i,n)
 {
 	for(int j=0, k=n-1;j<n,k>=0;j++,k--)
 	s1[i][j]=scpy[k][i];
 }
 return ;
}
// void rotator2(int n)
// {

// 	string scpy[12];
//  FOR(i,n)
//  {
//  	scpy[i]=s1c[i];
 	
//  }
//  FOR(i,n)
//  {
//  	for(int j=0, k=n-1;j<n,k>=0;j++,k--)
//  	s1c[i][j]=scpy[k][i];
//  }
//  return ;
// }
void reflect(int n,vector<string>  s1,vector<string>&s2)
{
   FOR(i,n)
   {
   	FOR(j,n)
   	{
   		s2[i][j]=s1[i][n-j-1];
   	}
   }
   return ;
}
// void Reflect(int n,vector<string> & s1)
// {
//    FOR(i,n)
//    {
//    	FOR(j,n/2)
//    	{
//    		s1[i][n-j-1]=s1[i][j];
//    	}
//    }
//    return ;
// }
int check(int n,vector<string>s1,vector<string>s2)
{

	FOR(i,n)
	   FOR(j,n)
	   if(s1[i][j]!=s2[i][j])
	   	return 0;
	   return 1;

}

int main()
{
ios_base::sync_with_stdio(false);
int test,case_no=1;
freopen("transform.in","r",stdin);
freopen("transform.out","w",stdout);
int n;
cin>>n;
std::vector<string> s1,s2,s3;
string ssss;
FOR(i,n)
{
	cin>>ssss;
	s1.push_back(ssss);
	s2.push_back(ssss);
}
FOR(i,n)
{
	cin>>ssss;
	s3.push_back(ssss);
	
}
int fl=check(n,s1,s3);
rotate(n,s1);
if(check(n,s1,s3))
{
	cout<<1<<endl;
  return 0;
}
rotate(n,s1);
if(check(n,s1,s3))
{
	cout<<2<<endl;
  return 0;
}
rotate(n,s1);
if(check(n,s1,s3))
{
	cout<<3<<endl;
  return 0;
}
rotate(n,s1);
reflect(n,s1,s2);
// FOR(i,n)
//   cout<<s1[i]<<endl;
//   cout<<endl;
//   FOR(i,n)
//   cout<<s2[i]<<endl;
//   cout<<endl;
if(check(n,s2,s3) )
{
	cout<<4<<endl;
	return 0;
}
rotate(n,s2);
// FOR(i,n)
//   cout<<s1[i]<<endl;
//   cout<<endl;
//   FOR(i,n)
//   cout<<s2[i]<<endl;
//   cout<<endl;
if(check(n,s2,s3))
{
	cout<<5<<endl;
	return 0;
}
rotate(n,s2);
// rotate(n,s2);
// FOR(i,n)
//   cout<<s1[i]<<endl;
//   cout<<endl;
//   FOR(i,n)
//   cout<<s2[i]<<endl;
//   cout<<endl;
if(check(n,s2,s3) )
{
	cout<<5<<endl;
	return 0;
}
rotate(n,s2);
// rotate(n,s2);
// FOR(i,n)
//   cout<<s1[i]<<endl;
//   cout<<endl;
//   FOR(i,n)
//   cout<<s2[i]<<endl;
//   cout<<endl;
if(check(n,s2,s3))
{
	cout<<5<<endl;
	return 0;
}
if(fl==1)
{
	cout<<6<<endl;
	return 0;
}
cout<<7<<endl;
return 0;
}
