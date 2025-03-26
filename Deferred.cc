#include <iostream>

class Calculator {
private:
    int a, b;

public:
    Calculator(int x, int y) : a(x), b(y) {}

    auto getDeferredSum() {
        return [this]() { return a + b; };  // ✅ Captures `this`, executes later
    }
};

int main() {
    Calculator calc(10, 20);

    auto sumLambda = calc.getDeferredSum();  // ✅ Stores the lambda function

    std::cout << "Deferred result: " << sumLambda() << std::endl;  // ✅ Executes later
}
