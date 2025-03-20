#include <catch2/catch_test_macros.hpp>
#include <fakeit.hpp>
#include "math_service.h"


TEST_CASE("MathService mock example", "[math]") {
    // Создаем мок-объект для MathService
    fakeit::Mock<MathService> mock;

    // Настраиваем мок: при вызове add(2, 3) возвращаем 5
    fakeit::When(Method(mock, add)).Return(5);

    // Проверяем, что мок работает как ожидается
    REQUIRE(mock.get().add(2, 3) == 5);

    // Проверяем, что метод add был вызван ровно один раз
    fakeit::Verify(Method(mock, add)).Once();
}

