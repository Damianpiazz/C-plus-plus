#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};

    // Usando una lambda para imprimir los elementos del vector
    std::for_each(v.begin(), v.end(), [](int x) { std::cout << x << " "; });

    return 0;
}
