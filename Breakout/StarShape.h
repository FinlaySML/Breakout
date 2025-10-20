#pragma once
#include <SFML/Graphics/Shape.hpp>
#include <cmath>

// Outline from https://www.sfml-dev.org/tutorials/3.0/graphics/shape/#custom-shape-types
// But that was for an ellipse, so I had to adapt it to make a star

class StarShape : public sf::Shape {
public:
    explicit StarShape(int points, float innerRadius, float outerRadius);
    std::size_t getPointCount() const override;
    sf::Vector2f getPoint(std::size_t index) const override;
private:
    int m_points;
    float m_innerRadius;
    float m_outerRadius;
};