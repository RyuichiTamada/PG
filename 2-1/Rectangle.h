#pragma once
#include "IShape.h"
class Rectangle :public IShape
{

	void Size()override;

	void Draw()override;

private:
	//�e??p??
	int diagonal = 0;

};