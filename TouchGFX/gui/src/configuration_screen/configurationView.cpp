#include <gui/configuration_screen/configurationView.hpp>

configurationView::configurationView() :
    buttonClickedCallback(this, &configurationView::handleRadioButtonClicked)
{
}

void configurationView::setupScreen()
{
    configurationViewBase::setupScreen();

    radioButton1.setSelected(true); // Default
    radioButton1.invalidate();

    radioButton1.setAction(buttonClickedCallback);
    radioButton2.setAction(buttonClickedCallback);
    radioButton3.setAction(buttonClickedCallback);

    updateCounterDisplay();

}

void configurationView::tearDownScreen()
{
    configurationViewBase::tearDownScreen();
}
void configurationView::handleRadioButtonClicked(const AbstractButton& source)
{
    if (&source == &radioButton1)
        radioButton1Clicked();
    else if (&source == &radioButton2)
        radioButton2Clicked();
    else if (&source == &radioButton3)
        radioButton3Clicked();
}
void configurationView::radioButton1Clicked()
{
    counterStep = 1;
    radioButton1.setSelected(true);
    radioButton2.setSelected(false);
    radioButton3.setSelected(false);
    radioButton1.invalidate();
    radioButton2.invalidate();
    radioButton3.invalidate();
}

void configurationView::radioButton2Clicked()
{
    counterStep = 5;
    radioButton1.setSelected(false);
    radioButton2.setSelected(true);
    radioButton3.setSelected(false);
    radioButton1.invalidate();
    radioButton2.invalidate();
    radioButton3.invalidate();
}

void configurationView::radioButton3Clicked()
{
    counterStep = 10;
    radioButton1.setSelected(false);
    radioButton2.setSelected(false);
    radioButton3.setSelected(true);
    radioButton1.invalidate();
    radioButton2.invalidate();
    radioButton3.invalidate();
}
void configurationView::updateCounterDisplay()
{
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%03d", presenter->getScore()); // 3-digit padded
    textArea1.invalidate();  // Refresh display
}
void configurationView::buttonUpClicked()
{
    if (presenter->getScore() + counterStep <= 999)
    	presenter->setScore(presenter->getScore() + counterStep);
    else
    	presenter->setScore(999);
    updateCounterDisplay();
}

void configurationView::buttonDownClicked()
{
    if (presenter->getScore() - counterStep >= 0)
    	presenter->setScore(presenter->getScore() - counterStep);
    else
    	presenter->setScore(0);
    updateCounterDisplay();
}
