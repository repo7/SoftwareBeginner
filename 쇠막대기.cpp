#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

int pipe(string s) {
	int len = (int)s.length();
	stack<char> st;
	int rlt=0;

	for (int i = 0; i < len; i++) {
		
		if (s[i] == '(') {
			st.push(s[i]);
		}
		// 이 괄호가 레이저인지, 파이프인지?
		else {
				
			st.pop();

			if (s[i - 1] == '('){
				rlt += st.size();
			}
			else {
				rlt += 1;
			}
		}
	}
	return rlt;
}
int main(void) {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		cout << pipe(s);
	}
	system("pause");
}
