#include <iostream>
#include <math.h>
#include "LinkedList.h"

using namespace std;
// int main()
// {
//     double populationLimit  = 100.0;
//     double population       =   0.0;
//     double time             =   1.0;
//     double growthRate       =   0.1;
//     while (true)
//     {   
//         cout << "Time: " << time << " and population: " << population << endl;
//         cout << "Press enter to advance time." << endl;
//         cin.ignore();
//         population = log1p(time * growthRate) * populationLimit;
//         population = (fmod(population, 1.0) > 0.5) ? ceil(population) : population = floor(population);
//         if (populationLimit < population)
//         {
//             population = populationLimit;
//         }
        
//         time++;
//     }
//     return 0;
// }


int main() {
    LinkedList list;
    list.append(0);
    list.append(1);
    list.append(2);
    list.printList(); // Output: 0 1 2
    list.deleteNode(1);
    list.printList(); // Output: 0 2
    return 0;
}