#include <gui/euro25_main_screen/euro25_mainView.hpp>

euro25_mainView::euro25_mainView()
{

}

void euro25_mainView::setupScreen()
{
    euro25_mainViewBase::setupScreen();
    updateScoreDisplay();  // Optional
}

void euro25_mainView::tearDownScreen()
{
    euro25_mainViewBase::tearDownScreen();
}

void euro25_mainView::updateScoreDisplay()
{
    int currentScore = presenter->getScore();  // ✅ shared score
    Unicode::snprintf(textArea10Buffer, TEXTAREA10_SIZE, "%03d", currentScore);
    textArea10.invalidate();
}
