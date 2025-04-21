#ifndef EURO25_MAINVIEW_HPP
#define EURO25_MAINVIEW_HPP

#include <gui_generated/euro25_main_screen/euro25_mainViewBase.hpp>
#include <gui/euro25_main_screen/euro25_mainPresenter.hpp>

class euro25_mainView : public euro25_mainViewBase
{
public:
    euro25_mainView();
    virtual ~euro25_mainView() {}

    virtual void setupScreen();
    virtual void tearDownScreen();

    void updateScoreDisplay();  // Optional helper
};

#endif // EURO25_MAINVIEW_HPP
