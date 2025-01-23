# include <iostream>

struct Vector {
    int sz;
    double* elem;
};
void vector_init(Vector& v, int s) {
    v.elem = new double[s];
    v.sz = s;
};
void test() {
    Vector vec;
    vector_init(vec, 5);
    vec.elem[2] = 7;
    std::cin >> vec.elem[2];
    std::cout << vec.elem[2];
};

int main() {
    test();
}