#pragma once

#include "InputManager.h"
#include "IScene.h"
#include "Title.h"
#include "StageScene.h"
#include "ClearScene.h"

#include <Novice.h>

class GameManager {
public:
	GameManager();
	~GameManager();

	void Initialize();
	void Run();

private:
	InputManager* inputManager_;
	std::unique_ptr<IScene> sceneArray_[3];

	int currentSceneNumber_;
	int previousSceneNumber_;
};
