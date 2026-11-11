#include "GeometricShape.h"

// Конструктор базового класу
GeometricShape::GeometricShape(double centerX, double centerY, double rotAngle, double scFactor)
    : x(centerX), y(centerY), angle(rotAngle), scale(scFactor) {
}

// Конструктор похідного класу "Трикутник"
Triangle::Triangle(double cx, double cy, double vx1, double vy1, double vx2, double vy2, double vx3, double vy3, double rotAngle, double scFactor)
    : GeometricShape(cx, cy, rotAngle, scFactor), x1(vx1), y1(vy1), x2(vx2), y2(vy2), x3(vx3), y3(vy3) {
}

void Triangle::show() {
    std::cout << "Трикутник відображено на екрані.\n"
        << "Центр: (" << x << ", " << y << ")\n"
        << "Вершини: 1:(" << x1 << ", " << y1 << "), 2:(" << x2 << ", " << y2
        << "), 3:(" << x3 << ", " << y3 << ")\n"
        << "Кут: " << angle << " град, Масштаб: " << scale << "\n" << std::endl;
}

void Triangle::hide() {
    std::cout << "Трикутник приховано (зображення знищено з екрана).\n" << std::endl;
}

void Triangle::rotate(double degrees) {
    angle += degrees;
    // Нормалізація кута в межах 0-360
    if (angle >= 360.0) angle -= 360.0;
    if (angle < 0.0) angle += 360.0;
    std::cout << "Трикутник повернуто на " << degrees << " град. Поточний кут: " << angle << " град.\n" << std::endl;
}

void Triangle::move(double dx, double dy) {
    // Зсув центру та всіх вершин на заданий вектор
    x += dx; y += dy;
    x1 += dx; y1 += dy;
    x2 += dx; y2 += dy;
    x3 += dx; y3 += dy;
    std::cout << "Трикутник пересунуто на вектор (" << dx << ", " << dy << ").\n"
        << "Новий центр: (" << x << ", " << y << ").\n"
        << "Нові координати вершин: 1:(" << x1 << ", " << y1 << "), 2:("
        << x2 << ", " << y2 << "), 3:(" << x3 << ", " << y3 << ").\n" << std::endl;
}