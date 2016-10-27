#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <set>
#include <map>

using namespace std;

#define REP(i, n) for(int i = 1; i <= int(n); ++i)
#define FOR(i, a, b) for(int i = int(a); i <= int(b); ++i)
#define DWN(i, b, a) for(int i = int(b); i >= int(a); --i)
#define REP_0(i, n) for(int i = 0; i < int(n); ++i)
#define REP_E(i, x) for(int i = int(lst[x]); i; i = nxt[i])
#define DO(n) while(n--)

#define ALL(A) A.begin(), A.end()
#define LLA(A) A.rbegin(), A.rend()
#define MEM(A, B) memset(A, B, sizeof(A))
#define CPY(A, B) memcpy(A, B, sizeof(A))
#define INS(A, P, B) A.insert(A.begin() + P, B)
#define ERS(A, P) A.erase(A.begin() + P)
#define CTN(T, x) (T.find(x) != T.end())
#define SZ(A) int(A.size())
#define PB push_back
#define MP(A, B) make_pair(A, B)
#define FI first
#define SE second
#define BG begin()
#define ED end()

typedef long long LL;
typedef double DB;
typedef unsigned UI;
typedef unsigned long long ULL;

typedef vector<int> VI;
typedef vector<char> VC;
typedef vector<string> VS;
typedef vector<LL> VL;
typedef vector<DB> VD;
typedef set<int> SI;
typedef set<string> SS;
typedef set<LL> SL;
typedef set<DB> SD;
typedef map<int, int> MII;
typedef map<string, int> MSI;
typedef map<LL, int> MLI;
typedef map<DB, int> MDI;
typedef map<int, bool> MIB;
typedef map<string, bool> MSB;
typedef map<LL, bool> MLB;
typedef map<DB, bool> MDB;
typedef pair<int, int> PII;
typedef pair<int, bool> PIB;
typedef pair<LL, LL> PLL;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef vector<VII> VVII;
typedef set<PII> SII;

const int MOD = 1000000007;
const int INF = 0x7fffffff;
const DB PI = acos(-1.0);
const DB EPS = 1e-7;
const DB OO = 1e15;

template<class T> inline T min(T a, T b, T c){return min(min(a, b), c);}
template<class T> inline T max(T a, T b, T c){return max(max(a, b), c);}
template<class T> inline T sqr(T a){return a*a;}
template<class T> inline T cub(T a){return a*a*a;}
int Ceil(int x, int y){return (x - 1) / y + 1;}

inline int getint() {
    bool f = 0;
    char ch;
    for(; !isdigit(ch = getchar()); f |= ch == '-');
    int v = ch - '0';
    for(; isdigit(ch = getchar()); v = v * 10 + ch - '0');
    return f ? -v : v;
}

inline void openf()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

inline void closef()
{
#ifndef ONLINE_JUDGE
	fclose(stdin);
	fclose(stdout);
#endif
}

int main()
{
	openf();
	closef();
}
