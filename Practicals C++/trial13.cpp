/*Write the definition of a class, SwimmingPool, to implement the properties of a swimming pool.
Your class should have the instance variables to store the length (in feet), width (in feet),
depth (in feet), the rate (in gallons per minute) at which the water is filling the pool,
and  the  rate  (in  gallons  per  minute)  at  which  the  water  is  draining  from  the  pool.
Add appropriate constructors to initialize the instance variables. Also add member functions to do
the following: determine the amount of water needed to fill an empty or partially filled pool;
determine the time needed to completely or partially fill or empty the pool; add or drain water
for a specific amount of time.*/
#include <iostream>
using namespace std;
class swimmingPool
{
public:
    void getPoolData(int, int, int);
    int getAmountOfWater();
    double getTime();
    double incrementWater(double time);
    double decrementWater(double time);
    int poolCapacity();
    swimmingPool();
    swimmingPool(int l, int w, int d, int rateFill, int rateDrain);

private:
    int length;
    int width;
    int depth;
    int rateToFill;
    int rateToDrain;
};

swimmingPool::swimmingPool()
{
    length = 0;
    width = 0;
    depth = 0;
    rateToFill = 0;
    rateToDrain = 0;
}

swimmingPool::swimmingPool(int l, int w, int d, int rateFill, int rateDrain)
{
    length = l;
    width = w;
    depth = d;
    rateToFill = rateFill;
    rateToDrain = rateDrain;
}

//If function do not return any value then return type should be void
void swimmingPool::getPoolData(int l, int w, int d)
{
    length = l;
    width = w;
    depth = d;

    cout << "length: " << l << endl;
    cout << "width: " << w << endl;
    cout << "depth: " << d << endl;
}

int swimmingPool::getAmountOfWater()
{
    return (length * width * depth);
}

double swimmingPool::getTime()
{
    return getAmountOfWater() / rateToFill; //This value is double not int. if you convert double to int data maybe loss
}

double swimmingPool::incrementWater(double time)
{
    return rateToFill * time; //This value is double not int. if you convert double to int data maybe loss
}

double swimmingPool::decrementWater(double time)
{
    return rateToDrain * time; //This value is double not int. if you convert double to int data maybe loss
}


int main()
{
    swimmingPool mySwimmingPool;
    //You don't need this variables
    //int length, width, depth, rateToFill, rateToDrain;

    cout << "Pool Data: " << endl;
    mySwimmingPool.getPoolData(5, 12,6);
    return 0;
}
