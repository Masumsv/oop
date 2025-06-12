#include <iostream>

template<typename T>
class parent {
public:
    virtual T Add(T a, T b) {
        return a + b;
    }

    virtual ~parent() {}
};

class child : public parent<int> {
public:
    int Add(int a, int b) override {
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
