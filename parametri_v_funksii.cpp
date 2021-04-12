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

   
}

int main()
{
    
    int LevelDifficulty = 1;
    
     
    while(true)
    {
        
        bool bLevelComplite = PlayGame(LevelDifficulty); //запись результата завершения игры в переменную да или нет
        std::cin.clear(); //clear all errors
        std::cin.ignore(); //Discard the buffer

        if (bLevelComplite)
        {
            //increased level dificulty
            ++LevelDifficulty;
            
        }
        
    }
    

    return 0;
}
