#ifndef KEYBOARD_1VIEW_HPP
#define KEYBOARD_1VIEW_HPP

#include <gui_generated/keyboard_1_screen/Keyboard_1ViewBase.hpp>
#include <gui/keyboard_1_screen/Keyboard_1Presenter.hpp>
#include <gui/common/CustomKeyboard.hpp> // add

class Keyboard_1View : public Keyboard_1ViewBase
{
public:
    Keyboard_1View();
    virtual ~Keyboard_1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
	virtual void getBuffer_1();
    virtual void updateScreen();
protected:
	CustomKeyboard keyboard; // add
};

#endif // KEYBOARD_1VIEW_HPP
