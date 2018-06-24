#include <iostream>
using namespace std;

class my_int
{
public:
	my_int(int = 100);
	my_int(const my_int&);
	my_int(my_int&&);
	~my_int();

	void show();

	int* val;
};

ostream& operator<< (ostream&, my_int&);
