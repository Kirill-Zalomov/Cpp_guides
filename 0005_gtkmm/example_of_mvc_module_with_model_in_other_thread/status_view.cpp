// status_view.cpp
#include "status_view.h"

StatusView::StatusView()
: Gtk::Box(Gtk::Orientation::HORIZONTAL, 5),
status_label_("Статус:"),
value_label_("Готов") {

    // Настройка внешнего вида
    set_margin(5);
    status_label_.set_halign(Gtk::Align::START);
    value_label_.set_halign(Gtk::Align::START);

    // Добавление виджетов
    append(status_label_);
    append(value_label_);
}

void StatusView::set_status_text(const std::string& text) {
    value_label_.set_text(text);
}
