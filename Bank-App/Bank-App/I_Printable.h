#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>

class I_Printable {
	friend std::ostream& operator<<(std::ostream& os, const I_Printable& obj);
public:
	virtual void print(std::ostream& os) const = 0;
};

#endif