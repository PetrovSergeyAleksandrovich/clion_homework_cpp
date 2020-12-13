#include <iostream>
#include <vector>


int main() {

    std::cout << "STARTING_18_6_task_4_v2" << std::endl;
    // Вектор может содержать любое кол-во количество неодинаковых по модулю положительных и отрицательных чисел
    std::vector<int> vec = {-100, -7, -5, -1, 1, 10, 15, 25, 57};
    int x = 0;
    bool status_i = true;
    bool status_j = true;

    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i] > 0){
            x = i;
            break;
        }
    }

    std::cout << vec[x] << " ";

    for(int i = x+1, j = x-1;;)
    {

        if(!status_j) j=0;
        if(!status_i) i=vec.size()-1;
        if(!status_j && !status_i) break;

        // MOVE RIGHT
        if(status_i && vec[i] < abs(vec[j]) )
        {
            std::cout << vec[i] << " ";
                if(i==vec.size()-1)
                {
                    status_i = false;
                }
            if (status_i) i++;
        }
        if(!status_j && vec[i] > abs(vec[j]) )
        {
            std::cout << vec[i] << " ";
            i++;
            if(i==vec.size()) break;
        }

        //MOVE LEFT
        if (status_j && vec[i] > abs(vec[j]))
        {
            std::cout << vec[j] << " ";
                if(j==0){
                    status_j = false;
                }
             if(status_j) j--;
        }
        if (!status_i && vec[i] < abs(vec[j]))
        {
            std::cout << vec[j] << " ";
            j--;
            if(j==-1) break;

        }



    }

    std::cout << " \n";

    return 0;

}
