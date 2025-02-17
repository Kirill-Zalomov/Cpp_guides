#include <ncurses.h>
#include <string>
#include <cstdint>


int main() {
    initscr();
    noecho();
    cbreak();

    // Получаем размеры окна
    uint32_t height, width;
    getmaxyx(stdscr, height, width);

    // Тексты для отображения
    std::string line1 = "Hello, World";
    std::string line2 = "Press any key for exit..";

    // Вычисляем позиции для центрирования текста
    uint32_t x1 = (width - line1.length()) / 2;
    uint32_t y1 = height / 2 - 1;
    uint32_t x2 = (width - line2.length()) / 2;
    uint32_t y2 = height / 2 + 1;

    // Выводим текст
    mvprintw(y1, x1, line1.c_str());
    mvprintw(y2, x2, line2.c_str());
    refresh();
    
    // Ожидание нажатия любой клавиши для завершения программы
    getch();   
    endwin();

    return 0;
}
