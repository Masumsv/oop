#include <iostream>

template<typename T>
class parent {
public:
    T Add(T a, T b) {
        return a + b;
    }
};

class child : public parent<int> {
public:
    int Add(int a, int b) {
        int c = parent<int>::Add(15, 10);
        return c + 5; 
    }
};

int main() {
    parent<int>* ptr;
    child obj;
    ptr = &obj;
    std::cout << "Result: " << ptr->Add(3, 4) << std::endl;
    return 0;
}
