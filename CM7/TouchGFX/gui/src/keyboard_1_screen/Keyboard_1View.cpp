#include <gui/keyboard_1_screen/Keyboard_1View.hpp>

extern Unicode::UnicodeChar keyboardBuffer_1[18];

Keyboard_1View::Keyboard_1View()
{
    keyboard.setPosition(10, 30, 320, 240); // add
    add(keyboard); // add
}

void Keyboard_1View::setupScreen()
{
    Keyboard_1ViewBase::setupScreen();
}

void Keyboard_1View::tearDownScreen()
{
    Keyboard_1ViewBase::tearDownScreen();
}

void Keyboard_1View::getBuffer_1() // add
{
    Unicode::UnicodeChar* buff = keyboard.getBuffer();
    Unicode::strncpy(keyboardBuffer_1, buff, Unicode::strlen(buff) + 1);
}