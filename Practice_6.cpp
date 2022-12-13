#include <iostream>
#include <vector>

void print_vector(std::vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";
    std::cout << std::endl;
}

int main()
{
    std::vector<int> v = { 1, 2625, 15, 65, 48 }, x, y;
    std::cout << v.capacity() << std::endl;

    v.push_back(57); // добавляет элемент в конец массива
    v.erase(v.begin() + 2); // удаляет элемент массива на опр. позиции
    v.insert(v.begin() + 1, 52); // добавляет элемент перед опр. элементом
    print_vector(v);

    std::cout << v.capacity() << std::endl; // возвращает кол-во элементов, которое может вместиться в данном массиве
    v.resize(12, 7); // изменяет размер массива (при увеличении новые ячейки заполняются введеным значением)
    print_vector(v);
    std::cout << v.capacity() << " " << v.size() << std::endl;

    v.reserve(20); // изменяет вместимость массива (не заполняет новые ячейки)
    print_vector(v);
    std::cout << v.capacity() << " " << v.size() << std::endl;

    v.shrink_to_fit(); // уменьшает вместимость массива (capacity) до его размера (size)
    print_vector(v);
    std::cout << v.capacity() << " " << v.size() << std::endl;

    v.clear(); // очищает все элементы массива
    print_vector(v);
    std::cout << v.capacity() << " " << v.size() << std::endl;

    v = { 1, 2625, 15, 65, 48 };

    x = v; // создает копию массива
    print_vector(v);
    print_vector(x);

    y = std::move(v); // перемещает данные из 1 массива в другой
    print_vector(v);
    print_vector(y);

    std::cout << x[1] << std::endl; // массив[i] возвращает i-ый элемент массива
}
