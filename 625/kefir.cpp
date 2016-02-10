#include <iostream>

long long calcBottles(long long rubels, long long a, long long b, long long c)
{
    long long glassCost = b - c;
    long long plasticCost = a;
    long long maxPlastic = rubels / a;
    if (b > rubels)
    {
        return maxPlastic;
    }
    if (a < b - c)
    {
        return maxPlastic;
    }
    

    //std::cout << "Glass:" << glassCost << "Plastic:" << plasticCost << std::endl;
    long long  numGlass = ((rubels - b) / glassCost);
    long long  spentMoney = numGlass * glassCost + b;
    long long  moneyLeft = rubels - spentMoney + c;
    long long  numPlastic = moneyLeft / a;
    




    return numPlastic + numGlass + 1;

}
int main()
{
    long long rubels, a, b, c;
    std::cin >> rubels >> a>> b>> c;
    long long numBottles = calcBottles(rubels, a,b,c);




    std::cout << numBottles << std::endl;
}
