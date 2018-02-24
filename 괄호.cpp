#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

bool check(string s) {
	int len = (int)s.length();
	stack<char> st;

	for (int i = 0; i < len; i++) {
		char c = s[i];

		if (c == '(') {
			st.push(s[i]);
		}
		else {
			if (!st.empty()) {
				st.pop();
			}
			else {
				// 비어있으면
				return false;
			}
		}
	}
	// 반복문이 끝나고 스택에 괄호가 남아있다면 
	return st.empty(); 
}
int main(void) {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		if (check(s)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}
