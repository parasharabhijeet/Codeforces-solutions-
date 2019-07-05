/*
Hey there stalker....

█▀▀▄░░░░░░░░░░░▄▀▀█
░█░░░▀▄░▄▄▄▄▄░▄▀░░░█
░░▀▄░░░▀░░░░░▀░░░▄▀
░░░░▌░▄▄░░░▄▄░▐▀▀
░░░▐░░█▄░░░▄█░░▌▄▄▀▀▀▀█
░░░▌▄▄▀▀░▄░▀▀▄▄▐░░░░░░█
▄▀▀▐▀▀░▄▄▄▄▄░▀▀▌▄▄▄░░░█
█░░░▀▄░█░░░█░▄▀░░░░█▀▀▀
░▀▄░░▀░░▀▀▀░░▀░░░▄█▀
░░░█░░░░░░░░░░░▄▀▄░▀▄
░░░█░░░░░░░░░▄▀█░░█░░█
░░░█░░░░░░░░░░░█▄█░░▄▀
░░░█░░░░░░░░░░░████▀
░░░▀▄▄▀▀▄▄▀▀▄▄▄█▀

Like what you see?
*/
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pii         pair<ll ,ll>
#define vi          vector<ll>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll)x.size()
#define rep(i,a,b)    for(ll  i=a;i<b;i++)
#define repr(i,a,b) for(ll  i=a;i>b;i--)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define ll long long int
#define lld long double
#define endl "\n"
#define MOD 1000000007
int main()
{
   IOS

    int TESTS=1;
    //cin >> TESTS;
    while (TESTS--)
    {
        string s;
        cin >> s;
        ll count =0,count1=0,count2=0;
        if (s[0]>=97 && s[0]<=122)
            {
                count ++;
            }
            else if (s[0]>=65 && s[0]<=90)
            {
                count2 ++;
            }
        rep(i,1,sz(s))
        {

             if (s[i]>=65 && s[i]<=90)
            {
                count1++;
            }
        }
        if (count +count1==sz(s))
        {
            s[0]=s[0]-32;
            rep(i,1,sz(s))
            {
                s[i]=s[i]+32;
            }

            cout <<s <<endl;
        }
        else if (count2+count1==sz(s))
        {
            rep(i,0,sz(s))
            {
                s[i]=s[i]+32;
            }
            cout << s <<endl;
        }
        else
        {
            cout << s<<endl;
        }
    }
return 0;
}


