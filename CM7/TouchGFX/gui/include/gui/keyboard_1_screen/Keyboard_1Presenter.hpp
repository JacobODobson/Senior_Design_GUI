#ifndef KEYBOARD_1PRESENTER_HPP
#define KEYBOARD_1PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Keyboard_1View;

class Keyboard_1Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Keyboard_1Presenter(Keyboard_1View& v);

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

    virtual ~Keyboard_1Presenter() {};

private:
    Keyboard_1Presenter();

    Keyboard_1View& view;
};

#endif // KEYBOARD_1PRESENTER_HPP
