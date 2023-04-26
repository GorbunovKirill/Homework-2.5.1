#include <iostream>
#include <windows.h>

class basic{
protected:
	
	int sides;
	std::string name;
public:

	basic() { sides = 0; name = "Фигура: ";}

	int get_sides() {
		return sides;
	}
	std::string get_name() {
		return name;
	}
};

class triangle :public basic {

public:
	triangle() { sides = 3; name = "Треугольник: "; }

	
};

class quadrangle : public basic {
public:
	quadrangle() { sides = 4; name = "Четырёхугольник: ";}
	
};

void print_figure(basic print) {
	std::cout<<print.get_name();
	std::cout << print.get_sides() << std::endl;

}

int main() {
	setlocale(LC_ALL, "Russian");

	basic one;
	triangle two;
	quadrangle three;

	std::cout << "Количество сторон:" << std::endl;
	print_figure(one);
	print_figure(two);
	print_figure(three);


	return 0;
}

