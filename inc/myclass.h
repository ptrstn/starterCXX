#pragma once
#include <string>
#include <optional>

class MyClass {
public:
    MyClass() = default;

    int int_value() const;
    std::optional<float> float_value() const;
    const std::string& string_value() const;

    MyClass& int_value(int value);
    MyClass& float_value(float value);
    MyClass& string_value(const std::string& value);
private:
    int m_int_value = 0;
    std::optional<float> m_float_value;
    std::string m_string_value;
};


