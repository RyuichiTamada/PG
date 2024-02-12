#pragma once

#include "IScene.h"
#include "InputManager.h"

#include "Player.h"
#include "Enemy.h"

#include <ICommand.h>
#include <InputHandler.h>

#include <memory>

class StageScene : public IScene {
public:
	~StageScene() override;

	void Initialize() override;
	void Update() override;
	void Draw() override;
	void Finalize() override;

private:
	InputHandler* inputHandler_ = nullptr;
	ICommand* command_ = nullptr;

	std::unique_ptr<Player> player_;
	std::unique_ptr<Enemy> enemy_;
};