# include <iostream>
using std::cout;

struct test{
    test(int val1, int val2) :x(val1), y(val2) {}

    int x;
    int y;

    void print() {
        cout << "value x: " << x << "\n" << "value y: " << y << "\n";
    }

};

int main() {
    test f{55,12};
    f.print();
}