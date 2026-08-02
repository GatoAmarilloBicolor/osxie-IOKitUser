// created for Osxie

#include <IOKit/hid/IOHIDService.h>
#include <IOKit/hid/IOHIDServicePrivate.h>
#include "stub-log.h"

OSXIE_STUB_HEADER;

CFStringRef IOHIDServiceCopyDescription(IOHIDServiceRef svc) {
	OSXIE_STUB_LOG;
	return CFSTR("");
};

void _IOHIDServiceReleasePrivate(IOHIDServiceRef svc) {
	OSXIE_STUB_LOG;
};
