/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef KEYBOARD_1VIEWBASE_HPP
#define KEYBOARD_1VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/keyboard_1_screen/Keyboard_1Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class Keyboard_1ViewBase : public touchgfx::View<Keyboard_1Presenter>
{
public:
    Keyboard_1ViewBase();
    virtual ~Keyboard_1ViewBase() {}
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void getBuffer_1()
    {
        // Override and implement this function in Keyboard_1
    }

    virtual void updateScreen()
    {
        // Override and implement this function in Keyboard_1
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::Box box2;
    touchgfx::ButtonWithLabel Cancel;
    touchgfx::DigitalClock digitalClock1;
    touchgfx::TextAreaWithOneWildcard textArea1;
    touchgfx::ScalableImage scalableImage2;
    touchgfx::TextArea textArea2;
    touchgfx::ButtonWithLabel Confirm;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREA1_SIZE = 18;
    touchgfx::Unicode::UnicodeChar textArea1Buffer[TEXTAREA1_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Keyboard_1ViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // KEYBOARD_1VIEWBASE_HPP
