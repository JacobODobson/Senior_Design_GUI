/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef STOREVIEWBASE_HPP
#define STOREVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/store_screen/StorePresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class StoreViewBase : public touchgfx::View<StorePresenter>
{
public:
    StoreViewBase();
    virtual ~StoreViewBase() {}
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
    touchgfx::TextAreaWithOneWildcard textArea1;
    touchgfx::ScalableImage scalableImage2;
    touchgfx::TextArea textArea2;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREA1_SIZE = 18;
    touchgfx::Unicode::UnicodeChar textArea1Buffer[TEXTAREA1_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<StoreViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // STOREVIEWBASE_HPP
