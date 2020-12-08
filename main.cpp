#include <iostream>
#include <vector>

int main() {

    std::vector <int> vec =   {-5,-2,2,-4,-5,-6,-7,1,-9};
    int max=vec[0], index_low=-1, index_high=-1;

    for (int i = 0; i < vec.size()-1; i++)
    {
        int sum=0;
        for (int j = i; j < vec.size(); j++)
        {
            sum += vec[j];
            if (sum > max)
            {
                std::cout << i << " sum tmp = " << sum << std::endl;
                max = sum;
                index_low = i;
                index_high = j;
            }
        }
    }

    std::cout << "Max sum = " << max << " between " << index_low << " and " << index_high << "\n" << std::endl;

    return 0;
}