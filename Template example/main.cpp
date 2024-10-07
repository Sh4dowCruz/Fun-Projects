#include <iostream>
#include "Study.hpp"

int main()
{
    Study<std::string> string_obj;
    Study<double> double_obj;
    
    string_obj.setData("Laptop");
    double_obj.setData(1000.0);
    std::cout<<"Product 1: Name: "<<string_obj.getData()<<", Price: "<<double_obj.getData()<<"\n";
    
    string_obj.setData("Smartphone");
    double_obj.setData(500.0);
    std::cout<<"Product 2: Name: "<<string_obj.getData()<<", Price: "<<double_obj.getData()<<"\n";
    
    string_obj.setData("Headphones");
    double_obj.setData(50.0);
    std::cout<<"Product 3: Name: "<<string_obj.getData()<<", Price: "<<double_obj.getData()<<"\n";

    return 0;
}
