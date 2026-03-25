/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/2199/A
*/
#include <iostream>
using namespace std;
void solve(){
    int k, a1, b1, a2, b2;
    cin >> k >> a1 >> b1 >> a2 >> b2;

    if((a1+a2) >= (b1+b2+k)) { cout << "NO\n"; }
    else { cout << "YES\n"; }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

/*
//kotlin equivalent code:

import java.io.BufferedReader
import java.io.InputStreamReader
import java.util.StringTokenizer

val br = BufferedReader(InputStreamReader(System.`in`))
var st = StringTokenizer("")

fun nextInt(): Int {
    while (!st.hasMoreTokens()) {
        st = StringTokenizer(br.readLine())
    }
    return st.nextToken().toInt()
}

fun solve() {
    val k = nextInt()
    val a1 = nextInt()
    val b1 = nextInt()
    val a2 = nextInt()
    val b2 = nextInt()

    if ((a1 + a2) >= (b1 + b2 + k)) {
        println("NO")
    } else {
        println("YES")
    }
}

fun main() {
    val t = nextInt()
    repeat(t) {
        solve()
    }
}

*/