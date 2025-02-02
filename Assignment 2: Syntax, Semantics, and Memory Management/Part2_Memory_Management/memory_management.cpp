#include <iostream>
void processData(int* ptr) {
    std::cout << "Processing data: " << *ptr << std::endl;
}

int main() {
    // Allocating memory dynamically
    int* data = new int(42);

    // Accessing and processing the allocated memory
    processData(data);

    // Freeing the allocated memory manually
    delete data;

    // Uncommenting the next line will cause undefined behavior (dangling pointer)
    // std::cout << *data << std::endl;

    // Forgetting to free memory leads to a memory leak
    int* leak = new int(100); // Memory not freed

    return 0;
}
