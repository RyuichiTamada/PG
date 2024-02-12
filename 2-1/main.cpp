#include <stdio.h>
#include "Enemy.h"

int main() {

	Enemy* enemy_ = new Enemy;

	while (enemy_->GetCount() == false) {
		enemy_->Update();
	}


	return 0;
}