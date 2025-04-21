#ifndef CONFIGURATIONVIEW_HPP
#define CONFIGURATIONVIEW_HPP

#include <gui_generated/configuration_screen/configurationViewBase.hpp>
#include <gui/configuration_screen/configurationPresenter.hpp>

class configurationView : public configurationViewBase
{
public:
    configurationView();
    virtual ~configurationView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void buttonUpClicked() override;
    virtual void buttonDownClicked() override;
    // Add this to your configurationView class in configurationView.hpp
    Callback<configurationView, const AbstractButton&> buttonClickedCallback;

    void handleRadioButtonClicked(const AbstractButton& source);
protected:

    int counterStep = 1; // Default step is 1
    void updateCounterDisplay(); // ✅ Updates textArea1
    void radioButton1Clicked();
    void radioButton2Clicked();
    void radioButton3Clicked();
};

#endif // CONFIGURATIONVIEW_HPP
