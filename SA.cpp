#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

inline int getint()
{
	bool f = 0;
	char ch;
	for(; !isdigit(ch = getchar()); f |= ch == '-');
	int v = ch - '0';
	for(; isdigit(ch = getchar()); v = v * 10 + ch - '0');
	return f ? -v : v;
}

const int maxn = 100005;

char s[maxn];
int n;
int sa[maxn], rnk[maxn], hei[maxn];
int t1[maxn << 1], t2[maxn << 1], sum[maxn];

inline void get_sa()
{
	int m = 26, *x = t1, *y = t2, tmp;
	memset(sum, 0, sizeof(sum));
	for(int i = 1; i <= n; i++)
		sum[x[i] = s[i] - 'a' + 1]++;
	for(int i = 2; i <= 26; i++)
		sum[i] += sum[i - 1];
	for(int i = n; i; i--)
		sa[sum[x[i]]--] = i;
	for(int k =  1; k <= n; k <<= 1)
	{
		tmp = 0;
		for(int i = n - k + 1; i <= n; i++)
			y[++tmp] = i;
		for(int i = 1; i <= n; i++)
			if(sa[i] > k)
				y[++tmp] = sa[i] - k;
		memset(sum, 0, sizeof(sum));
		for(int i = 1; i <= n; i++)	
			++sum[x[i]];
		for(int i = 2; i <= m; i++)
			sum[i] += sum[i - 1];
		for(int i = n; i; i--)
			sa[sum[x[y[i]]]--] = y[i];
		swap(x, y);
		tmp = 0;
		x[sa[1]] = ++tmp;
		for(int i = 2; i <= n; i++)
			if(y[sa[i]] == y[sa[i - 1]] && y[sa[i] + k] == y[sa[i - 1] + k])
				x[sa[i]] = tmp;
			else
				x[sa[i]] = ++tmp;
		m = tmp;
		if(m == n)
			break;
	}
}

inline void get_hei()
{
	int j, k = 0;
	for(int i = 1; i <= n; i++)
		rnk[sa[i]] = i;
	for(int i = 1; i <= n; i++)
	{
		if(k)
			k--;
		j = sa[rnk[i] - 1];
		while(s[i + k] == s[j + k])
			k++;
		hei[rnk[i]] = k;
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	scanf("%s", s + 1);
	n = strlen(s + 1);
	get_sa();
	get_hei();
	for(int i = 1; i <= n; i++)
		printf("%d ", sa[i]);
	printf("\n");
	for(int i = 2; i <= n; i++)
		printf("%d ", hei[i]);
	printf("\n");
	return 0;
}
