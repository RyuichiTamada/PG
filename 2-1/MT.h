#pragma once

template <typename Type1, typename Type2>

class MT
{
public:

	/*MT(Type1 a, Type1 b) {
		num1 = a, num2 = b;
	}*/

	//????g??÷????
	MT(Type1 num1, Type2 num2) :num1(num1), num2(num2) {};


	Type1 Min() {
		if (num1 < num2) {
			return static_cast<Type1>(num1);
		}

		if (num1 > num2) {
			return static_cast<Type1>(num2);
		}
	}


private:

	Type1 num1;
	Type2 num2;

};