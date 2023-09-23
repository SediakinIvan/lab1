#include <iostream>
#include <string>

int main() {
    std::string input;

    std::cout << "Введите строку: ";
    std::getline(std::cin, input);

    // Удаляем пробелы и пунктуационные знаки
    std::string cleanedInput;
    for (char c : input) {
        if (!std::isspace(c) && !std::ispunct(c)) {
            cleanedInput += c;
        }
    }

    // Сортируем буквы в алфавитном порядке
    for (int i = 0; i < cleanedInput.length() - 1; i++) {
        for (int j = 0; j < cleanedInput.length() - i - 1; j++) {
            if (cleanedInput[j] > cleanedInput[j + 1]) {
                char temp = cleanedInput[j];
                cleanedInput[j] = cleanedInput[j + 1];
                cleanedInput[j + 1] = temp;
            }
        }
    }

    std::cout << "Результат: " << cleanedInput << std::endl;

    return 0;
}