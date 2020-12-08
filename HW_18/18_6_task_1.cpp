#include <iostream>
#include <vector>

int main() {

    std::vector <int> vec =  {-5,-2,2,-4,-5,-6,-7,-8,-9};
    int max=vec[0], index_low=-1, index_high=-1;
    int sum=0; int count=0;

    for(int i = 0; i < vec.size(); i++)
    {

        if (sum==0) count = i;

        sum += vec[i];

        if (sum >= max)
        {
            max = sum;
            index_low = count;
            index_high = i;
        }

        sum = std::max(0, sum);
        std::cout << "sum tmp = " << sum << std::endl;

    }

    std::cout << "Max sum = " << max << " between " << index_low << " and " << index_high << "\n" << std::endl;

    return 0;
}
