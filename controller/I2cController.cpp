#include "I2cController.h"

using namespace std;

I2cController::I2cController() {
    
}

I2cController::~I2cController() {

}

void I2cController::init(uint8_t deviceAddress) {
	Wire.begin(deviceAddress);
}

void I2cController::setOnRequestCallback(void (* callback)(void)) {
	Wire.onRequest(callback);
}

void I2cController::setOnReceiveCallback(void (* callback)(int)) {
	Wire.onReceive(callback);
}