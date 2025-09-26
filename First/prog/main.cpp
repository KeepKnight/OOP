#include <iostream>
#include <string>

int countVowels(std::string str);

int main() {
    std::string input;
    
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);
    
    if (input.empty()) {
        std::cout << "Ошибка: пустая строка" << std::endl;
        return 1;
    }
    
    bool hasLetters = false;
    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            hasLetters = true;
            break;
        }
    }
    
    if (!hasLetters) {
        std::cout << "Ошибка: в строке нет букв" << std::endl;
        return 1;
    }
    
    int result = countVowels(input);
    std::cout << "Количество гласных: " << result << std::endl;
    
    return 0;
}
