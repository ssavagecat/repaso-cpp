#include <iostream>
#include <vector>

void medirCapacidad(std::vector<int> v, std::size_t cap) {
    std::cout << "size 0 -> capacity " << cap << '\n';
    for(int i = 0 ; i < 1000 ; ++i) {
        v.push_back(i);
        if(v.capacity() != cap) {
            cap = v.capacity();
            std::cout << "size " << v.size()
                      << " -> capacity " << cap << '\n';
        }
    }
}

int main() {
    std::vector<int> vector;
    std::size_t capacidad = vector.capacity();
    medirCapacidad(vector, capacidad);
    return 0;
}