#include <iostream>

#define MODE 1
#ifndef MODE
#error dont have Mode
#endif
#if MODE == 0
#define str  std::cout << "Работаю в режиме тренировки\n";
#elif MODE == 1
#define str std::cout << "Работаю в боевом режиме \n";
void add(){
    std::cout << "Введите а: ";
    int a;
    std::cin >> a;
    std::cout << std::endl;
    std::cout << "Введите b: ";
    int b;
    std::cin >> b;
    std::cout << std::endl;
    

std::cout << a + b;}
#else
#define str std::cout << "Работаю в неизвестном режиме \n";
#endif


int main()
{
    str
#if MODE == 1
        add();
#endif

   
}

