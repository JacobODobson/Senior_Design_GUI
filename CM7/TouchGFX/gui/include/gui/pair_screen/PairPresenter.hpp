#ifndef PAIRPRESENTER_HPP
#define PAIRPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class PairView;

class PairPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    PairPresenter(PairView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~PairPresenter() {};

private:
    PairPresenter();

    PairView& view;
};

#endif // PAIRPRESENTER_HPP
