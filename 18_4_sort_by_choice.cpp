//18.4 Сортировка Выбором
#include <iostream>
#include <vector>

int main() {

    std::vector <int> vec = {3, 4, -5, 11, 9, 2, 5, 8, 1, 0, 42, -15};

    for (int i = vec.size()-1; i >= 0; i--)
    {
        int max_ind = 0;
        for (int j=0; j <= i; j++)
        {
            if (vec[j] > vec[max_ind])
                max_ind = j;
        }
        int tmp = vec[i];
        vec[i] = vec[max_ind];
        vec[max_ind] = tmp;
    }

    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }

    return 0;
}

/*
 ПЕРВЫЙ ВАРИАТ СОРТИРОВКИ БЕЗ ОПТИМИЗАЦИИ

    int min = vec[0];
    for(int i = 0; i<vec.size(); i++)
    {
        if (vec[i] < min)
            min = vec[i];
    }

    for(int i = vec.size() - 1; i >= 0; i--)
    {
        int max_ind = 0;
        for(int j = 0; j < vec.size(); j++)
        {
            if (vec[max_ind] < vec[j])
                max_ind = j;
        }
        vec_sorted[i] = vec[max_ind];
        vec[max_ind] = min;
    }

    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec_sorted[i] << " ";
    }

 */