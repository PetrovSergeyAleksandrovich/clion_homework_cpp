#include <iostream>
#include <vector>

int main() {

    std::vector <int> vec =  {-2,1,-3,4,-1,2,1,-5,4};
    int max=0, index_low=0, index_high=0;
    int sum=0;
    int cycle=0;

    for(int i = 0; i < vec.size(); i++)
    {

        if (sum==0) index_high = i;
        sum += vec[i];

        if (sum > max)
        {
            max = sum;
            index_low = i;
            sum = 0;
            i = cycle++;
        }

    }

    std::cout << "Max sum = " << max << " between " << index_low << " and " << index_high << "\n" << std::endl;

    return 0;
}
