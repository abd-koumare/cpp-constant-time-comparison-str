#include <iostream>
#include <string>

bool str_equal(const std::string&, const std::string&);

int main() {

    std::string a = "aba", b = "abaa";

    if(str_equal(a, b))
        std::cout << a << " and " << b << " are equal." << std::endl;
    else
        std::cout << a << " and " << b << " are different." << std::endl;
    return 0;
}


bool str_equal(const std::string &trust_str, const std::string &untrusted_str) {
    size_t are_equal = 0, i = 0, j = 0, k = 0;


    //  do not compare trust_str_len and untrusted_str_len to avoid leaks of length

    size_t trust_str_len = trust_str.size();
    size_t untrusted_str_len = untrusted_str.size();


    while (j < untrusted_str_len) {
        are_equal |= trust_str[i] ^ untrusted_str[j++];
        i < trust_str_len ? i++ : k++; // replace i++ when it stops incrementing to keep the execution time
    }
    return are_equal == 0 && trust_str_len == untrustred_str_len;
}
