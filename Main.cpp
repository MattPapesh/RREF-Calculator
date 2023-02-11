#include <stdlib.h>
#include <stdio.h>
#include <memory>
#include "include/Fraction.h"
#include "include/FractionalMath.h"
#include "include/Matrix.h"

int main()
{
    int number = 10; 
    std::vector<int> multiples = FractionalMath::getMultiples(10);

    printf("{ ");
    for(int i = 0; i < multiples.size(); i++)
    {
        if(i < multiples.size() - 1)
        {
            printf("%d, ", multiples.at(i));
        }
        else
        { 
            printf("%d }", multiples.at(i));
        }
    }

    return 0;
}