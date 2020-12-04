#include <iostream>
#include <vector>

int main() {

    std::vector <int> vec =  {-2,1,-3,4,-1,2,1,-5,4};
    int max=0, index_low, index_high;

    for (int i = 0; i < vec.size()-1; i++)
    {
        int sum=0;
        for (int j = i; j < vec.size(); j++)
        {
            sum += vec[j];
            if (sum > max)
            {
                max = sum;
                index_low = i;
                index_high = j;
            }
        }
    }

    std::cout << "Max sum = " << max << " between " << index_low << " and " << index_high << "\n" << std::endl;

    return 0;
}
