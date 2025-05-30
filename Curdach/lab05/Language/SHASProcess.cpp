#include "SHASProcess.h"
#include <sstream>

std::string SHASProcess::FormatAsMatlabArray(bool manualInput, double num_a, double num_b) {
    std::ostringstream resultStream;

    if (!manualInput) {
        // ����� �������� �������� ��� �������������� �����
    } else {
        // ������ ����������
        if (num_a > num_b) {
            num_a = num_a + num_b;  // ���� a > b, �� a = a + b
        } else {
            num_a = num_a - num_b;  // ���� a <= b, �� a = a - b
        }

        // ���������� ���������, ������ �������� ���������� a
        resultStream << "a = " << num_a << ";\r\n";
    }

    return resultStream.str();
}

