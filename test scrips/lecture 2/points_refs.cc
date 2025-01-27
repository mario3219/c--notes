# include <iostream>
using std::cout;

void print(int *p) {
    cout << "the value pointed to is " << *p << "\n";
}

int main() {
    int x = 42;
    int *p = &x;
    cout << &x << '\n';
    cout << x << '\n';
    cout << *p << '\n';
}