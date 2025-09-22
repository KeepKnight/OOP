#include <iostream>
#include <string>

int countVowels(std::string str);

void runTests() {
    int passed = 0;
    int total = 0;
    
    //тест1
    total++;
    if (countVowels("hello") == 2) {
        std::cout << "тест1 гуд: hello -> 2 гласные" << std::endl;
        passed++;
    } else {
        std::cout << "тест1 НЕ гуд: hello ожидалось 2" << std::endl;
    }
    
    //тест2
    total++;
    if (countVowels("world") == 1) {
        std::cout << "тест2 гуд: world -> 1 гласная" << std::endl;
        passed++;
    } else {
        std::cout << "тест1 не гуд: world ожидалось 1" << std::endl;
    }
    
    //тест3
    total++;
    if (countVowels("aeiou") == 5) {
        std::cout << "тест1 гуд: aeiou -> 5 гласных" << std::endl;
        passed++;
    } else {
        std::cout << "тест1 не гуд: aeiou ожидалось 5" << std::endl;
    }
    
    std::cout << "Пройдено тестов: " << passed << " из " << total << std::endl;
}

int main() {
    std::cout << "Запуск тестов..." << std::endl;
    runTests();
    return 0;
}
