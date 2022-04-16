#include <gui/list_screen/ListView.hpp>
#include <BitmapDatabase.hpp>
#include <iostream>
#include <string.h>
#include "trilateration.h"

float station1Xloc, station1Yloc, station2Xloc, station2Yloc, station3Xloc, station3Yloc;
extern vec3d pos;

extern Unicode::UnicodeChar keyboardBuffer_1[18];


ListView::ListView()
{
    
}

void ListView::handleTickEvent()
{
	roverDot.setXY(myExtraSpecialXRescaler(pos.x), myExtraSpecialYRescaler(pos.y));
	roverDot.invalidate();

	scalableImage3.invalidate();

	Unicode::UnicodeChar x_string[11];
	Unicode::strncpy(x_string, std::to_string(10*pos.x+735249.058).c_str(), TEXTAREAX_SIZE - 1);

	if(Unicode::strlen(x_string) > 0)
	{
		memset(&textAreaXBuffer, 0, TEXTAREAX_SIZE);
		Unicode::strncpy(textAreaXBuffer, x_string, TEXTAREAX_SIZE - 1);
		textAreaXBuffer[TEXTAREAX_SIZE-1] = '\0'; // make sure last index is null
		textAreaX.invalidate();
	}
	
	Unicode::UnicodeChar y_string[12];
	Unicode::strncpy(y_string, std::to_string(10*pos.y+2096168.453).c_str(), TEXTAREAY_SIZE - 1);

	if(Unicode::strlen(y_string) > 0)
	{
		memset(&textAreaYBuffer, 0, TEXTAREAY_SIZE);
		Unicode::strncpy(textAreaYBuffer, y_string, TEXTAREAY_SIZE - 1);
		textAreaYBuffer[TEXTAREAY_SIZE-1] = '\0'; // make sure last index is null
		textAreaY.invalidate();
	}

}


int myExtraSpecialXRescaler(float x) {
    if (x <= 0)
        return 146;
    if (x >= 1)
        return 320;

    return 146 + x*(320-146);
}

int myExtraSpecialYRescaler(float y) {
    if (y <= 0)
        return 62;
    if (y >= 1)
        return 223;

    return 62 + y*(223-62);
}


void ListView::setupScreen()
{
    ListViewBase::setupScreen();
    
    roverDot.setBitmap(touchgfx::Bitmap(BITMAP_O_ID));
    station1.setBitmap(touchgfx::Bitmap(BITMAP_X_ID));
    station2.setBitmap(touchgfx::Bitmap(BITMAP_X_ID));
    station3.setBitmap(touchgfx::Bitmap(BITMAP_X_ID));

    roverDot.setXY(myExtraSpecialXRescaler(pos.x), myExtraSpecialYRescaler(pos.y));
    station1.setXY(myExtraSpecialXRescaler(station1Xloc), myExtraSpecialYRescaler(station1Yloc));
    station2.setXY(myExtraSpecialXRescaler(station2Xloc), myExtraSpecialYRescaler(station2Yloc));
    station3.setXY(myExtraSpecialXRescaler(station3Xloc), myExtraSpecialYRescaler(station3Yloc));


    add(station1);
    add(station2);
    add(station3);

    add(roverDot);

    if(Unicode::strlen(keyboardBuffer_1) > 0)
    {
        memset(&textArea1Buffer, 0, TEXTAREA1_SIZE);
        Unicode::strncpy(textArea1Buffer, keyboardBuffer_1, TEXTAREA1_SIZE - 1);
        textArea1Buffer[TEXTAREA1_SIZE-1] = '\0'; // make sure last index is null
        textArea1.invalidate();
    }

}

void ListView::tearDownScreen()
{
    ListViewBase::tearDownScreen();
}
