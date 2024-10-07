#include <iostream>
#include "Study.hpp"

template<class T>
Study<T>::Study() {}

template<class T>
void Study<T>::setData(T somedata){
    mydata=somedata;
}

template<class T>
T Study<T>::getData() const{
    return mydata;
}
template class Study<std::string>;
template class Study<double>;
