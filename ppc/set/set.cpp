#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	set<string> s;

	cout << "Adding 'Hello' and 'World' to the set twice" << endl;

	s.insert("Hello");
	s.insert("World");
	s.insert("Hello");
	s.insert("World");

	cout << "Set contains: ";

	while(!s.empty()) {
		cout << ' ' << *s.begin();
		s.erase(s.begin());
	}
	return 0;
}
