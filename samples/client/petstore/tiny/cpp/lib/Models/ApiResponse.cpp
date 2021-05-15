

#include "ApiResponse.h"

using namespace Tiny;

ApiResponse::ApiResponse()
{
    __init();
}

ApiResponse::ApiResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

ApiResponse::~ApiResponse()
{
    __cleanup();
}

void
ApiResponse::__init()
{
	code = int(0);
	type = std::string();
	message = std::string();
}

void
ApiResponse::__cleanup()
{
    //if(code != NULL) {
	//
	//delete code;
	//code = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(message != NULL) {
	//
	//delete message;
	//message = NULL;
	//}
	//
}

void
ApiResponse::fromJson(std::string jsonObj)
{   
    bourne::json object = bourne::json::parse(jsonObj);

    const char *codeKey = "code";
    
    if(object.has_key(codeKey)) 
    {
        bourne::json value = object[codeKey];


        
        jsonToValue(&code, value, "int");


    }

    const char *typeKey = "type";
    
    if(object.has_key(typeKey)) 
    {
        bourne::json value = object[typeKey];


        
        jsonToValue(&type, value, "std::string");


    }

    const char *messageKey = "message";
    
    if(object.has_key(messageKey)) 
    {
        bourne::json value = object[messageKey];


        
        jsonToValue(&message, value, "std::string");


    }


}

bourne::json
ApiResponse::toJson()
{
    bourne::json object = bourne::json::object();

    



    object["code"] = getCode();


    



    object["type"] = getType();


    



    object["message"] = getMessage();



    return object;

}

int
ApiResponse::getCode()
{
	return code;
}

void
ApiResponse::setCode(int  code)
{
	this->code = code;
}

std::string
ApiResponse::getType()
{
	return type;
}

void
ApiResponse::setType(std::string  type)
{
	this->type = type;
}

std::string
ApiResponse::getMessage()
{
	return message;
}

void
ApiResponse::setMessage(std::string  message)
{
	this->message = message;
}



