#include "voltear.hpp"
#include <string>

std::string voltear(const std::string& s) {
    std::string reversa;
    for(std::size_t i = s.size() ; i > 0 ; i--) reversa += s[i - 1];
    return reversa;
}