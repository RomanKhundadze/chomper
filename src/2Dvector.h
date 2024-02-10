class vector2 {
private:
public:
    float x = 0;
    float y = 0;

    vector2();
    vector2(float x, float y);

    vector2 operator+(const vector2 &vector) const;
    vector2 operator-(const vector2 &vector) const;
    vector2 operator*(const float value) const;
    vector2 operator/(const float value) const;

    void operator+=(const vector2 &vector);
    void operator-=(const vector2 &vector);
    void operator*=(const float value);
    void operator/=(const float value);

    bool operator==(const vector2 &vector) const;
    bool operator!=(const vector2 &vector) const;

    float dist(const vector2 &vector) const;
    float magnitude() const;

    vector2 normalize(const vector2 &vector) const;
};
