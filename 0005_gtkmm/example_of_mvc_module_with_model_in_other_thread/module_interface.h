// module_interface.h
#ifndef MODULE_INTERFACE_H
#define MODULE_INTERFACE_H

#include <gtkmm/box.h>

class ModuleInterface {
public:
    virtual ~ModuleInterface() = default;
    virtual Gtk::Box* get_widget() = 0;
};

#endif // MODULE_INTERFACE_H
