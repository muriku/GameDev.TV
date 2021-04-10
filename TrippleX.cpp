#include <iostream>

void Introduction(int Difficulty)
{
    std::cout << "\nLevel:" << Difficulty << std::endl;
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code make your choice" << std::endl;
    
}

bool PlayGame(int Difficulty)
{
    Introduction(Difficulty);

    // Declare 3 number bLevelComplite code
    int CodeA = 1;
    int CodeB = 1;
    int CodeC = 1;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;

    std::cout << "\nEnter CodeA: "; //<< std::endl;
    std::cin >> GuessA;
    std::cout << "Enter CodeB: "; //<< std::endl;
    std::cin >> GuessB;
    std::cout << "Enter CodeC: "; //<< std::endl;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    std::cout << std::endl;
    std::cout << "You entered:" << GuessA << GuessB << GuessC << std::endl;
    std::cout << "GuessSum:" << GuessSum << std::endl;
    std::cout << "GuessProduct:" << GuessProduct << std::endl;

    if (GuessProduct == CodeProduct && GuessSum == CodeSum)
    {
        Difficulty = Difficulty + 1;
        std::cout << "\nYou Win! Your Level is now: " << Difficulty << std::endl;
        std::cout << std::endl;
        
        return true;
    }

    else
    {
        std::cout << "\nYou Lose! Your Level is the same: " << Difficulty << std::endl;
        std::cout << std::endl;

        return false;
    }
}

int main()
{
    
    int LevelDifficulty = 1;
    
     
    while(true)
    {
        
        bool bLevelComplite = PlayGame(LevelDifficulty); //запись результата завершения игры в переменную да или нет
        std::cin.clear(); //clear all errors
        std::cin.ignore(); //Discard the buffer

        if (bLevelComplite == true)
        {
            //increased level dificulty
            ++LevelDifficulty;
            
        }
        
    }
    

    return 0;
}
