/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    virtual void changeToStartScreen()
    {
        gotoscreen_main_menuScreenNoTransition();
    }

    // screen_main_menu
    void gotoscreen_main_menuScreenNoTransition();

    // screen_snake_game
    void gotoscreen_snake_gameScreenWipeTransitionEast();

    // screen_tictactoe_game
    void gotoscreen_tictactoe_gameScreenNoTransition();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // screen_main_menu
    void gotoscreen_main_menuScreenNoTransitionImpl();

    // screen_snake_game
    void gotoscreen_snake_gameScreenWipeTransitionEastImpl();

    // screen_tictactoe_game
    void gotoscreen_tictactoe_gameScreenNoTransitionImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
