#ifndef STATECONTROLLER_H
#define STATECONTROLLER_H

#include "common/common.h"

using namespace std;

typedef struct {
	uint8_t ventilatorPosition;
	uint8_t ventilatorSpeed;
	bool isAirConditioningOn;
	bool isAirRecirculationOn;
	bool areHazardLightsOn;
	bool isDefrostOn;
} State;

class StateController {
private:
	bool ready;
	State currentState;

public:
	StateController();
	~StateController();

	State getState();
	void setState(State state);
};

#endif