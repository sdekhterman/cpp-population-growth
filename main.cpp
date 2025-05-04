#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    float populationLimit  = 100.0;
    float population       =   0.0;
    float time             =   1.0;
    float growthRate       =   0.1;
    while (true)
    {   
        cout << "Time: " << time << " and population: " << population << endl;
        cout << "Press enter to advance time." << endl;
        cin.ignore();
        population = log1p(time * growthRate) * populationLimit;
        population = (fmod(population, 1.0) > 0.5) ? ceil(population) : population = floor(population);
        if (populationLimit < population)
        {
            population = populationLimit;
        }
        
        time++;
    }
    return 0;
}
