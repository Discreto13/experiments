#include <iostream>

#define P1(a,b) a*b
#define P2(a,b) (a)*(b)

#define INVERT_BIT(num, bit) \
{ \
	if (num < 0 || num > 255) std::cout << "INVERT_BIT: num - wrong\n"; \
	if (bit < 1 || bit > 8) std::cout << "INVERT_BIT: bit - wrong\n"; \
	int8_t mask = (1 << (bit-1)); \
	num ^= mask; \
}

#define TRACE_VAR(x) #x": " << (x)

int main(int argc, char* argv[])
{
	std::cout << "---> Test define work\n";
	std::cout << "#define P1(a,b) a*b\n";
	std::cout << "#define P2(a,b) (a)*(b)\n";

	std::cout << TRACE_VAR( P1(5+2,3) ) << std::endl;
	std::cout << TRACE_VAR( P1((5+2),(3)) ) << std::endl;
	std::cout << TRACE_VAR( P2(5+2,3) ) << std::endl;

	std::cout << "\n---> Invert bit by define - undependency from type\n";
	int16_t invert_target = 0;
	std::cout << "Before bit invert: " << TRACE_VAR(invert_target) << std::endl;
	std::cout << "INVERT_BIT(invert_target, 4);\n";
	INVERT_BIT(invert_target, 4);
	std::cout << "After bit invert: " << TRACE_VAR(invert_target) << std::endl;

	return 0;
}
