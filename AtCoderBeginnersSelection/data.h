#ifndef _CDATA_H_
#define _CDATA_H_

#include <iostream>
#include <string>

using namespace std;

class CData{
    private:
    int number;
    string comment;
    public:
    void init();
    void setNumber(int n);
    int getNumber();
    void setComment(string s);
    string getComment();
};


#endif