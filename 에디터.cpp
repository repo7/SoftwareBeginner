#include <Windows.h>
#include <iostream>
#include <list>
#include <string>

using namespace std;
void print(list<char> editor)
{
	for (char c : editor) {

		cout << c;

	}
	printf("\n");
}
int main()
{
	string s;
	cin >> s;

	list<char> editor(s.begin(), s.end());
	auto cursor = editor.end();

	int n; cin >> n;

		while (n--) {
			char cmd;
			cin >> cmd;
			if (cmd == 'L' || cmd == 'l') {

				if (cursor != editor.begin()) {
					--cursor;
				}
			}
			else if (cmd == 'D' || cmd == 'd') {

				if (cursor != editor.end()) {
					++cursor;
				}
			}
			else if (cmd == 'P' || cmd == 'p') {

				char c;
				cin >> c;
				editor.insert(cursor, c);
			}
			else if (cmd == 'B' || cmd == 'b') {

				if (cursor != editor.begin()) {

					auto temp = cursor;
					--cursor;
					editor.erase(cursor);
					cursor = temp;
				}
			}

			print(editor);
	}
	system("pause");
	return 0;
}
