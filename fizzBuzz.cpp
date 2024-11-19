#include <iostream>
int num = 0;
int main()
{
    while (num <= 99) {
        num++;
        if (num % 3 == 0 && num % 5 == 0) {
            std::cout << "FizzBuzz" << "\n";
        }
        else if (num % 3 == 0) {
            std::cout << "Fizz" << "\n";
        }
        else if (num % 5 == 0) {
            std::cout << "Buzz" << "\n";
        }
        else {
            std::cout << num << "\n";
        }
    }
}

//5/11/24
