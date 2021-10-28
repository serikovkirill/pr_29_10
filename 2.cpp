#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
int f(int i) {
	int j = i;
	if (i == 1) {
		return f(2); //
		i++;
	}
	if (i == 2) {
		return f(3);
		i++;
	}
	if (i == 3) {
		return f(1);
		i++;
	}
}
int main() {
	f(1);
}
