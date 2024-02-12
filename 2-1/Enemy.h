#pragma once
#include "Phase.h"
class Enemy
{
public:

	/// <summary>
	/// ?X?V
	/// </summary>
	void Update();


	bool GetCount() { return count; }

private:

	/// <summary>
	/// ????
	/// </summary>
	void Approach();

	/// <summary>
	/// ????
	/// </summary>
	void Shooting();

	/// <summary>
	/// ??ÅfE
	/// </summary>
	void Leave();



private:

	static void (Enemy::* fhaseTable[])();

	Phase phase_ = Phase::APPROACH;

	bool count = false;

};