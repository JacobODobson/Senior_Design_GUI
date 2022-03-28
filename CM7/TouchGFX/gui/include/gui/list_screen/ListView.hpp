#ifndef LISTVIEW_HPP
#define LISTVIEW_HPP

#include <gui_generated/list_screen/ListViewBase.hpp>
#include <gui/list_screen/ListPresenter.hpp>

class ListView : public ListViewBase
{
public:
    ListView();
    virtual ~ListView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
    touchgfx::Image roverDot;
    touchgfx::Image station1;
    touchgfx::Image station2;
    touchgfx::Image station3;

};

int myExtraSpecialXRescaler(float x);
int myExtraSpecialYRescaler(float y);

#endif // LISTVIEW_HPP
