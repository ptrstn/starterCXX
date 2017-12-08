#include "myclass.h"

int MyClass::int_value() const{
    return m_int_value;
}

std::optional<float> MyClass::float_value() const{
    return m_float_value;
}

const std::string& MyClass::string_value() const{
    return m_string_value;
}

MyClass& MyClass::int_value(int value){
    m_int_value = value;
    return *this;
}

MyClass& MyClass::float_value(float value){
    m_float_value = value;
    return *this;
}

MyClass& MyClass::string_value(const std::string& value){
    m_string_value = value;
    return *this;
}