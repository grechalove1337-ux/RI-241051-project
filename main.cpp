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

// Функции-заглушки
std::vector<std::string> readFromFile(const std::string& filename) {
    std::vector<std::string> lines;
    return lines; // Заглушка
}

void printToScreen(const std::vector<std::string>& lines) {
    // Заглушка
}

void writeToFile(const std::vector<std::string>& lines, const std::string& filename) {
    // Заглушка
}
