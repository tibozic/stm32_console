/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN_MAIN_MENUVIEWBASE_HPP
#define SCREEN_MAIN_MENUVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen_main_menu_screen/screen_main_menuPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>

class screen_main_menuViewBase : public touchgfx::View<screen_main_menuPresenter>
{
public:
    screen_main_menuViewBase();
    virtual ~screen_main_menuViewBase();
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::ScalableImage scalableImage1;
    touchgfx::ScalableImage scalableImage2;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  btn_tictactoe;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  btn_snake;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<screen_main_menuViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // SCREEN_MAIN_MENUVIEWBASE_HPP
