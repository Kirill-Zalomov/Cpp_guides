// main.cpp
#include "status_module.h"
#include <gtkmm/application.h>
#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm/box.h>
#include <thread>
#include <chrono>

class MainWindow : public Gtk::Window {
public:
    MainWindow();
    ~MainWindow() override = default;

private:
    void on_update_status();
    void on_thread_test();

    Gtk::Box main_box_;
    Gtk::Button update_button_;
    Gtk::Button thread_button_;
    std::shared_ptr<StatusModule> status_module_;
};

MainWindow::MainWindow()
: main_box_(Gtk::Orientation::VERTICAL, 10),
update_button_("Обновить статус"),
thread_button_("Тест потока") {

    set_title("Модуль строки состояния");
    set_default_size(400, 200);

    // Создаем модуль статуса
    status_module_ = std::make_shared<StatusModule>();

    // Настройка внешнего вида
    main_box_.set_margin(10);
    update_button_.set_margin(5);
    thread_button_.set_margin(5);

    // Добавляем виджеты
    main_box_.append(*status_module_->get_widget());
    main_box_.append(update_button_);
    main_box_.append(thread_button_);

    set_child(main_box_);

    // Подключаем сигналы
    update_button_.signal_clicked().connect(
        sigc::mem_fun(*this, &MainWindow::on_update_status));
    thread_button_.signal_clicked().connect(
        sigc::mem_fun(*this, &MainWindow::on_thread_test));
}

void MainWindow::on_update_status() {
    static int counter = 0;
    status_module_->set_text("Обновлено: " + std::to_string(++counter));
}

void MainWindow::on_thread_test() {
    // Запускаем обновление статуса из другого потока
    std::thread([this]() {
        for (int i = 1; i <= 5; ++i) {
            std::this_thread::sleep_for(std::chrono::seconds(1));
            status_module_->set_text("Поток: шаг " + std::to_string(i));
        }
        status_module_->set_text("Поток завершен");
    }).detach();
}

int main(int argc, char* argv[]) {
    auto app = Gtk::Application::create("com.example.statusmodule");
    return app->make_window_and_run<MainWindow>(argc, argv);
}
