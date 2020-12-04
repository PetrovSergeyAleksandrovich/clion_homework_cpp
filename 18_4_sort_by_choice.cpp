#include <iostream>
#include <vector>

int main() {

    std::vector <int> vec = {3, 4, -5, 11, 9, 2, 5, 8, 1};
    std::vector <int> vec_sorted(vec.size(), 0);

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

    return 0;
}
