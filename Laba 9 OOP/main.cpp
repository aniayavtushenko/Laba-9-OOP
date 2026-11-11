#include "GeometricShape.h"
#include <Windows.h>

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Створення динамічного об'єкта похідного класу через вказівник на базовий абстрактний клас
    GeometricShape* myShape = new Triangle(0.0, 0.0, 0.0, 5.0, -5.0, -5.0, 5.0, -5.0);

    // Демонстрація роботи методів
    myShape->show();
    myShape->rotate(90.0);
    myShape->move(10.0, 5.0);
    myShape->hide();

    // Звільнення пам'яті
    delete myShape;

    return 0;
}