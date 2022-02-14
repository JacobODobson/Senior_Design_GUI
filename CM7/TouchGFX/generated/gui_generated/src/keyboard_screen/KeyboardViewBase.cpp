/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/keyboard_screen/KeyboardViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

KeyboardViewBase::KeyboardViewBase() :
    buttonCallback(this, &KeyboardViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFromRGB(229, 229, 229));

    box2.setPosition(0, 0, 480, 27);
    box2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));

    Cancel.setXY(363, 225);
    Cancel.setBitmaps(touchgfx::Bitmap(BITMAP_SIDE_BUTTON_ID), touchgfx::Bitmap(BITMAP_SIDE_BUTTON_PRESSED_ID));
    Cancel.setLabelText(touchgfx::TypedText(T___SINGLEUSE_ZM34));
    Cancel.setLabelColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    Cancel.setLabelColorPressed(touchgfx::Color::getColorFromRGB(0, 0, 0));
    Cancel.setAction(buttonCallback);

    digitalClock1.setPosition(11, 4, 69, 23);
    digitalClock1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    digitalClock1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_J7WE));
    digitalClock1.displayLeadingZeroForHourIndicator(false);
    digitalClock1.setDisplayMode(touchgfx::DigitalClock::DISPLAY_12_HOUR_NO_SECONDS);
    digitalClock1.setTime12Hour(10, 10, 0, true);

    textArea1.setXY(209, 4);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_X6DM));

    scalableImage2.setBitmap(touchgfx::Bitmap(BITMAP_BATTERY_ID));
    scalableImage2.setPosition(411, 1, 24, 26);
    scalableImage2.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    textArea2.setXY(441, 7);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_NOEU));

    Confirm.setXY(363, 177);
    Confirm.setBitmaps(touchgfx::Bitmap(BITMAP_SIDE_BUTTON_ID), touchgfx::Bitmap(BITMAP_SIDE_BUTTON_PRESSED_ID));
    Confirm.setLabelText(touchgfx::TypedText(T___SINGLEUSE_84G8));
    Confirm.setLabelColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    Confirm.setLabelColorPressed(touchgfx::Color::getColorFromRGB(0, 0, 0));
    Confirm.setAction(buttonCallback);

    add(__background);
    add(box1);
    add(box2);
    add(Cancel);
    add(digitalClock1);
    add(textArea1);
    add(scalableImage2);
    add(textArea2);
    add(Confirm);
}

void KeyboardViewBase::setupScreen()
{

}

void KeyboardViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &Cancel)
    {
        //ButtonCancel
        //When Cancel clicked change screen to Pair
        //Go to Pair with no screen transition
        application().gotoPairScreenNoTransition();
    }
    else if (&src == &Confirm)
    {
        //ButtonConfirm
        //When Confirm clicked call virtual function
        //Call getBuffer
        getBuffer();

        //goBack
        //When ButtonConfirm completed change screen to Pair
        //Go to Pair with no screen transition
        application().gotoPairScreenNoTransition();
    }
}
