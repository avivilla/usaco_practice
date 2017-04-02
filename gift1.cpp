/*
ID: avimall1
LANG: C++
TASK: gift1

*/
#include<bits/stdc++.h>
#define pii                pair<int,int>
#define mkp            make_pair
#define fs                 first
#define sc                 second
#define pb                push_back
#define ppb              pop_back()
#define hi                cout<<"HI"<<endl;
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
std::ios_base::sync_with_stdio(false);
freopen("gift1.in","r",stdin);
freopen("gift1.out","w",stdout);
map<string,int>my;
vector<string>vt;
int np;
cin>>np;
string tem;
FOR(i,np)
{
cin>>tem;
my[tem]=0;
vt.push_back(tem);
}
FOR(i,np)
{

    int koyjon,koto;
    string ke,kake;
    cin>>ke;
    cin>>koto>>koyjon;
    if(koyjon!=0)
    {
        int perhead=koto/koyjon;
    int temp=koto%koyjon;

    my[ke]-=(koto-temp);


    while(koyjon--)
    {
        cin>>kake;
        my[kake]+=perhead;

    }
    }


}

FOR(i,np)
{

    cout<<vt[i]<<" "<<my[vt[i]]<<endl;
}
return 0;
}
