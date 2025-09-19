// status_view.h
#ifndef STATUS_VIEW_H
#define STATUS_VIEW_H

#include <gtkmm/box.h>
#include <gtkmm/label.h>

class StatusView : public Gtk::Box {
public:
    StatusView();
    ~StatusView() override = default;

    void set_status_text(const std::string& text);

private:
    Gtk::Label status_label_;
    Gtk::Label value_label_;
};

#endif // STATUS_VIEW_H
