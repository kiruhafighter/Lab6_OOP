#pragma once
#include <iostream>
#include <vector>

template <typename T>
class ContainerHelper {
private:
    std::vector<T>* container;

public:
    ContainerHelper();

    ~ContainerHelper();

    // Insert an element at the end of the container
    void push_back(const T& value);

    // Remove the last element from the container
    void pop_back();

    // Return the size of the container
    size_t size() const;

    // Access an element at a given position in the container
    T& operator[](size_t index);

    // Return an iterator to the first element of the container
    typename std::vector<T>::iterator begin();

    // Return an iterator to the last element of the container
    typename std::vector<T>::iterator end();
};
