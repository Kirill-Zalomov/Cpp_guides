#include <iostream>
#include <iomanip>
#include <cstdint>
#include <openssl/sha.h>


int main() {
    // Текст, для которого будет вычислять контрольная суммма
    const std::string input = "Hello, World";

    // Создаем массив для хранения контрольной суммы
    uint8_t hash[SHA256_DIGEST_LENGTH];

    // Вычисляем SHA256
    SHA256(reinterpret_cast<const unsigned char*>(input.c_str()), input.size(), hash);

    // Выводим исходный текст
    std::cout << std::setw(16) << "Text: " << "\"" << input << "\"" << std::endl;

    // Выводим контрольную сумму SHA256 в шестнадцатеричном формате для текста "Hello, World"
    std::cout << std::setw(16) << "SHA256 of text: ";
    for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i) {
        std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(hash[i]);
    }
    std::cout << std::endl;

    return 0;
}
