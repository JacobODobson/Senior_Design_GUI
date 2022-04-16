#include <gui/home_screen/HomeView.hpp>
#include <BitmapDatabase.hpp>
#include <string.h>
#include "trilateration.h"

extern float station1Xloc, station1Yloc, station2Xloc, station2Yloc, station3Xloc, station3Yloc;
extern vec3d pos;

extern Unicode::UnicodeChar keyboardBuffer_1[18];

HomeView::HomeView()
{
	station1Xloc = 0.2; station1Yloc = 0.9;
	station2Xloc = 0.95; station2Yloc = 0.5;
	station3Xloc = 0.4; station3Yloc = 0.05;


	roverDot.setBitmap(touchgfx::Bitmap(BITMAP_O_ID));
	station1.setBitmap(touchgfx::Bitmap(BITMAP_X_ID));
	station2.setBitmap(touchgfx::Bitmap(BITMAP_X_ID));
	station3.setBitmap(touchgfx::Bitmap(BITMAP_X_ID));

	roverDot.setXY(myExtraSpecialXRescaler2(pos.x), myExtraSpecialYRescaler2(pos.y));
	station1.setXY(myExtraSpecialXRescaler2(station1Xloc), myExtraSpecialYRescaler2(station1Yloc));
	station2.setXY(myExtraSpecialXRescaler2(station2Xloc), myExtraSpecialYRescaler2(station2Yloc));
	station3.setXY(myExtraSpecialXRescaler2(station3Xloc), myExtraSpecialYRescaler2(station3Yloc));



	add(station1);
	add(station2);
	add(station3);

	add(roverDot);
}


void HomeView::handleTickEvent()
{
	roverDot.setXY(myExtraSpecialXRescaler2(pos.x), myExtraSpecialYRescaler2(pos.y));
	roverDot.invalidate();

	scalableImage6.invalidate();
}

int myExtraSpecialXRescaler2(float x) {
    if (x <= 0)
        return 341;
    if (x >= 1)
        return 441;

    return 341 + x*(441-341);
}

int myExtraSpecialYRescaler2(float y) {
    if (y <= 0)
        return 149;
    if (y >= 1)
        return 236;

    return 149 + y*(236-149);
}


void HomeView::setupScreen()
{
    HomeViewBase::setupScreen();

    if(Unicode::strlen(keyboardBuffer_1) > 0)
    {
        memset(&textArea1Buffer, 0, TEXTAREA1_SIZE);
        Unicode::strncpy(textArea1Buffer, keyboardBuffer_1, TEXTAREA1_SIZE - 1);
        textArea1Buffer[TEXTAREA1_SIZE-1] = '\0'; // make sure last index is null
        textArea1.invalidate();
    }

}

void HomeView::tearDownScreen()
{
    HomeViewBase::tearDownScreen();
}


/*
void HomeView::updateScreen() // add
{

    if(Unicode::strlen(keyboardBuffer_1) > 0)
    {
        memset(&textArea1Buffer, 0, TEXTAREA1_SIZE);
        Unicode::strncpy(textArea1Buffer, keyboardBuffer_1, TEXTAREA1_SIZE - 1);
        textArea1Buffer[TEXTAREA1_SIZE-1] = '\0'; // make sure last index is null
        textArea1.invalidate();
    }
}*/
