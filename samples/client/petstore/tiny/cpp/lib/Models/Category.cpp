

#include "Category.h"

using namespace Tiny;

Category::Category()
{
    __init();
}

Category::Category(std::string jsonString)
{
	this->fromJson(jsonString);
}

Category::~Category()
{
    __cleanup();
}

void
Category::__init()
{
	id = long(0);
	name = std::string();
}

void
Category::__cleanup()
{
    //if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//
}

void
Category::fromJson(std::string jsonObj)
{   
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "id";
    
    if(object.has_key(idKey)) 
    {
        bourne::json value = object[idKey];


        
        jsonToValue(&id, value, "long");


    }

    const char *nameKey = "name";
    
    if(object.has_key(nameKey)) 
    {
        bourne::json value = object[nameKey];


        
        jsonToValue(&name, value, "std::string");


    }


}

bourne::json
Category::toJson()
{
    bourne::json object = bourne::json::object();

    



    object["id"] = getId();


    



    object["name"] = getName();



    return object;

}

long
Category::getId()
{
	return id;
}

void
Category::setId(long  id)
{
	this->id = id;
}

std::string
Category::getName()
{
	return name;
}

void
Category::setName(std::string  name)
{
	this->name = name;
}



