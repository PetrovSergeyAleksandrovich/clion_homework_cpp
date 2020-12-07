#include <iostream>
#include <vector>

void bubble_sort(std::vector<int> &vec_tmp)
{
    for (int i = 0; i < vec_tmp.size(); i++)
    {
        for (int j=0; j < vec_tmp.size()-i-1; j++)
        {
            if (vec_tmp[j] > vec_tmp[j + 1])
            {
                int tmp = vec_tmp[j];
                vec_tmp[j] = vec_tmp[j + 1];
                vec_tmp[j+1] = tmp;
            }
        }
    }
}

int main() {

    std::cout << "STARTING" << std::endl;
    std::vector<int> vec = {-100,-50, -5, 1, 10, 15};
    std::vector<bool> tmp = {};

    for(int i=0; i < vec.size(); i++)
    {
        if(vec[i] >= 0) tmp.push_back(true);
        else {
            tmp.push_back(false);
            vec[i] *= -1;
        }
    }

    bubble_sort(vec);
    std::cout <<"\nCurrent vector: ";
    for(int i = 0; i < vec.size(); i++){
        if (!tmp[i]) std::cout << -1 * vec[i] << " ";
        if (tmp[i]) std::cout << vec[i] << " ";
    }
    std::cout << " \n";

    return 0;

}
