#include <cryptopp/sha.h>
#include <cryptopp/hex.h>
#include <iostream>
#include <string>


int main() {
    using namespace CryptoPP;

    std::string message = "Hello, Crypto++!";
    std::string digest;

    SHA256 hash;
    StringSource s(message, true, 
        new HashFilter(hash,
            new HexEncoder(
                new StringSink(digest)
            )
        )
    );

    std::cout << "Message: " << message << std::endl;
    std::cout << "SHA-256: " << digest << std::endl;

    return 0;
}
