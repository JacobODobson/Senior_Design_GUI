#ifndef EXPORTVIEW_HPP
#define EXPORTVIEW_HPP

#include <gui_generated/export_screen/ExportViewBase.hpp>
#include <gui/export_screen/ExportPresenter.hpp>

class ExportView : public ExportViewBase
{
public:
    ExportView();
    virtual ~ExportView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // EXPORTVIEW_HPP
