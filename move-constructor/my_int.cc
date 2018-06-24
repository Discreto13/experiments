#include "my_int.h"

// default constructor
my_int::my_int(int a) :
	val(new int(a))
{
	cout << __PRETTY_FUNCTION__ << " - " << val << " - " << *val << endl;
}

// copy-constructor
my_int::my_int(const my_int& copy) :
	val( new int(*copy.val) )
{
	cout << __PRETTY_FUNCTION__ << " - " << val << " - " << *val << endl;
}

// move-constructor
my_int::my_int(my_int&& copy)
{
	val = copy.val;
	copy.val=nullptr;
	cout << __PRETTY_FUNCTION__ << " - " << val << " - " << *val << endl;
}

// destructor
my_int::~my_int()
{
	cout << __PRETTY_FUNCTION__ << " - " << val << " - " << *val << endl;
	delete val;
}

// show function
void my_int::show()
{
	cout << val << " - " << *val << endl;
	cout << endl;
}

ostream& operator<< (ostream& stream, my_int& my)
{
	stream << "val" << " - " << my.val << " - " << *my.val;
	return stream;
}
