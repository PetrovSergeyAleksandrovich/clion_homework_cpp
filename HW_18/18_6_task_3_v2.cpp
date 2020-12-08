#include <iostream>
#include <vector>

void print_vector(std::vector<int> &vec_tmp)
{
    std::cout <<"\nCurrent vector: ";
    for(int i : vec_tmp){
        std::cout << i << " ";
    }
    std::cout << " \n";
}

int bubble_sort(std::vector<int> &vec_tmp)
{
    int x=0;
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

    if(vec_tmp.size()>5) vec_tmp.pop_back();

    if (vec_tmp.size() > 4)
    {
        x = vec_tmp[4];
        return x;
    }
    else {
        std::cout << "\nLow vector size to show 5th index position! Type more numbers!\nReturned predefined value: ";
    }

    return x;
}

int main() {

    std::cout << "STARTING" << std::endl;
    std::vector<int> vec = {};
    bool status = true;
    int number;
    int show_5_number;

    while(status){
        std::cout << "\n(-1: shows vector, -2: closes program)\nType the number: ";
        std::cin >> number;

        if (number == -1){
            show_5_number = bubble_sort(vec);
            print_vector(vec);
            std::cout << "5th number: " << show_5_number << std::endl;
            continue;
        }

        if (number == -2){
            status = false;
            std::cout << "EXITING" << std::endl;
        }

        vec.push_back(number);

        if(vec.size()==6)
        {
            bubble_sort(vec);
        }

    }

    return 0;

}

