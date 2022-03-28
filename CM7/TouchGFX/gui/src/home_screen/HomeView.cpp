#include <gui/home_screen/HomeView.hpp>
#include <BitmapDatabase.hpp>

extern float roverXloc, roverYloc, station1Xloc, station1Yloc, station2Xloc, station2Yloc, station3Xloc, station3Yloc;

HomeView::HomeView()
{

}

int myExtraSpecialXRescaler2(float x) {
    if (x <= 0)
        return 341;
    if (x >= 1)
        return 428;

    return 341 + x*(428-341);
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

    roverXloc = 0.5; roverYloc = 0.5;
    station1Xloc = 0.2; station1Yloc = 0.5;
    station2Xloc = 0.5; station2Yloc = 0.2;
    station3Xloc = 0.6; station3Yloc = 0.3;

    roverDot.setBitmap(touchgfx::Bitmap(BITMAP_O_ID));
    station1.setBitmap(touchgfx::Bitmap(BITMAP_X_ID));
    station2.setBitmap(touchgfx::Bitmap(BITMAP_X_ID));
    station3.setBitmap(touchgfx::Bitmap(BITMAP_X_ID));

    roverDot.setXY(myExtraSpecialXRescaler2(roverXloc), myExtraSpecialYRescaler2(roverYloc));
    station1.setXY(myExtraSpecialXRescaler2(station1Xloc), myExtraSpecialYRescaler2(station1Yloc));
    station2.setXY(myExtraSpecialXRescaler2(station2Xloc), myExtraSpecialYRescaler2(station2Yloc));
    station3.setXY(myExtraSpecialXRescaler2(station3Xloc), myExtraSpecialYRescaler2(station3Yloc));

    add(roverDot);
    add(station1);
    add(station2);
    add(station3);

}

void HomeView::tearDownScreen()
{
    HomeViewBase::tearDownScreen();
}
