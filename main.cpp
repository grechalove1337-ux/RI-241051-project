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

    // Каркас программы
    std::vector<std::string> lines = readFromFile(inputFile);
    printToScreen(lines);
    writeToFile(lines, outputFile);

    return 0;
}

// ФУНКЦИЯ ЧТЕНИЯ (U1) - ГОТОВАЯ ВЕРСИЯ
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
    return lines; // Возвращаем результат без отладочного вывода
}

void printToScreen(const std::vector<std::string>& lines) {
    // Заглушка
}

void writeToFile(const std::vector<std::string>& lines, const std::string& filename) {
    // Заглушка
}
