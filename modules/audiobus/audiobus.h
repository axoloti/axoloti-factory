#pragma once

extern "C" {
	void audiobus_add(unsigned int index, int32_t *buf);
	void audiobus_sub(unsigned int index, int32_t *buf);
	const int32_t * audiobus_get(unsigned int index);
}
