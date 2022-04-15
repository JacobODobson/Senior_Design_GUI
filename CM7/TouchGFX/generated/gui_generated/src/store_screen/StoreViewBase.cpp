/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/store_screen/StoreViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

StoreViewBase::StoreViewBase() :
    buttonCallback(this, &StoreViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFromRGB(229, 229, 229));

    box2.setPosition(0, 0, 480, 27);
    box2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));

    Back.setXY(363, 225);
    Back.setBitmaps(touchgfx::Bitmap(BITMAP_SIDE_BUTTON_ID), touchgfx::Bitmap(BITMAP_SIDE_BUTTON_PRESSED_ID));
    Back.setLabelText(touchgfx::TypedText(T___SINGLEUSE_QKC1));
    Back.setLabelColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    Back.setLabelColorPressed(touchgfx::Color::getColorFromRGB(0, 0, 0));
    Back.setAction(buttonCallback);

    digitalClock1.setPosition(11, 4, 69, 23);
    digitalClock1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    digitalClock1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_P646));
    digitalClock1.displayLeadingZeroForHourIndicator(false);
    digitalClock1.setDisplayMode(touchgfx::DigitalClock::DISPLAY_12_HOUR_NO_SECONDS);
    digitalClock1.setTime12Hour(10, 10, 0, true);

    textArea1.setXY(209, 4);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_3ADT).getText());
    textArea1.setWildcard(textArea1Buffer);
    textArea1.resizeToCurrentText();
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_OI0A));

    scalableImage2.setBitmap(touchgfx::Bitmap(BITMAP_BATTERY_ID));
    scalableImage2.setPosition(411, 1, 24, 26);
    scalableImage2.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    textArea2.setXY(441, 7);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_2J1L));

    add(__background);
    add(box1);
    add(box2);
    add(Back);
    add(digitalClock1);
    add(textArea1);
    add(scalableImage2);
    add(textArea2);
}

void StoreViewBase::setupScreen()
{

}

void StoreViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &Back)
    {
        //To_List
        //When Back clicked change screen to List
        //Go to List with no screen transition
        application().gotoListScreenNoTransition();
    }
}
