#include "App.h"
#include <SnickerSource\ScreenList.h>


App::App()
{
}


App::~App()
{
}

void App::onInit() {

}

void App::addScreens() {
	m_gameplayScreen = std::make_unique<GamePlayScreen>(&m_window);

	m_screenList->addScreen(m_gameplayScreen.get());
	m_screenList->setScreen(m_gameplayScreen->getIndex());
}

void App::onExit() {

}