#ifndef _HELPERS_H_
#define _HELPERS_H_

#include <string>
#include "bourne/json.hpp"

using namespace std;

bool isprimitive(string type);

void jsonToValue(void* target, bourne::json value, string type);

std::string stringify(long input);

std::string stringify(int input);

std::string stringify(double input);

std::string stringify(float input);

std::string stringify(std::string input);

#endif /* HELPERS_H_ */

