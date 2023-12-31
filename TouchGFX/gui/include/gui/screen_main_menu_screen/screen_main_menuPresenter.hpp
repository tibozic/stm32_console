#ifndef SCREEN_MAIN_MENUPRESENTER_HPP
#define SCREEN_MAIN_MENUPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class screen_main_menuView;

class screen_main_menuPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    screen_main_menuPresenter(screen_main_menuView& v);

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

    virtual ~screen_main_menuPresenter() {}

private:
    screen_main_menuPresenter();

    screen_main_menuView& view;
};

#endif // SCREEN_MAIN_MENUPRESENTER_HPP
