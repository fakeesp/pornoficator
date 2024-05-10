#include <fmt/core.h>
#include <iostream>

enum PornoType { PORNO_LATIN, PORNO_CYRILLIC };

int main(int, char**){
    fmt::print("What type of PORNO do you prefer? (cyrillic/latin):");
    std::string porno_type_string;
    std::cin >> porno_type_string;

    PornoType porno_type = (
        porno_type_string == "cyrillic" 
        ? PornoType::PORNO_CYRILLIC 
        : PornoType::PORNO_LATIN
    );

    while (true) {
        fmt::println(porno_type == PornoType::PORNO_CYRILLIC ? "ПОРНО" : "PORNO");
    }
}
