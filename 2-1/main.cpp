#include <stdio.h>
#include "Animals.h"
#include "Dog.h"
#include "Cat.h"


int main() {

	Animals* animals_[2];
	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			animals_[i] = new Dog;
		}
		else {
			animals_[i] = new Cat;
		}
	}

	for (int i = 0; i < 2; i++) {
		animals_[i]->Cry();
	}

	return 0;
}