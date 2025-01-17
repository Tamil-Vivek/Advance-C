#include <thread>
#include <chrono>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Thread {
private:
	static int count;
	string name;
	thread *pThread;
	bool isStopped;
	void run();
public:
	Thread();
	~Thread();
	void start();
	void stop();
	void join();
	void detach();
	void sleep();
};

