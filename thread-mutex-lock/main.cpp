#include <iostream>
#include <string>
#include <thread>
#include <mutex>
using namespace std;

mutex mtx;

void func(const char& c)
{
	lock_guard<mutex> guard(mtx); // turn it (on/off)
	cout << this_thread::get_id() << ": " << c << endl;

	for(int i = 0; i < 300; ++i) {
		cout << c;
		if (!((i+1)%100)) cout << endl;
	}
	cout << endl;
}

int main(int argc, char* argv[])
{
	thread t1(func, '*');
	thread t2(func, '.');

	if (t1.joinable()) t1.join();
	if (t2.joinable()) t2.join();

	return 0;
}
