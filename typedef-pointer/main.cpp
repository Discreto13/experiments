#include <iostream>
#include <typeinfo>

using namespace std;
#define TRACE_VAR(var) (#var": ") << var

int main(int argc, char* argv[])
{
	cout << "Experiment: typedef of pointer.\n";

	typedef int* pint;
	int* a, b;
	pint c, d;

	cout << TRACE_VAR(typeid(a).name()) << endl;
	cout << TRACE_VAR(typeid(b).name()) << endl;
	cout << TRACE_VAR(typeid(c).name()) << endl;
	cout << TRACE_VAR(typeid(d).name()) << endl;
	return 0;
}
