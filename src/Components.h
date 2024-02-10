#include "2Dvector.h"
class Transform {
private:
public:
    vector2 position = {0, 0};
    vector2 velocity = {0, 0};
    float rotation = 0;

    Transform(const vector2 &position, const vector2 &velocity,
              const float rotation)
        : position(position), velocity(velocity), rotation(rotation) {}
};

class CircleCollider {
    float radius;
};
