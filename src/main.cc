#include <iostream>
void printValue(int value)
{
    std::cout <<"memory of value" << &value << " value inside value: "<< value << std::endl;
}
int main()

{
    int something {5};//stack
    int& ref{something};
    ref++;
    std::cout << "memory of something: " << &something<< " value inside memmory: " << something <<std::endl;
    std::cout <<"memory of ref"<<&ref << "value inside ref: "<< ref <<std::endl;
    std::cout<<std::endl;
    printValue(something);
    std::cin.get();
    return 0;

}