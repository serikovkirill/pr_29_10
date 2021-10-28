#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
int main() {
	stack <int> stk;
	string str = "12+4*3/";
	for (int i = 0; i < str.size(); i++) {
		if (isdigit(str[i])) {
			stk.push(str[i] - 48);
		}
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
			int a, b;
			a = stk.top();
			stk.pop();
			b = stk.top();
			stk.pop();
			if (str[i] == '+') {
				a = b + a;
			}
			else if (str[i] == '-') {
				a = b - a;
			}
			else if (str[i] == '*') {
				a = b * a;
			}
			else if (str[i] == '/') {
				a = b / a;
			}
			stk.push(a);
		}
	}
	cout << stk.top();
}
