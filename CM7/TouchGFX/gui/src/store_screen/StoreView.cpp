#include <gui/store_screen/StoreView.hpp>
extern Unicode::UnicodeChar keyboardBuffer_1[18];

StoreView::StoreView()
{

}

void StoreView::setupScreen()
{
    StoreViewBase::setupScreen();

    if(Unicode::strlen(keyboardBuffer_1) > 0)
    {
        memset(&textArea1Buffer, 0, TEXTAREA1_SIZE);
        Unicode::strncpy(textArea1Buffer, keyboardBuffer_1, TEXTAREA1_SIZE - 1);
        textArea1Buffer[TEXTAREA1_SIZE-1] = '\0'; // make sure last index is null
        textArea1.invalidate();
    }

}

void StoreView::tearDownScreen()
{
    StoreViewBase::tearDownScreen();
}
