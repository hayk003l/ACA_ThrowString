#include <iostream>

class A {
private:
    int* _num = 0;

public:
    A(const int& num) : _num(new int(num)) {}
    ~A() {
        try {
           delete _num;
           _num = nullptr;
           throw "Error!";
        }
        catch(const std::string& err)  {
            std::cerr << err << std::endl;
        }
        
    }
};


int main() {
    int num = 4;
    A obj(num);

    return 0;
}