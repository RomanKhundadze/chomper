#include "2Dvector.h"
#include <math.h>

vector2::vector2() {}
vector2::vector2(float x, float y) : x(x), y(y) {}

vector2 vector2::operator+(const vector2 &vector) const {
    return vector2(x + vector.x, y + vector.y);
}
vector2 vector2::operator-(const vector2 &vector) const {
    return vector2(x - vector.x, y - vector.y);
}
vector2 vector2::operator*(const float value) const {
    return vector2(x * value, y * value);
}
vector2 vector2::operator/(const float value) const {
    return vector2(x / value, y / value);
}

bool vector2::operator==(const vector2 &vector) const {
    return (x == vector.x) && (y == vector.y);
}
bool vector2::operator!=(const vector2 &vector) const {
    return (x != vector.x) || (y != vector.y);
}

float vector2::magnitude() const { return sqrt((x * x) + (y * y)); }
float vector2::dist(const vector2 &vector) const {
    return (*this - vector).magnitude();
}

vector2 vector2::normalize(const vector2 &vector) const {
    vector2 normalizedvector = vector2();
    float mag = vector.magnitude();
    if (mag != 0) {
        normalizedvector.x = vector.x / mag;
        normalizedvector.y = vector.y / mag;
    }
    return normalizedvector;
}
