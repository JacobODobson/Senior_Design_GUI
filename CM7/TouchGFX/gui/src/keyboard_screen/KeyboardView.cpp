#include <gui/keyboard_screen/KeyboardView.hpp>
#include <string.h>

extern Unicode::UnicodeChar keyboardBuffer[18];
extern Unicode::UnicodeChar keyboardBuffer_1[18];


KeyboardView::KeyboardView()
{
    keyboard.setPosition(10, 30, 320, 240); // add
    add(keyboard); // add
}

void KeyboardView::setupScreen()
{
    KeyboardViewBase::setupScreen();

    if(Unicode::strlen(keyboardBuffer_1) > 0)
    {
        memset(&textArea1Buffer, 0, TEXTAREA1_SIZE);
        Unicode::strncpy(textArea1Buffer, keyboardBuffer_1, TEXTAREA1_SIZE - 1);
        textArea1Buffer[TEXTAREA1_SIZE-1] = '\0'; // make sure last index is null
        textArea1.invalidate();
    }
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
