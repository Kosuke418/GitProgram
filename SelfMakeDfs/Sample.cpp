#include <iostream>
#include <algorithm>       // for next_permutation
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int N = 3;
    cin >> N;
    vector<int> v(N);
    iota(v.begin(), v.end(), 1);       // v に 1, 2, ... N を設定
    do {
        for(auto x : v) cout << x << " "; cout << "\n";    // v の要素を表示
    } 
    while( next_permutation(v.begin(), v.end()) );     // 次の順列を生成
    return 0;
}