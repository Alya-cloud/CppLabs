#include "hw.h"

void calculateSquareOfTriangleAndHypotenuse() {
    double a, b;
    std::cout << "Enter the length of the first cathetus: ";
    std::cin >> a;
    std::cout << "Enter the length of the secon cathetus: ";
    std::cin >> b;

    std::cout << "" << std::endl << "Result of task3: " << std::endl;

    double S = (a * b) / 2;
    std::cout << "S = " << S << std::endl;

    double hypotenuse = sqrt(a * a + b * b);
    std::cout << "Hypotenuse = " << hypotenuse << std::endl;
}




 double convertToCartesianX(double radius, double angle) {
        return radius * cos(angle);
 }

  double convertToCartesianY(double radius, double angle) {
        return radius * sin(angle);
  }

void convertFromPolarToCartesian() {
   double radius, angle;

   std::cout << "Enter radius: ";
   std::cin >> radius;

   std::cout << "Enter angle in radians: ";
   std::cin >> angle;

   double cartesianX = convertToCartesianX(radius, angle);
   double cartesianY = convertToCartesianY(radius, angle);

   std::cout << "Cartesian coordinates: (" << cartesianX << ", " << cartesianY << ")" << std::endl;
   
}

void calculateTime() {
    int sec = 0;
    std::cout << "Enter the last second of the day: ";
    std::cin >> sec;
    std::cout << "Number of hours: " << sec / 60 << std::endl << "Number of minutes: " << (sec >= 60 ? sec % 60 : 0) << std::endl;
}

void getIdealWeight() {
	std::cout << "Enter your height: ";
	float height = 0;
	std::cin >> height;

	std::cout << "Enter your weight: ";
	float weight = 0;
	std::cin >> weight;
	if (height - 100 == weight){
		std::cout << "You have an ideal weight" << std::endl;
	}
	else {
		std::cout << (height - 100 < weight ? "Your weight is above average" : "Your weight is below average") << std::endl;
	}
}

void getCurrentDate() {
    std::string months[13] = { "December","January","February","March","April","May","June","July","August","September","October","November","December"};
    std::string seasons[4] = {"Winter","Spring","Summer","Autumn"};
    int num = 0;
    std::cout << "Enter month number: ";
    std::cin >> num;
    std::string name = months[num];
    std::string season = seasons[(num /3 ) %4];
    std::cout << "Month: " << name << std::endl << "Season: " << season << std::endl;

}

void isPalindrome() {
    int num=0;
    int reversed_num = 0;
    int fixed_num = 0;
    std::cout << "Enter a four-digit number: ";
    std::cin >> num;
    fixed_num = num;
    while (num > 0) {
        int remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }
  
    if (fixed_num == reversed_num){
        std::cout << "The number is a palindrome" << std::endl;
    }
    else {
        std::cout << "The number is not a palindrome" << std::endl;
    }
}

void isDividedToSevenAndMoreThanB() {
    int num, b;
    std::cout << "Enter a three-digit number: ";
    std::cin >> num;

    std::cout << "Enter number b: ";
    std::cin >> b;

    int dig1 = num / 100;
    int dig2 = (num / 10)%10;
    int dig3 = num % 10;

    int multiplication = dig1 * dig2 * dig3;
    int sum = dig1 + dig2 + dig3;

    if (multiplication > b) {
        std::cout << "Multiplication more than b"<< std::endl;
    }
    else {
        std::cout << "Multiplication NOT more than b" << std::endl;
    }
    if (sum % 7 == 0) {
        std::cout << "Sum of digits is a multiple of seven" << std::endl;
    }
    else {
        std::cout << "Sum of digits is NOT a multiple of seven" << std::endl;
    }

}


void getOutputOfallTypes() {
    std::cout << "Size of char: " << sizeof(char) << " byte" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << " byte" << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " byte" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " byte" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " byte" << std::endl;
    std::cout << "Size of short: " << sizeof(short) << " byte" << std::endl;
    std::cout << "Size of long: " << sizeof(long) << " byte" << std::endl;
    std::cout << "Size of long long: " << sizeof(long long) << " byte" << std::endl;
}