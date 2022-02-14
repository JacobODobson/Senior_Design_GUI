#include <gui/keyboard_screen/KeyboardView.hpp>

extern Unicode::UnicodeChar keyboardBuffer[18];

KeyboardView::KeyboardView()
{
    keyboard.setPosition(10, 30, 320, 240); // add
    add(keyboard); // add
}

void KeyboardView::setupScreen()
{
    KeyboardViewBase::setupScreen();
}

void KeyboardView::tearDownScreen()
{
    KeyboardViewBase::tearDownScreen();
}

void KeyboardView::getBuffer() // add
{
    Unicode::UnicodeChar* buff = keyboard.getBuffer();
    Unicode::strncpy(keyboardBuffer, buff, Unicode::strlen(buff) + 1);
}
