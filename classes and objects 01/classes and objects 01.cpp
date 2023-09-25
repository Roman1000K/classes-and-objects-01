#include<iostream>
#include<Windows.h> 


class Calculator {
private:
    double num1;
    double num2;

public:
    double add()
    {
        return num1 + num2;
    }
            
    double multiply() 
    {
        return num1 * num2;
    }

    double subtract_1_2() 
    {
        return num1 - num2;
    }

    double subtract_2_1() 
    {
        return num2 - num1;
    }

    double divide_1_2() 
    {
        return num1 / num2;
    }

    double divide_2_1() 
    {
        return num2 / num1;
    }

    bool set_num1(double num) 
    {
        if (num != 0) {
            num1 = num;
            return true;
        }
        return false;
    }

    bool set_num2(double num) 
    {
        if (num != 0) {
            num2 = num;
            return true;
        }
        return false;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Calculator calc;
    double num1, num2;
    bool success1 = false;
    bool success2 = false;
    
    while (true) 
    {
            std::cout << "Введите первое число: ";
            std::cin >> num1;
            success1 = calc.set_num1(num1);

            std::cout << "Введите второе число: ";
            std::cin >> num2;
            success2 = calc.set_num2(num2);

            if (success1 && success2)
            {
                std::cout << "Результат сложения: " << calc.add() << "\n";
                std::cout << "Результат умножения: " << calc.multiply() << "\n";
                std::cout << "Результат вычитания (число 1 - число 2): " << calc.subtract_1_2() << "\n";
                std::cout << "Результат вычитания (число 2 - число 1): " << calc.subtract_2_1() << "\n";
                std::cout << "Результат деления (число 1 / число 2): " << calc.divide_1_2() << "\n";
                std::cout << "Результат деления (число 2 / число 1): " << calc.divide_2_1() << "\n";
                
            }
            else 
            {
                std::cout << "Введено некорректное значение. Попробуйте снова." << "\n";
            }
    }

    return 0;
}

