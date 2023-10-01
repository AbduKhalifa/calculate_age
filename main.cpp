#include <iostream>



int line()
{
    std::cout << "============================================================= \n";
    std::cout << "\n";
    return 0;
}

int welcome()
{
    line();
    std::cout << "=========== we are going to calculate toyr age ============== \n";
    line();
    line();
    return 0;
}

int main()
{
    welcome();
    int hisYear;
    int hisMonth;
    int hisDay;
    std::cout << " Enter Year : ";
    std::cin >> hisYear;
    std::cout << "\n";
    std::cout << " Enter Number Of Month : ";
    std::cin >> hisMonth;
    std::cout << "\n";
    std::cout << " Enter Number Of Day : ";
    std::cin >> hisDay;
    std::cout << "\n";
    line();
    int mainAge = (hisYear * 365) + (hisMonth * 30) + hisDay ;
    std::cout << mainAge << " \n";
    int days =  mainAge ;
    int hours = mainAge * 24 ;
    int mins = mainAge * 24 * 60;

    std::cout << "Day : " << days << "\n";
    std::cout << "Hour : " << hours << "\n";
    std::cout << "Minute : " << mins << "\n";
    line();
    return 0;
}