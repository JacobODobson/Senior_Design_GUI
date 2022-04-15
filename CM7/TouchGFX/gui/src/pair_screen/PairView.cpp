#include <gui/pair_screen/PairView.hpp>
#include <stdio.h>
#include <string.h>

Unicode::UnicodeChar keyboardBuffer[18];
extern Unicode::UnicodeChar keyboardBuffer_1[18];

PairView::PairView()
{

}

void PairView::setupScreen()
{
    PairViewBase::setupScreen();

    if(Unicode::strlen(keyboardBuffer) > 0)
    {
        memset(&textAreaIDBuffer, 0, TEXTAREAID_SIZE);
        Unicode::strncpy(textAreaIDBuffer, keyboardBuffer, TEXTAREAID_SIZE - 1);
        textAreaIDBuffer[TEXTAREAID_SIZE-1] = '\0'; // make sure last index is null
        textAreaID.invalidate();
    }

    if(Unicode::strlen(keyboardBuffer_1) > 0)
    {
        memset(&textArea1Buffer, 0, TEXTAREA1_SIZE);
        Unicode::strncpy(textArea1Buffer, keyboardBuffer_1, TEXTAREA1_SIZE - 1);
        textArea1Buffer[TEXTAREA1_SIZE-1] = '\0'; // make sure last index is null
        textArea1.invalidate();
    }
}

void PairView::tearDownScreen()
{
    PairViewBase::tearDownScreen();
}

void PairView::updateScreen()
{
    
}