#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// Прототипы функций
std::vector<std::string> readFromFile(const std::string& filename);
void printToScreen(const std::vector<std::string>& lines);
void writeToFile(const std::vector<std::string>& lines, const std::string& filename);

int main() {
    std::string inputFile = "input.txt";
    std::string outputFile = "output.txt";

    // Для тестирования создадим тестовые данные
    std::vector<std::string> lines;
    lines.push_back("Тестовая строка 1");
    lines.push_back("Тестовая строка 2");
    lines.push_back("Тестовая строка 3");
    
    // В финальной версии будет:
    // std::vector<std::string> lines = readFromFile(inputFile);
    
    printToScreen(lines);
    writeToFile(lines, outputFile);

    return 0;
}

std::vector<std::string> readFromFile(const std::string& filename) {
    std::vector<std::string> lines;
    return lines; // Заглушка
}

// ФУНКЦИИ ВЫВОДА И ЗАПИСИ (U2) - ГОТОВЫЕ ВЕРСИИ
void printToScreen(const std::vector<std::string>& lines) {
    if (lines.empty()) {
        std::cout << "Вектор пуст." << std::endl;
        return;
    }
    
    std::cout << "=== СОДЕРЖИМОЕ ===" << std::endl;
    for (size_t i = 0; i < lines.size(); i++) {
        std::cout << i + 1 << ". " << lines[i] << std::endl;
    }
    std::cout << "==================" << std::endl;
}

void writeToFile(const std::vector<std::string>& lines, const std::string& filename) {
    std::ofstream file(filename);
    
    if (!file.is_open()) {
        std::cerr << "Ошибка создания файла: " << filename << std::endl;
        return;
    }
    
    for (const auto& line : lines) {
        file << line << std::endl;
    }
    
    file.close();
    std::cout << "Данные записаны в " << filename << std::endl;
}
