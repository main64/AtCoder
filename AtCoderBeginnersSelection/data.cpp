#include "data.h"

void CData::init(){
    number=0;
    comment="";
}

void CData::setNumber(int n){
    number=n;
}

int CData::getNumber(){
    return number;
}

void CData::setComment(string s){
    comment=s;
}

string CData::getComment(){
    return comment;
}