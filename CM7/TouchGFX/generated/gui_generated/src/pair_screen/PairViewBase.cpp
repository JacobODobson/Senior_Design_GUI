/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/pair_screen/PairViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

PairViewBase::PairViewBase() :
    buttonCallback(this, &PairViewBase::buttonCallbackHandler),
    flexButtonCallback(this, &PairViewBase::flexButtonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFromRGB(229, 229, 229));

    box2.setPosition(0, 0, 480, 27);
    box2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));

    Back.setXY(363, 225);
    Back.setBitmaps(touchgfx::Bitmap(BITMAP_SIDE_BUTTON_ID), touchgfx::Bitmap(BITMAP_SIDE_BUTTON_PRESSED_ID));
    Back.setLabelText(touchgfx::TypedText(T___SINGLEUSE_LL1S));
    Back.setLabelColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    Back.setLabelColorPressed(touchgfx::Color::getColorFromRGB(0, 0, 0));
    Back.setAction(buttonCallback);

    digitalClock1.setPosition(11, 4, 69, 23);
    digitalClock1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    digitalClock1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_AAMY));
    digitalClock1.displayLeadingZeroForHourIndicator(false);
    digitalClock1.setDisplayMode(touchgfx::DigitalClock::DISPLAY_12_HOUR_NO_SECONDS);
    digitalClock1.setTime12Hour(10, 10, 0, true);

    textArea1.setXY(209, 4);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_3EHN));

    scalableImage2.setBitmap(touchgfx::Bitmap(BITMAP_BATTERY_ID));
    scalableImage2.setPosition(411, 1, 24, 26);
    scalableImage2.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    textArea2.setXY(441, 7);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_63ID));

    boxWithBorder1.setPosition(105, 111, 243, 50);
    boxWithBorder1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    boxWithBorder1.setBorderSize(5);

    textAreaID.setPosition(125, 124, 210, 25);
    textAreaID.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textAreaID.setLinespacing(0);
    textAreaIDBuffer[0] = 0;
    textAreaID.setWildcard(textAreaIDBuffer);
    textAreaID.setTypedText(touchgfx::TypedText(T___SINGLEUSE_S131));

    flexButtonID.setBoxWithBorderPosition(0, 0, 243, 50);
    flexButtonID.setBorderSize(5);
    flexButtonID.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButtonID.setPosition(105, 111, 243, 50);
    flexButtonID.setAlpha(0);
    flexButtonID.setAction(flexButtonCallback);

    add(__background);
    add(box1);
    add(box2);
    add(Back);
    add(digitalClock1);
    add(textArea1);
    add(scalableImage2);
    add(textArea2);
    add(boxWithBorder1);
    add(textAreaID);
    add(flexButtonID);
}

void PairViewBase::setupScreen()
{

    //updateText
    //When screen transition begins call virtual function
    //Call updateScreen
    updateScreen();

}

void PairViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &Back)
    {
        //Back
        //When Back clicked change screen to Home
        //Go to Home with no screen transition
        application().gotoHomeScreenNoTransition();
    }
}

void PairViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexButtonID)
    {
        //keyboardSelected
        //When flexButtonID clicked change screen to Keyboard
        //Go to Keyboard with no screen transition
        application().gotoKeyboardScreenNoTransition();
    }
}
