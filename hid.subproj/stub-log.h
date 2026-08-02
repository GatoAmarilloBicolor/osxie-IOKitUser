// created for Osxie

#ifndef _OSXIE_IOKIT_HID_STUB_LOG_H
#define _OSXIE_IOKIT_HID_STUB_LOG_H

#include <stdio.h>

#define OSXIE_STUB_HEADER \
	static int osxie_stub_log_verbose = 0; \
	__attribute__((constructor)) \
	static void osxie_stub_log_init(void) { \
		osxie_stub_log_verbose = getenv("STUB_VERBOSE") != NULL; \
	}

#define OSXIE_STUB_LOG \
	if (osxie_stub_log_verbose) printf("OSXIE STUB CALLED: %s\n", __PRETTY_FUNCTION__);

#endif // _OSXIE_IOKIT_HID_STUB_LOG_H
