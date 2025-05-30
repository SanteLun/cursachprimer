#include "SHASProcess.h"
#include <sstream>

std::string SHASProcess::FormatAsMatlabArray(bool manualInput, double num_a, double num_b) {
    std::ostringstream resultStream;

    if (!manualInput) {
        // Можно добавить действия при автоматическом вводе
    } else {
        // Логика вычисления
        if (num_a > num_b) {
            num_a = num_a + num_b;  // Если a > b, то a = a + b
        } else {
            num_a = num_a - num_b;  // Если a <= b, то a = a - b
        }

        // Возвращаем результат, только значение переменной a
        resultStream << "a = " << num_a << ";\r\n";
    }

    return resultStream.str();
}

