#include <iostream>
#include <ctime>

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
    const int CodeA = rand() % Difficulty + 1;
    const int CodeB = rand() % Difficulty + 1;
    const int CodeC = rand() % Difficulty + 1;

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
        if (Difficulty < 4)
        {
            Difficulty = Difficulty + 1;
            std::cout << "\nYou Win! Your Level is now: " << Difficulty << std::endl;
            std::cout << std::endl;
        }    
        else
        {
            std::cout << "\nYou Win! Your Level is now: " << Difficulty << std::endl;
            std::cout << std::endl;
        }
        return true;
    }

    else
    {
        std::cout << "\nYou Lose! Retrying the level: " << Difficulty << std::endl;
        std::cout << std::endl;

        return false;
    }
}

int main()
{
    
    srand(time(NULL)); // Create new random sequence based on time of day
    int LevelDifficulty = 1;
    const int MaxLevel = 4;
    
     
    while (LevelDifficulty <= MaxLevel) //loop game until all level is complit
    {
        //std::cout << rand() % 2 << "\n"; ?????????? ???????????????????? ???????????????? ???? 0-1
        bool bLevelComplite = PlayGame(LevelDifficulty); //???????????? ???????????????????? ???????????????????? ???????? ?? ???????????????????? ???? ?????? ??????
        std::cin.clear(); //clear all errors
        std::cin.ignore(); //Discard the buffer

        if (bLevelComplite)
        {
           
            ++LevelDifficulty;                      
            
        }
        
    }
    
    std::cout << "\nWell Done The game is over\n";
    return 0;
}
