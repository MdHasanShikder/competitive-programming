/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1703/B
*/
#include <bits/stdc++.h>
 
using namespace std;
 
const int MAX = 200007;     //used commonly for defining array size, not needed here
const int MOD = 1000000007; //used commonly to keep number small, not needed here
 
void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	bool vis[26] = {};
	int res = 0;
	for (char c : s) {
		if (!vis[c - 'A']) {    // if character NOT visited before
            res += 2; // add 2 balloons
            vis[c - 'A'] = true;}   // mark as visited
		else {res++;}   // if already visited, add 1 balloon
	}
	cout << res << '\n';
}
 
int main() {
	ios::sync_with_stdio(false);  // tells C++: "I will only use cin/cout, NOT scanf/printf"
                                   // so disconnect them → becomes faster!
	cin.tie(nullptr);   // by default cout flushes before every cin (wastes time)
                    // this line says: "don't flush automatically" → faster!
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
	// solve();
}