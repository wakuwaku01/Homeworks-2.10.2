#include <iostream>
#include "triangle.h"


Triangle::Triangle(int sides, int side_a, int side_b, int side_c, int angle_A,
    int angle_B, int angle_C)
    : Figure::Figure(0) {
    this->sides = sides;
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_c;
    this->angle_A = angle_A;
    this->angle_B = angle_B;
    this->angle_C = angle_C;
}

bool Triangle::check() {
    if ((sides == 3) && (angle_A + angle_B + angle_C == 180))
        return true;
    else
        return false;
}

void Triangle::print_name() { std::cout << name << std::endl; }

void Triangle::print_sides() {
    std::cout << "���������� ������: " << sides << std::endl;
    std::cout << "�������: "
        << "a=" << side_a << " "
        << "b=" << side_b << " "
        << "c=" << side_c << " " << std::endl;
}

void Triangle::print_angles() {
    std::cout << "����: "
        << "A=" << angle_A << " "
        << "B=" << angle_B << " "
        << "C=" << angle_C << " " << std::endl;
}
