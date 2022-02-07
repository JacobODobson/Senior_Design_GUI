#ifndef PAIRVIEW_HPP
#define PAIRVIEW_HPP

#include <gui_generated/pair_screen/PairViewBase.hpp>
#include <gui/pair_screen/PairPresenter.hpp>

class PairView : public PairViewBase
{
public:
    PairView();
    virtual ~PairView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // PAIRVIEW_HPP
