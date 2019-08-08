#include <iostream>
#include <memory>

using namespace std;

int main()
{
	shared_ptr<int> s(new int);

	*s = 10;

	cout << "ref count = 1" << endl;
	cout << "*s = " << *s << endl;
	
	shared_ptr<int> t = s;

	*t += 1;

	cout << "ref count = 2" << endl;
	cout << "*s = " << *s << endl;
	cout << "*t = " << *t << endl;

	shared_ptr<int> u = t;
	cout << "ref count = 3" << endl;
	*u += 1;
	cout << "*s = " << *s << endl;
	cout << "*t = " << *t << endl;
	cout << "*u = " << *u << endl;

	return 0;
}

