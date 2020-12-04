#include <iostream>
#include <vector>

int main() {

    std::vector <int> vec = {2, 7, -12, 15, 4, 9, 11, -2, 0};
    int x = -1; // searching number <-- CHANGE HERE
    int number_one, number_two;
    bool found = false;

    for (int i = 0; i < vec.size()-1; i++)
    {
        int sum=0;
        for (int j = i+1; j < vec.size(); j++)
        {
            sum = vec[i] + vec[j];
            if (sum == x)
            {
                number_one = vec[i];
                number_two = vec[j];
                std::cout << number_one << " and " << number_two << "\n" << std::endl;
                found = true;
                break;
            }
        }
        if (found) break;
    }

    return 0;

    return 0;
}
