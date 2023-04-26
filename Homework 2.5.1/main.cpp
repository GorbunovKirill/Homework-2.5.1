#include <iostream>
#include <windows.h>

class basic{
protected:
	
	int sides;
	std::string name;
public:

	basic() { sides = 0; name = "������: ";}

	int get_sides() {
		return sides;
	}
	std::string get_name() {
		return name;
	}
};

class triangle :public basic {

public:
	triangle() { sides = 3; name = "�����������: "; }

	
};

class quadrangle : public basic {
public:
	quadrangle() { sides = 4; name = "��������������: ";}
	
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

	std::cout << "���������� ������:" << std::endl;
	print_figure(one);
	print_figure(two);
	print_figure(three);


	return 0;
}

