// created for Darling

#include <IOKit/hid/IOHIDEventSystemConnection.h>
#include <IOKit/hid/IOHIDEventSystemConnectionPrivate.h>
#include "stub-log.h"

OSXIE_STUB_HEADER;

CFStringRef IOHIDEventSystemConnectionCopyDescription(IOHIDEventSystemConnectionRef conn) {
	OSXIE_STUB_LOG;
	return CFSTR("");
};

void _IOHIDEventSystemConnectionReleasePrivate(IOHIDEventSystemConnectionRef conn) {
	OSXIE_STUB_LOG;
};
