#include "GameManager.h"

GameManager::GameManager() {

}

GameManager::~GameManager() {

}

void GameManager::Initialize() {
	Novice::Initialize("PG3_PG3-_Novice", 1280, 720);
	inputManager_ = InputManager::GetInstance();
	inputManager_->Initialize();

	sceneArray_[0] = std::make_unique<TitleScene>();
	sceneArray_[0]->Initialize();

	sceneArray_[1] = std::make_unique<StageScene>();
	sceneArray_[2] = std::make_unique<ClearScene>();

	currentSceneNumber_ = TITLE_SCENE;
}

void GameManager::Run() {
	Initialize();

	while (Novice::ProcessMessage() == 0) {
		Novice::BeginFrame();
		inputManager_->Update();

		///
		/// ���X�V������������
		///
		previousSceneNumber_ = currentSceneNumber_;
		currentSceneNumber_ = sceneArray_[currentSceneNumber_]->GetSceneNumber();

		if (currentSceneNumber_ != previousSceneNumber_) {
			sceneArray_[previousSceneNumber_]->Finalize();
			sceneArray_[currentSceneNumber_]->Initialize();
		}

		sceneArray_[currentSceneNumber_]->Update();

		///
		/// ���X�V���������܂�
		///


		///
		/// ���`�揈����������
		///

		sceneArray_[currentSceneNumber_]->Draw();

		///
		/// ���`�揈�������܂�
		///

		// �t���[���̏I��
		Novice::EndFrame();

		// ESC�L�[�������ꂽ�烋�[�v�𔲂���
		if (inputManager_->PushKey(DIK_ESCAPE)) {
			break;
		}
	}

	Novice::Finalize();
}
