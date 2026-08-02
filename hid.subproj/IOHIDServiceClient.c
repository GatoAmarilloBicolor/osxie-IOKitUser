// created for Osxie

#include <IOKit/hid/IOHIDServiceClient.h>
#include <IOKit/hid/IOHIDServiceClientPrivate.h>
#include "stub-log.h"

OSXIE_STUB_HEADER;

boolean_t IOHIDServiceClientConformsTo(IOHIDServiceClientRef service, uint32_t usagePage, uint32_t usage) {
	OSXIE_STUB_LOG;
	return 0;
};

CFStringRef IOHIDServiceClientCopyDescription(IOHIDServiceClientRef service) {
	OSXIE_STUB_LOG;
	return CFSTR("");
};

CFTypeRef IOHIDServiceClientCopyProperty(IOHIDServiceClientRef service, CFStringRef key) {
	OSXIE_STUB_LOG;
	return NULL;
};

Boolean IOHIDServiceClientSetProperty(IOHIDServiceClientRef service, CFStringRef key, CFTypeRef property) {
	OSXIE_STUB_LOG;
	return 0;
};

void _IOHIDServiceClientReleasePrivate(IOHIDServiceClientRef service) {
	OSXIE_STUB_LOG;
};
