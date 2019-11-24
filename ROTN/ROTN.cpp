#include <iostream>
#include <string>

using namespace std;
int main() {
    int n;
    cin >> n;
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
        s[i] = (s[i]+n)%26 + 52;
        if(s[i]<=64) s[i]+=26;
    }

	cout << s << endl;
	return 0;
}