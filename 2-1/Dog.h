#pragma once
#include "Animals.h"

class Dog : public Animals
{
public:
	Dog();

	~Dog();

	void Cry() override;

};