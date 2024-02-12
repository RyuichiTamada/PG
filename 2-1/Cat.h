#pragma once

#include "Animals.h"

class Cat :public Animals {
public:
	Cat();

	~Cat();

	void Cry() override;

};