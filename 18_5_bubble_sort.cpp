//18.4 Сортировка Пузырьком
#include <iostream>
#include <vector>

int main() {

    std::vector <int> vec = {3, 4, -5, 11, 9, 2, 5, 8, 1, 0, 42, -15};

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j=0; j < vec.size()-i-1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                int tmp = vec[j];
                vec[j] = vec[j + 1];
                vec[j+1] = tmp;
            }
        }
    }

    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }

    return 0;
}

