#include <app/app.h>

void passParameters(HostState &host) {
	host.val1++;
	host.val2++;
	mulfn(host);
}