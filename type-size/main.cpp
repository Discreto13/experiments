#include <iostream>
#include <cstdint>
using namespace std;

// execute
#define EX(expr) cout << endl << "> "#expr << endl; expr;

// trace
#define TRACE(elem) cout << #elem << ": " << (elem) << endl;
#define TRACE_SIZE(elem) cout << "sizeof("#elem")" << ": " << sizeof(elem) << endl;

struct MyStruct
{
	int a;
	long b;
	char c;
};

union MyUnion
{
	int a;
	long b;
	char c;
};

class MyClass
{
public:
	int a;
	long b;
	char c;
};

class MyEmptyClass
{};

int main()
{
	// ======= STANDARD TYPES =======
	TRACE_SIZE(int);
	TRACE_SIZE(unsigned int);
	TRACE_SIZE(long);
	TRACE_SIZE(unsigned long);
	TRACE_SIZE(long long);
	TRACE_SIZE(unsigned long long);
	TRACE_SIZE(char);

	// ======= FIXED INT SIZES =======
	TRACE_SIZE(int8_t);
	TRACE_SIZE(int16_t);
	TRACE_SIZE(int32_t);
	TRACE_SIZE(int64_t);
	TRACE_SIZE(uint64_t);

	TRACE_SIZE(MyStruct);
	TRACE_SIZE(MyUnion);
	TRACE_SIZE(MyClass);
	TRACE_SIZE(MyEmptyClass);

	// ======= UNION TEST =======
	EX(MyUnion u);
	TRACE(u.a);
	TRACE(u.b);
	TRACE(u.c);

	EX(u.a = 5);
	TRACE(u.a);
	TRACE(u.b);
	TRACE(u.c);

	EX(u.b = 10);
	TRACE(u.a);
	TRACE(u.b);
	TRACE(u.c);

	EX(u.c = 'a');
	TRACE(u.a);
	TRACE(u.b);
	TRACE(u.c);

	return 0;
}
