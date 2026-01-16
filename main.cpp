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

    std::vector<std::string> lines = readFromFile(inputFile);
    printToScreen(lines);
    writeToFile(lines, outputFile);

    return 0;
}

// ФУНКЦИЯ ЧТЕНИЯ (U1)
std::vector<std::string> readFromFile(const std::string& filename) {
    std::vector<std::string> lines;
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Ошибка открытия файла: " << filename << std::endl;
        return lines;
    }

    std::string line;
    while (std::getline(file, line)) {
        if (!line.empty()) {
            lines.push_back(line);
        }
    }

    file.close();
    return lines;
}

// ФУНКЦИИ ВЫВОДА И ЗАПИСИ (U2)
void printToScreen(const std::vector<std::string>& lines) {
    if (lines.empty()) {
        std::cout << "Вектор пуст." << std::endl;
        return;
    }
    
    std::cout << "=== ВЫВОД НА ЭКРАН ===" << std::endl;
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
