# include <iostream>
using std::cout;
using std::swap;

struct test{
    test(int val1, int val2) :x(val1), y(val2) {}

    int x;
    int y;

    void print() {
        cout << "value x: " << x << "\n" << "value y: " << y << "\n";
    }

};

int main() {
    std::string test = "test";
    std::string temp = "temp";
    swap(test[1],temp[2]);
}