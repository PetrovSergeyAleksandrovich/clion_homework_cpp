#include <iostream>
#include <vector>


int main() {

    std::cout << "STARTING_18_6_task_4_v2" << std::endl;
    // Вектор должен содержать только равное количество неодинаковых по модулю положительных и отрицательных чисел
    std::vector<int> vec =  {-125, -118, -7, -5, 1, 10, 15, 117};
    int x = 0;

    if(vec.size()%2==0)
    {
        vec.push_back( -1*vec[0]+1 );
    }

    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i] > 0){
            x = i;
            break;
        }
    }

    std::cout << vec[x] << " ";
    for(int i = 1, j = x-1;;)
    {
        if( vec[x+i] < abs(vec[j]) ){
            std::cout << vec[x+i] << " ";
            i++;
        } else if (vec[x+i] > abs(vec[j])){
            std::cout << vec[j] << " ";
            j--;
        }

        if(j==-1 || i==vec.size()) break;
    }

    std::cout << " \n";

    return 0;

}
