#ifndef EXPORTPRESENTER_HPP
#define EXPORTPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ExportView;

class ExportPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ExportPresenter(ExportView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~ExportPresenter() {};

private:
    ExportPresenter();

    ExportView& view;
};

#endif // EXPORTPRESENTER_HPP
