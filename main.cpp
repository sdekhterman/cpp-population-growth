#include <iostream>

int main(int argc, char *argv[], char *envp[])
{
    int value = 42;
    int* ptr = &value;

    std::cout << "Value: " << *ptr << std::endl;

    return 0;
}
