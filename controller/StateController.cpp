#include "StateController.h"

StateController::StateController() {
	ready = false;
}

StateController::~StateController() {
	
}

State StateController::getState() {
	if (ready) {
		return currentState;
	}

	State state;
	uint8_t *buffer = new uint8_t[sizeof(State)];
	for (size_t i = 0; i < sizeof(State); i++) {
		//buffer[i] = EEPROM[i];
	}

	memcpy(&state, buffer, sizeof(State));
	delete[] buffer;

	currentState = state;
	ready = true;

	// Serial.println("[STATE] getState:");
	// Serial.print("    ventilatorSpeed = ");
	// Serial.println((int) state.ventilatorSpeed);
	// Serial.println("");

	return currentState;
}

void StateController::setState(State state) {
	uint8_t *buffer = new uint8_t[sizeof(State)];
	memcpy(buffer, &state, sizeof(State));
	for (size_t i = 0; i < sizeof(State); i++) {
		//EEPROM[i] = buffer[i];
	}

	delete[] buffer;
	currentState = state;

	// Serial.println("[STATE] setState:");
	// Serial.print("    ventilatorSpeed = ");
	// Serial.println((int) state.ventilatorSpeed);
	// Serial.println("");
}