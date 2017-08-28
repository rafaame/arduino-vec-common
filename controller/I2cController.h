#ifndef I2CCONTROLLER_H
#define I2CCONTROLLER_H

#include "common/common.h"

using namespace std;

class I2cController {
private:
	
public:
	I2cController();
	~I2cController();

	void init(uint8_t deviceAddress);

	void setOnRequestCallback(void (* callback)(void));
	void setOnReceiveCallback(void (* callback)(int));

	inline int read() { return Wire.read(); };
	inline size_t write(uint8_t n) { return Wire.write(n); };
	inline size_t write(const uint8_t *buffer, size_t size) { return Wire.write(buffer, size); };
	inline size_t write(unsigned long n) { return Wire.write(n); }
    inline size_t write(long n) { return Wire.write(n); }
    inline size_t write(unsigned int n) { return Wire.write(n); }
    inline size_t write(int n) { return Wire.write(n); }
};

#endif