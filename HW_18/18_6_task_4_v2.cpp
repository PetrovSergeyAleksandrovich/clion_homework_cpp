#include <iostream>
#include <vector>

int main() {

    std::cout << "STARTING" << std::endl;
    std::vector<int> vec = {-100,-50, -5, 1, 10, 15};
    int x=0;

    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i]>0){
            x = i;
            std::cout << vec[x] << " ";
            break;
        }
    }

    if(vec.size()%2 == 0)
    {
        for(int i = 1; i < vec.size()/2; i++)
        {

            if(vec[x+i] > abs(vec[x-i])){
                std::cout << vec[x-i] << " " << vec[x+i] <<" ";
            }
            else{
                std::cout << vec[x+i] << " " << vec[x-i] <<" ";
            }
        }
        std::cout << vec[0] << " ";
    }

    if(vec.size()%2 == 1)
    {
        for(int i = 1; i < vec.size()/2+1; i++)
        {

            if(vec[x+i] > abs(vec[x-i])){
                std::cout << vec[x-i] << " " << vec[x+i] <<" ";
            }
            else{
                std::cout << vec[x+i] << " " << vec[x-i] <<" ";
            }
        }
    }

    std::cout << " \n";

    return 0;

}
