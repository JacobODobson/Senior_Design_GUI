#include <gui/settings_screen/SettingsView.hpp>
#include <stdio.h>
#include <string.h>

Unicode::UnicodeChar keyboardBuffer_1[18];

SettingsView::SettingsView()
{

}

void SettingsView::setupScreen()
{
    SettingsViewBase::setupScreen();
}

void SettingsView::tearDownScreen()
{
    SettingsViewBase::tearDownScreen();
}

void SettingsView::updateScreen()
{
    if(Unicode::strlen(keyboardBuffer_1) > 0)
    {
        memset(&textAreaIDBuffer, 0, TEXTAREAID_SIZE);
        Unicode::strncpy(textAreaIDBuffer, keyboardBuffer_1, TEXTAREAID_SIZE - 1);
        textAreaIDBuffer[TEXTAREAID_SIZE-1] = '\0'; // make sure last index is null
        textAreaID.invalidate();
    }
}