/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    // Home
    void gotoHomeScreenNoTransition();

    // List
    void gotoListScreenNoTransition();

    // Store
    void gotoStoreScreenNoTransition();

    // Settings
    void gotoSettingsScreenNoTransition();

    // Pair
    void gotoPairScreenNoTransition();

    // Keyboard
    void gotoKeyboardScreenNoTransition();

    // Keyboard_1
    void gotoKeyboard_1ScreenNoTransition();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // Home
    void gotoHomeScreenNoTransitionImpl();

    // List
    void gotoListScreenNoTransitionImpl();

    // Store
    void gotoStoreScreenNoTransitionImpl();

    // Settings
    void gotoSettingsScreenNoTransitionImpl();

    // Pair
    void gotoPairScreenNoTransitionImpl();

    // Keyboard
    void gotoKeyboardScreenNoTransitionImpl();

    // Keyboard_1
    void gotoKeyboard_1ScreenNoTransitionImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
