#include <iostream>
#include <string>

using namespace std;

int stack[10000], top;

void push(int n) {
	stack[top++] = n;
}

void pop() {
	if (top == 0) cout << "-1\n";
	else {
		top--;
		cout << stack[top] << "\n";
	}
}

void peek() {
	if (top == 0) cout << "-1\n";
	else {
		cout << stack[top - 1] << "\n";
	}
}
int main() {
	string cmd;
	int n, k;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> cmd;

		if (cmd == "push") {
			cin >> k;
			push(k);
		}

		else if (cmd == "pop") {
			pop();
		}
		else if (cmd == "size") {
			cout << top << "\n";
		}
		else if (cmd == "top") {
			peek();
		}
		else if (cmd == "empty") {
			cout << (top == 0) << "\n";
		}
	}
}
