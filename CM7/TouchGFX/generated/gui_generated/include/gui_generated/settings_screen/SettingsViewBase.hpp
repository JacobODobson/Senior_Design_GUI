/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SETTINGSVIEWBASE_HPP
#define SETTINGSVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/settings_screen/SettingsPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>

class SettingsViewBase : public touchgfx::View<SettingsPresenter>
{
public:
    SettingsViewBase();
    virtual ~SettingsViewBase() {}
    virtual void setupScreen();

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
    touchgfx::ButtonWithLabel Back;
    touchgfx::DigitalClock digitalClock1;
    touchgfx::TextArea textArea1;
    touchgfx::ScalableImage scalableImage2;
    touchgfx::TextArea textArea2;
    touchgfx::ToggleButton Mode;
    touchgfx::TextArea textArea3;
    touchgfx::TextArea textArea4;
    touchgfx::BoxWithBorder boxWithBorder1;
    touchgfx::TextAreaWithOneWildcard textAreaID;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > flexButtonID;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREAID_SIZE = 18;
    touchgfx::Unicode::UnicodeChar textAreaIDBuffer[TEXTAREAID_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<SettingsViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<SettingsViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // SETTINGSVIEWBASE_HPP
