#include <iostream>
#include <vector>
class bitwise
{
public:
    std::vector<int> getbit(int n, int i)
    {

        std::vector<int> v;
        v.push_back(n & i);
        v.push_back(n | i);
        v.push_back(n ^ i);
        v.push_back(n << i);
        v.push_back(n >> i);
        return v;

    }
};
int main()
{
    bitwise b;
    std::vector<int> v = b.getbit(5, 2);
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    return 0;
}