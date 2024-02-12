#include <Novice.h>
#include "GameManager.h"

const char kWindowTitle[] = "学籍番号";

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	SetConsoleOutputCP(65001);

	std::unique_ptr<GameManager> gameManager = std::make_unique<GameManager>();
	gameManager->Run();

	return 0;
}