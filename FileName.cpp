#include <iostream>

float areaOfTraTrapezoid(float b1, float b2, float h) {
	return (b1 + b2) * h / 2;
}

int sumOfDigitsInNumber(int number) {
	int a, b, c, d = 0;
	d = number % 10; //разбиваю число на цифры, чтобы найти сумму
	a = number / 1000;
	c = (number % 100) / 10;
	b = (number / 100) % 10;
	return a + b + c + d;
}

void solutionOfQuadrEquat(float a, float b, float c) {
	float s1, s2 = 0; //инициализируем две переменные для корней
	s1 = ((-b + sqrt(b * b - 4 * a * c)) / (2 * a)); //записываем значение корней
	s2 = ((-b - sqrt(b * b - 4 * a * c)) / (2 * a));
	if ((b * b - 4 * a * c) < 0) //если дискриминант отрицательный, то пишем, что корней нет
		std::cout << "There is no solution" << std::endl << std::endl;
	else
		if (s1 == s2) //если корни равны, то выводим один из них
			std::cout << "There is one solution: " << s1 << std::endl << std::endl;
		else //в противном случае выводим оба
			std::cout << "The solutions are " << s1 << " and " << s2 << std::endl << std::endl;
}

void isIsoscelesTriang(float a, float b, float c){
	if (a == b || b == c || c == a) //сравниваю попарно каждые две стороны, если равны хотя бы одна пара, значит равнобедренный
		std::cout << "The triangle is isosceles";
	else
		std::cout << "The triangle is not isosceles";
}

void isProductCorrect(int a, int b, float user_product) {
	if (user_product == a * b) //сравнивается произведение рандомных цифр и ввёденного пользователем произведения
		std::cout << "User is correct"; //если равно, то пользователь прав
	else
		std::cout << "User is not correct"; //если нет, то не прав
}

void isNumberLucky(long number) {
	int a, b, c, d, e, f; 
	f = number % 10; //число разбивается на цифры
	e = (number % 100) / 10;
	d = (number % 1000) / 100;
	a = number / 100000;
	b = (number / 10000) % 10;
	c = (number / 1000) % 10;

	if (a + b + c == d + e + f) //сравниваются суммы первых трёх цифр и последних трёх
		std::cout << "Number is lucky"; //если равны, то число счастливое
	else
		std::cout << "Number is not lucky"; //если не равно, то не счастливое
}


int main(){
	/*Task 1*/
	std::cout << "Task 1" << std::endl; //я выводила номер задания, чтобы при выводе было понятно какое задание есть какое

	float height, base_1, base_2;

	std::cout << "Enter the first base" << std::endl; //пользователь вводит значения двух оснований и высоты
	std::cin >> base_1;
	std::cout << "Enter the second base" << std::endl;
	std::cin >> base_2;
	std::cout << "Enter the height" << std::endl;
	std::cin >> height;

	std::cout << "The area of given Trapezoid is " << areaOfTraTrapezoid(base_1, base_2, height) << std::endl << std::endl; //я делала по два std::endl, чтобы при выводе всех заданий сразу они были легко различимы



	/*Task 4*/
	std::cout << "Task 4" << std::endl;
	
	int numberFourDigits;

	std::cout << "Enter the four-digit number " << std::endl; //пользователь вводит четырёхзначное число
	std::cin >> numberFourDigits;

	std::cout << "The sum of its digits is " << sumOfDigitsInNumber(numberFourDigits) << std::endl << std::endl;



	/*Task 7*/
	std::cout << "Task 7" << std::endl;

	float first_coeff, second_coeff, third_coeff;

	std::cout << "Enter the first coefficient " << std::endl; //пользователь вводит коэффициенты уравнения
	std::cin >> first_coeff;
	std::cout << "Enter the second coefficient " << std::endl;
	std::cin >> second_coeff;
	std::cout << "Enter the third coefficient " << std::endl;
	std::cin >> third_coeff;

	solutionOfQuadrEquat(first_coeff, second_coeff, third_coeff);



	/*Task 10*/
	std::cout << "Task 10" << std::endl;

	float first_side, second_side, third_side;

	std::cout << "Enter the first side " << std::endl; //пользователь вводит стороны треугольника
	std::cin >> first_side;
	std::cout << "Enter the second side " << std::endl;
	std::cin >> second_side;
	std::cout << "Enter the third side " << std::endl;
	std::cin >> third_side;

	isIsoscelesTriang(first_side, second_side, third_side);
	std::cout << std::endl << std::endl;



	/*Task 13*/
	std::cout << "Task 13" << std::endl;

	srand(time(0));

	int random_number1, random_number2;
	float user_product;

	random_number1 = rand() % 9 + 1; //задаются рандомные значения цифр 
	random_number2 = rand() % 9 + 1;

	std::cout << "The first number is " << random_number1 << ", the second one is " << random_number2 << ". Enter the product" << std::endl;
	std::cin >> user_product; //пользователю показываются значения и просят ввести произведение

	isProductCorrect(random_number1, random_number2, user_product);

	std::cout << std::endl << std::endl;



	/*Task 16*/
	std::cout << "Task 16" << std::endl;

	long lucky_number;

	std::cout << "Enter the six-digit number" << std::endl; //пользователь вводит шестизначное число
	std::cin >> lucky_number;

	isNumberLucky(lucky_number);
}