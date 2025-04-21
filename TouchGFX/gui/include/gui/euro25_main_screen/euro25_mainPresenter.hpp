#ifndef EURO25_MAINPRESENTER_HPP
#define EURO25_MAINPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

class euro25_mainView;

class euro25_mainPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    euro25_mainPresenter(euro25_mainView& v);

    virtual void activate();
    virtual void deactivate();

    // ✅ Accessor functions for score
    int getScore() const { return model->getScore(); }
    void setScore(int value) { model->setScore(value); }

private:
    euro25_mainPresenter();
    euro25_mainView& view;
};

#endif // EURO25_MAINPRESENTER_HPP
