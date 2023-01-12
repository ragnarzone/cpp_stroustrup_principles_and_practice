#include <iostream>
#include <termios.h>
#include <fcntl.h>
#include <unistd.h>

using namespace std;

int main(){
	struct termios tty;

	cout << sizeof tty << "\n";
	return 0;
}
