#include <stdio.h>
#include "MT.h"

int main() {

	MT<int, int>num1(3, 5);
	MT<float, float>num2(1.5f, 2.1f);
	MT<double, double>num3(2.5f, 5.1f);
	MT<int, float>num4(5, 4.8f);
	MT<int, double>num5(6, 7.9f);
	MT<float, double>num6(5.4f, 7.5f);

	printf("%d\n", num1.Min());
	printf("%f\n", num2.Min());
	printf("%f\n", num3.Min());
	printf("%d\n", num4.Min());
	printf("%d\n", num5.Min());
	printf("%f\n", num6.Min());
}