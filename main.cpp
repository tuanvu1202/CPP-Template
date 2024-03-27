/***************************************************************
  Name: tuanvu1202
  From: Vietnam
  Skills: C++,Python 
  File Template Owner: Dennis Tran
***************************************************************/

#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define FOD(i, a, b) for (int i = (a); i >= (b); i--)
#define REP(i, n) for (int i = 0; i < (n); i++)
#define ALL(x) (x).begin(), (x).end()
#define __TuanVu___ signed main()
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define file(name)  if (fopen(name".inp", "r")) { freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout); }
 
using namespace std;
 
const int MAXN = 2e5 + 5;
 
int n, a[MAXN];
 
void solve(int test_case) {
    
}
 
__TuanVu___{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    cout.tie(nullptr);
 
    int T; cin >> T; FOR(i, 1, T)
    solve(i);
    cerr << "Time elapsed: " << TIME << " s.\n";
    return (0 ^ 0);
}
