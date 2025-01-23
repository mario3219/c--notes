# include <iostream>

void itr(int* x, size_t n) {
    for (int* p=x; p != x+n; ++p)
        *p = 0;
}

int main() {
    int a{1,2,3,4,5};
    std::cout << size_t a;
    return 0;
}