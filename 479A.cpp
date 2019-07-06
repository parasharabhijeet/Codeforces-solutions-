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
   // cin >> TESTS;
    while (TESTS--)
    {
        ll a,b,c,i,j,k,l,m,n;
        cin >> a >> b >> c;
        i=a*b*c;
        j=a+b+c;
        k=(a+b)*c;
        l=a*(b+c);
        m=(a*b)+c;
        n=a+(b*c);
        if (i>=j && i >=k && i >=l && i >=m && i >= n)
        {
            cout << i <<endl;
            break;
        }
            if (j>=i && j >=k && j >=l && j >=m && j >= n)
        {
            cout << j <<endl;
            break;
        }
        if (k>=j && k >=i && k>=l && k >=m && k >= n)
        {
            cout << k <<endl;
            break;
        }
        if (l>=j && l >=k && l >=i && l >=m && l >= n)
        {
            cout << l <<endl;
            break;
        }
        if (m>=j && m >=k && m >=l && m >=i && m >= n)
        {
            cout << m <<endl;
            break;
        }
        if (n>=j && n>=k && n >=l && n >=m && n >= i)
        {
            cout << n <<endl;
            break;
        }


    }
return 0;
}


