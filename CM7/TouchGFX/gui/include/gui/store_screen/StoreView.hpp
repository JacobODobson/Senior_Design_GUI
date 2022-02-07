#ifndef STOREVIEW_HPP
#define STOREVIEW_HPP

#include <gui_generated/store_screen/StoreViewBase.hpp>
#include <gui/store_screen/StorePresenter.hpp>

class StoreView : public StoreViewBase
{
public:
    StoreView();
    virtual ~StoreView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // STOREVIEW_HPP
