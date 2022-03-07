//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body


template <typename T>
class Calculator {
private:
    int num1, num2;

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    T add(T n1, T n2) { return n1 + n2; }
    T subtract(T n1, T n2) { return n1 - n2;}
    T multiply(T n1, T n2) { return n1 * n2; }
    T divide(T n1, T n2) { return n1 / n2; }
};















