#include <iostream>

int main() {
    
    //Type conversion = conversion a value of one data type to another
    //              Implicit = automatic
    //              Explicit = Precede value with new data type (int)


    double x = (int) 3.14;

    std::cout << x << std::endl;



    char y = 100;

    std::cout << (char) y << std::endl;


    int correct = 8;
    int question = 10;
    double score = correct / (double) question * 100;

    std::cout << score << "%";






    return 0;
}