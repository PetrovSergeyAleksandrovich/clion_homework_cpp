#include <iostream>
#include <vector>

int main() {

    std::cout << "STARTING" << std::endl;
    std::vector<int> vec = {-100,-50, -5, 1, 10, 15};
    int x=0;

    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i]>0) x = vec[i];
    }

    std::cout << abs(vec[0]);


    std::cout << " \n";

    return 0;

}
