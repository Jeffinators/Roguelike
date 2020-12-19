#include <host/host.h>
#include <app/app.h>

int main(){
	HostState host;
	std::cout << "Enter number 1" << std::endl;
	std::cin >> host.val1;
	std::cout << "Enter number 2" << std::endl;
	std::cin >> host.val2;
	passParameters(host);
	std::cin.get();
}