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

    if(Unicode::strlen(keyboardBuffer_1) > 0)
    {
        memset(&textArea1Buffer, 0, TEXTAREA1_SIZE);
        Unicode::strncpy(textArea1Buffer, keyboardBuffer_1, TEXTAREA1_SIZE - 1);
        textArea1Buffer[TEXTAREA1_SIZE-1] = '\0'; // make sure last index is null
        textArea1.invalidate();
    }
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


void Keyboard_1View::updateScreen() // add
{

    
}