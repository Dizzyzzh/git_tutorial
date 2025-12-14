#include <iostream>

class Hello
{
public:
    void sayHello() const
    {
        std::cout << "Hello, World!" << std::endl;
    }
};

int main()
{
    Hello hello;
    hello.sayHello();
    return 0;
}
