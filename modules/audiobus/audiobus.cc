#include "axoloti.h"

extern "C" {

enum {
	n_busses = 8
};

static int32_t bus_data[n_busses][BUFSIZE];


void audiobus_set(unsigned int index, int32_t *buf) {
	if (index > n_busses-1) {
		index = n_busses-1;
	}
	int i;
	int32_t *p = &bus_data[index][i];
	for(i=BUFSIZE;i;i-=4) {
		*p++ = *buf++;
		*p++ = *buf++;
		*p++ = *buf++;
		*p++ = *buf++;
	}
}

void audiobus_add(unsigned int index, int32_t *buf) {
	if (index > n_busses-1) {
		index = n_busses-1;
	}
	int i;
	int32_t *p = &bus_data[index][i];
	for(i=BUFSIZE;i;i-=4) {
		*p++ += *buf++;
		*p++ += *buf++;
		*p++ += *buf++;
		*p++ += *buf++;
	}
}

void audiobus_sub(unsigned int index, int32_t *buf) {
	if (index > n_busses-1) {
		index = n_busses-1;
	}
	int i;
	int32_t *p = &bus_data[index][i];
	for(i=BUFSIZE;i;i-=4) {
		*p++ -= *buf++;
		*p++ -= *buf++;
		*p++ -= *buf++;
		*p++ -= *buf++;
	}
}

const int32_t * audiobus_get(unsigned int index) {
	if (index > n_busses-1) {
		index = n_busses-1;
	}
	return &bus_data[index][0];
}

}
