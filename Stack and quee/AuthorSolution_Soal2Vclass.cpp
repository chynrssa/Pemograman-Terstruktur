#include <iostream>
#include <stack>

using namespace std;

void print_stack(stack<int> s) {
	if (!s.empty()) {
		cout << s.top();
		s.pop();
	}

	while (!s.empty()) {
		cout << " " << s.top();
		s.pop();
	}

	cout << endl;
}

int main() {
	int N, val;
	stack<int> s;
	string command;

	cin >> N;
	while (N--) {
		cin >> command;

		if (command == "push") {
			cin >> val;
			s.push(val);
			print_stack(s);
		} else {
			if (!s.empty()) {
				s.pop();
				print_stack(s);
			}
		}
	}
}