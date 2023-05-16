#include<iostream>
#include "ContainerHelper.cpp"

int main() {
    ContainerHelper<int> container;

    container.push_back(1);
    container.push_back(2);
    container.push_back(3);

    std::cout << "Container size: " << container.size() << std::endl;

    for (auto it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;

    container.pop_back();

    std::cout << "Container size: " << container.size() << std::endl;

    for (size_t i = 0; i < container.size(); ++i) {
        std::cout << container[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}

