#ifndef HOMEVIEW_HPP
#define HOMEVIEW_HPP

#include <gui_generated/home_screen/HomeViewBase.hpp>
#include <gui/home_screen/HomePresenter.hpp>

class HomeView : public HomeViewBase
{
public:
    HomeView();
    virtual ~HomeView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    //virtual void updateScreen();
protected:
    touchgfx::Image roverDot;
    touchgfx::Image station1;
    touchgfx::Image station2;
    touchgfx::Image station3;
};


int myExtraSpecialXRescaler2(float x);
int myExtraSpecialYRescaler2(float y);


#endif // HOMEVIEW_HPP
