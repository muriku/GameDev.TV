#include <iostream>

int main()
{
     std::cout << "english not working" << std::endl;
    // Declare 3 number code
    const int CodeA = 2;
    const int CodeB = 4;
    const int CodeC = 9;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;
    
    
    // Print CodeSum and CodeProduct to the terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;
 
    int GuessA, GuessB, GuessC;
    int GuessSum, GuessProduct;
    GuessSum = GuessA + GuessB + GuessC;
    GuessProduct = GuessA * GuessB * GuessC;

    std::cout << "Enter CodeA: "; //<< std::endl;
    std::cin >> GuessA;
    std::cout << "Enter CodeB: "; //<< std::endl;
    std::cin >> GuessB;
    std::cout << "Enter CodeC: "; //<< std::endl;
    std::cin >> GuessC;
    std::cout << std::endl;
    std::cout << "You entered:" << GuessA << GuessB << GuessC << std::endl;
    
    return 0;
}
