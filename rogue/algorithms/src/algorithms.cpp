#include <algorithms/algorithms.h>

int mulfn(HostState &host) {
	int temp = host.val1 * host.val2;
	std::cout << "Result: " << temp << std::endl;
	return 1;
}

