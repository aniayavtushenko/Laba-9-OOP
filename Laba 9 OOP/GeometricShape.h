#pragma once
#ifndef GEOMETRIC_SHAPE_H
#define GEOMETRIC_SHAPE_H

#include <iostream>

// Абстрактний базовий клас
class GeometricShape {
protected:
    double x, y;       // Координати центра фігури
    double angle;      // Кут повороту (у градусах)
    double scale;      // Масштабний фактор

public:
    GeometricShape(double centerX = 0.0, double centerY = 0.0, double rotAngle = 0.0, double scFactor = 1.0);
    virtual ~GeometricShape() = default;

    virtual void show() = 0;
    virtual void hide() = 0;
    virtual void rotate(double degrees) = 0;
    virtual void move(double dx, double dy) = 0;
};

// Похідний клас для фігури "Трикутник"
class Triangle : public GeometricShape {
private:
    double x1, y1;
    double x2, y2;
    double x3, y3;

public:
    Triangle(double cx, double cy, double vx1, double vy1, double vx2, double vy2, double vx3, double vy3, double rotAngle = 0.0, double scFactor = 1.0);

    void show() override;
    void hide() override;
    void rotate(double degrees) override;
    void move(double dx, double dy) override;
};
#endif