#include <iostream>

template<typename T>
class parent {
protected:
    T Add(T a, T b) {
        return a + b;
    }
};

class child : public parent<int> {
public:
    int Add(int a, int b) {
        int c = parent<int>::Add(5, 10);
        return c + 20;
    }
};

int main() {
    child obj;
    int result = obj.Add(3, 4);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
