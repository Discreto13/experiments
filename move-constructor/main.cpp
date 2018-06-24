#include <iostream>
#include <list>
#include "my_int.h"
using namespace std;

template <class T>
ostream& operator<< (ostream& stream, list<T>& my_vector)
{
	stream << "Vector<T>:\n";

	for (auto& iter : my_vector) {
		stream << iter << "\n";
	}
	cout << endl;

	return stream;
}

int main ()
{
	cout << "--- BEGIN ---" << endl;
	cout << "\t--- LINE: " << __LINE__ << " ---\n";
	std::list<my_int> myvector;
	my_int my(13);
	cout << "My::: "; my.show();

	cout << "\t--- LINE: " << __LINE__ << " ---\n";
	myvector.emplace_back(1); // default-constructor
	myvector.push_back(my); // copy-constructor
	// myvector.push_back(std::move(my)); // move-constructor - error
	// myvector.push_back({1}); // move-constructor - error
	cout << "\t--- LINE: " << __LINE__ << " ---\n";
	cout << myvector;

	cout << "--- END ---" << endl;
	return 0;
}
