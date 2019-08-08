#include <iostream>
#include <memory>

using namespace std;

int main()
{
	shared_ptr<int> s(new int);

	*s = 10;

	cout << "ref count = " << s.use_count() << endl;
	cout << "*s = " << *s << endl;
	
	shared_ptr<int> t = s;

	*t += 1;

	cout << "ref count = " << s.use_count() << endl;
	cout << "ref count = " << t.use_count() << endl;
	cout << "*s = " << *s << endl;
	cout << "*t = " << *t << endl;



	unique_ptr<int> u(new int);
	*u = 18;


	// compile-time error
	//unique_ptr<int> v = u;
	//s = u 
	//u = s


	return 0;
}

