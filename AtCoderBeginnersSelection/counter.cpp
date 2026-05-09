#include "counter.h"

int Counter::m_totalCount=0;

Counter::Counter():m_count(0){

}

void Counter::reset(){
    m_totalCount-=m_count;
    m_count=0;
}

void Counter::count(){
    m_totalCount++;
    m_count++;
}

void Counter::count(int n){
    m_totalCount+=n;
    m_count+=n;
}

int Counter::getCount(){
    return m_count;
}

int Counter::GetTotalCount(){
    return m_totalCount;
}
