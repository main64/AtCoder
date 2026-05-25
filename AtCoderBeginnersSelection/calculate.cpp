#include "calculate.h"


void Calculate::setNumber1(int num){
    m_number1=num;
}
void Calculate::setNumber2(int num){
    m_number2=num;
}
int Calculate::getNumber1(){
    return m_number1;
}
int Calculate::getNumber2(){
    return m_number2;

}
int Calculate::add(){
    return m_number1+m_number2;
}

int Calculate::sub(){
    return m_number1-m_number2;
}