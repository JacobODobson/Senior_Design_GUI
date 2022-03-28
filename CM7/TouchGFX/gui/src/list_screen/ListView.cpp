#include <gui/list_screen/ListView.hpp>
#include <BitmapDatabase.hpp>

float roverXloc, roverYloc, station1Xloc, station1Yloc, station2Xloc, station2Yloc, station3Xloc, station3Yloc;


ListView::ListView()
{
    
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

    roverDot.setXY(myExtraSpecialXRescaler(roverXloc), myExtraSpecialYRescaler(roverYloc));
    station1.setXY(myExtraSpecialXRescaler(station1Xloc), myExtraSpecialYRescaler(station1Yloc));
    station2.setXY(myExtraSpecialXRescaler(station2Xloc), myExtraSpecialYRescaler(station2Yloc));
    station3.setXY(myExtraSpecialXRescaler(station3Xloc), myExtraSpecialYRescaler(station3Yloc));

    add(roverDot);
    add(station1);
    add(station2);
    add(station3);

}

void ListView::tearDownScreen()
{
    ListViewBase::tearDownScreen();
}
