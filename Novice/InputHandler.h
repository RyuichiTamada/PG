#pragma once

#include <ICommand.h>

class InputHandler {
public:
	ICommand* HandleInput();

	void AssignMoveRightCommandToPressKeyD();
	void AssignMoveLeftCommandToPressKeyA();

private:
	ICommand* pressKeyA_;
	ICommand* pressKeyD_;
};
