#include "StarShape.h"

StarShape::StarShape(int points, float innerRadius, float outerRadius) : m_points(points), m_innerRadius(innerRadius), m_outerRadius(outerRadius) {
    update();
}

std::size_t StarShape::getPointCount() const {
    return m_points * 2;
}

sf::Vector2f StarShape::getPoint(std::size_t index) const {
    float radius = (index % 2 == 0) ? m_innerRadius : m_outerRadius;
    float radians = index / (float) getPointCount() * 2.0f * 3.1415926535f;
    return sf::Vector2f(std::cos(radians), std::sin(radians)) * radius;
}