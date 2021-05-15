#include "Helpers.h"
#include <string>
#include <sstream>

bool isprimitive(string type){
	if(type.compare("std::string") == 0||
		type.compare("int") == 0||
		type.compare("long") == 0||
		type.compare("double") == 0||
		type.compare("float") == 0||
		type.compare("bool") == 0||
		type.compare("std::map") == 0||
		type.compare("std::list") == 0) 
    {
		return true;
	}
	return false;
}


void
jsonToValue(void* target, bourne::json value, string type)
{
	if (target == NULL || value.is_null()) {
		return;
	} 
    
    else if (type.compare("bool") == 0) 
    {
		bool* val = static_cast<bool*> (target);
		*val = value.to_bool();
	} 
    
    else if (type.compare("int") == 0) 
    {
		int* val = static_cast<int*> (target);
		*val = value.to_int();
	} 
    
    else if (type.compare("float") == 0) 
    {
		float* val = static_cast<float*> (target);
		*val = (float)(value.to_float());
	} 

    else if (type.compare("long") == 0)
    {
        long* val = static_cast<long*> (target);
		*val = (long)(value.to_int());
    } 
    
    else if (type.compare("double") == 0) 
    {
		double* val = static_cast<double*> (target);
		*val = value.to_float();
	} 
    
    else if (type.compare("std::string") == 0) 
    {
		string* val = static_cast<string*> (target);
		*val = value.to_string();
    }
	else {
		return;
	}
}

std::string
stringify(long input){
    std::stringstream stream;
    stream << input;
    return stream.str();

};

std::string
stringify(int input){
    std::stringstream stream;
    stream << input;
    return stream.str();
};

std::string
stringify(double input){
    std::stringstream stream;
    stream << input;
    return stream.str();
};

std::string
stringify(float input){
    std::stringstream stream;
    stream << input;
    return stream.str();
};

std::string
stringify(std::string input){
    std::stringstream stream;
    stream << input;
    return stream.str();
};
