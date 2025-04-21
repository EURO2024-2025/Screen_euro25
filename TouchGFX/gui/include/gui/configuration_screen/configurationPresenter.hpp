#ifndef CONFIGURATIONPRESENTER_HPP
#define CONFIGURATIONPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class configurationView;

class configurationPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    configurationPresenter(configurationView& v);
    int getScore() const { return model->getScore(); }
    void setScore(int value) { model->setScore(value); }
    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~configurationPresenter() {}

private:
    configurationPresenter();

    configurationView& view;
};

#endif // CONFIGURATIONPRESENTER_HPP
