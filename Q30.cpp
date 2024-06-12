#include <iostream>

struct Calculator {
    int num1;
    int num2;

    void getInputs() {
        std::cout << "Enter first number: ";
        std::cin >> num1;
        std::cout << "Enter second number: ";
        std::cin >> num2;
    }

    void add() {
        std::cout << "Result: " << num1 + num2 << std::endl;
    }

    void subtract() {
        std::cout << "Result: " << num1 - num2 << std::endl;
    }

    void multiply() {
        std::cout << "Result: " << num1 * num2 << std::endl;
    }

    void divide() {
        if (num2 == 0) {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
        } else {
            std::cout << "Result: " << num1 / num2 << std::endl;
        }
    }

    int power(int base, int exponent) {
        if (exponent == 0) {
            return 1;
        } else {
            return base * power(base, exponent - 1);
        }
    }

    void calculatePower() {
        int result = power(num1, num2);
        std::cout << "Result: " << result << std::endl;
    }

    void calculate(char operation) {
        switch (operation) {
            case '+':
                add();
                break;
            case '-':
                subtract();
                break;
            case '*':
                multiply();
                break;
            case '/':
                divide();
                break;
            case '^':
                calculatePower();
                break;
            default:
                std::cout << "Error: Invalid operation entered." << std::endl;
        }
    }
};

int main() {
    Calculator myCalculator;
    char operation;

    myCalculator.getInputs();

    std::cout << "Enter the operation (+, -, *, /, ^): ";
    std::cin >> operation;

    myCalculator.calculate(operation);

    return 0;
}