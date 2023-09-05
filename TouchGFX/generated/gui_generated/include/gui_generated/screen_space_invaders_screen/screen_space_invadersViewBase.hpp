/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN_SPACE_INVADERSVIEWBASE_HPP
#define SCREEN_SPACE_INVADERSVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen_space_invaders_screen/screen_space_invadersPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/widgets/canvas/Line.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class screen_space_invadersViewBase : public touchgfx::View<screen_space_invadersPresenter>
{
public:
    screen_space_invadersViewBase();
    virtual ~screen_space_invadersViewBase();
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void fire_bullet()
    {
        // Override and implement this function in screen_space_invaders
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::ScalableImage background_black;
    touchgfx::ButtonWithIcon btn_left;
    touchgfx::ButtonWithIcon btn_right;
    touchgfx::ButtonWithIcon btn_fire;
    touchgfx::ScalableImage enemy1;
    touchgfx::ScalableImage ship;
    touchgfx::Line bullet;
    touchgfx::PainterRGB565 bulletPainter;
    touchgfx::ButtonWithIcon btn_back;
    touchgfx::TextArea lbl_game_over;
    touchgfx::TextArea lbl_win;
    touchgfx::TextArea lbl_lose;

private:

    /*
     * Canvas Buffer Size
     */
    static const uint32_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

    /*
     * Callback Declarations
     */
    touchgfx::Callback<screen_space_invadersViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SCREEN_SPACE_INVADERSVIEWBASE_HPP