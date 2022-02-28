#include <gui/pair_screen/PairView.hpp>
#include <stdio.h>
#include <string.h>

Unicode::UnicodeChar keyboardBuffer[18];

PairView::PairView()
{

}

void PairView::setupScreen()
{
    PairViewBase::setupScreen();
}

void PairView::tearDownScreen()
{
    PairViewBase::tearDownScreen();
}

void PairView::updateScreen()
{
    if(Unicode::strlen(keyboardBuffer) > 0)
    {
        memset(&textAreaIDBuffer, 0, TEXTAREAID_SIZE);
        Unicode::strncpy(textAreaIDBuffer, keyboardBuffer, TEXTAREAID_SIZE - 1);
        textAreaIDBuffer[TEXTAREAID_SIZE-1] = '\0'; // make sure last index is null
        textAreaID.invalidate();
    }
}