#include <string>

int countVowels(std::string str) {
    int count = 0;
    
    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            count++;
        }
    }
    
    return count;
}
