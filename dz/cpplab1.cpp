#include <iostream>
#include <cmath>
#include <fstream>
//Georgii Davydov 22Bi-2//
void DlinaOkruzhnostiAndPloshadKruga() {
    double r;
    std::cin >> r;
    const double PI = 3.14159265358979323846;
    double circumference = 2 * PI * r;
    double area = PI * pow(r, 2);
    std::cout << "Circumference: " << circumference << "\nArea: " << area << std::endl;
}

void DekartToPolar() {
    double x, y;
    std::cin >> x >> y;
    double r = sqrt(pow(x, 2) + pow(y, 2));
    double theta = atan2(y, x);
    std::cout << "r: " << r << "\nTheta: " << theta << std::endl;
}

void MedianiTreugolnika() {
    double a, b, c;
    std::cin >> a >> b >> c;
    double m1 = 0.5 * sqrt(2 * pow(b, 2) + 2 * pow(c, 2) - pow(a, 2));
    double m2 = 0.5 * sqrt(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2));
    double m3 = 0.5 * sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2));
    std::cout << "Medians: " << m1 << ", " << m2 << ", " << m3 << std::endl;
}

void StoimostPokupki() {
    double total;
    std::cin >> total;
    double discount = (total > 1000) ? total * 0.1 : 0;
    double finalTotal = total - discount;
    std::cout << "Final Total: " << finalTotal << std::endl;
}

void StoimostPeregovorov() {
    double duration;
    int dayOfWeek;
    std::cin >> duration >> dayOfWeek;
    double costPerMinute = 1.0;
    double discount = (dayOfWeek == 6 || dayOfWeek == 7) ? 0.2 : 0;
    double totalCost = duration * costPerMinute * (1 - discount);
    std::cout << "Total Cost: " << totalCost << std::endl;
}

void Kopeyka() {
    int coins;
    std::cin >> coins;
    std::string word = (coins % 10 == 1 && coins % 100 != 11) ? "kopeek" : (coins % 10 >= 2 && coins % 10 <= 4 && (coins % 100 < 10 || coins % 100 >= 20)) ? "kopeyki" : "kopeek";
    std::cout << coins << " " << word << std::endl;
}

void PramougolnikVmestitPramougolnik() {
    double a, b, c, d;
    std::cin >> a >> b >> c >> d;
    if ((a <= c && b <= d) || (a <= d && b <= c)) {
        std::cout << "The rectangle can fit." << std::endl;
    } else {
        std::cout << "The rectangle cannot fit." << std::endl;
    }
}

int main() {
    std::ofstream out("output.txt");
    std::streambuf *coutbuf = std::cout.rdbuf(); 
    std::cout.rdbuf(out.rdbuf()); 
    //Task 2//
    std::cout << "Result of task 2: "  << std::endl;
    DlinaOkruzhnostiAndPloshadKruga();    
    std::cout<< std::endl;
    //Task 5//
    std::cout << "Result of task 5: "  << std::endl;
    DekartToPolar();    
    std::cout<< std::endl;
    //Task 8//
    std::cout << "Result of task 8: "  << std::endl;
    MedianiTreugolnika();    
    std::cout<< std::endl;
    //Task 11//
    std::cout << "Result of task 11: "  << std::endl;
    StoimostPokupki();    
    std::cout<< std::endl;
    //Task 14//
    std::cout << "Result of task 14: "  << std::endl;
    StoimostPeregovorov();    
    std::cout<< std::endl;
    //Task 17//
    std::cout << "Result of task 17: "  << std::endl;
    Kopeyka();    
    std::cout<< std::endl;
    //Task 20//
    std::cout << "Result of task 20: "  << std::endl;
    PramougolnikVmestitPramougolnik();    
    std::cout<< std::endl;
    std::cout.rdbuf(coutbuf); 
    return 0;
}