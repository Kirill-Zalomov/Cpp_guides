#include <iostream>
#include <string>
#include <thread>


// Класс (функциональный объект), демонстрирующий, как работает конструктор,
// конструктор копирования, деструктор, оператор () в случае передачи функци-
// онального объекта данного класса потоку
class MyClass {

    private: std::wstring object_name_;

    public: MyClass(const std::wstring& object_name) {
        object_name_ = object_name;
        std::wcout << L"Конструктор MyClass         |  " << object_name_ << std::endl;
    }

    public: MyClass(const MyClass& object) {
        object_name_ = object.object_name_;
        std::wcout << L"Конструктор копир. MyClass  |  " << object_name_ << std::endl;
    }

    public: ~MyClass() {
        std::wcout << L"Деструктор MyClass          |  " << object_name_ << std::endl;
    }

    public: void operator()() const {
        std::wcout << L"Сообщение от MyClass        |  " << object_name_ << std::endl;
    }

};


// Класс, статический метод run() которого будет передан потоку
class StaticRunner {
    public: static void run() {
        std::wcout << L" ###|  static Runner::run()" << std::endl;
    }
};


// Класс, метод run() которого будет передан потоку
class Runner {
    public: void run() {
        std::wcout << L" ###| Runner::run()" << std::endl;
    }
};


// Класс, присоединяющий поток к текущему, в случае выхода объекта std::thread
// за область видимости или в случае исключений
class thread_guard {

    private: std::thread& thread_;

    public: thread_guard(std::thread& thread) : thread_(thread) {};
    ~thread_guard() {
        if(thread_.joinable()) thread_.join();
    }

    thread_guard& operator=(const thread_guard& tg) = delete;
    thread_guard(const thread_guard& tg) = delete;

};


// Функция, которая будет передаваться в поток, как точка входа
void do_something() {
    std::wcout << L"<< Привет" << std::endl;
}


int main() {
    setlocale(LC_ALL, "");
    MyClass object { L"object_with_name" };

    // Пример 1. Передача потоку функции, которая будет его точкой входа
    std::thread thread1 { do_something };
    thread_guard tg1 { thread1 };

    // Пример 2. Передача потоку временного функционального объекта
    std::thread thread2 { MyClass(L"temporary_object") };
    thread_guard tg2 { thread2 };

    // Пример 3. Передача потоку функц. объекта, являющего локал. переменной
    std::thread thread3 { object };
    thread_guard tg3 { thread3 };

    // Пример 4. Передача потоку статической функции класса
    std::thread thread4 { StaticRunner::run };
    thread_guard tg4 { thread4 };

    // Пример 5. Передача потоку метода класса с указанием ссылки на объект
    Runner runner;
    std::thread thread5 { &Runner::run, &runner };
    thread_guard tg5 { thread5 };

    std::wcout << std::wstring(20, '-') << std::endl;

    // Пример 6. Передача потоку лямбда-выражения
    std::thread thread6 {
        []() {
            std::wcout << L"<< Лямбда-выражение\n";
        }
    };
    thread_guard tg6 { thread6 };

    return 0;
}

