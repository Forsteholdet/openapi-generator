
/*
 * Tag.h
 *
 * A tag for a pet
 */

#ifndef _Tag_H_
#define _Tag_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A tag for a pet
 *
 *  \ingroup Models
 *
 */

class Tag{
public:

    /*! \brief Constructor.
	 */
    Tag();
    Tag(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Tag();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	long getId();

	/*! \brief Set 
	 */
	void setId(long  id);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);


    private:
	long id;
	std::string name;
    void __init();
    void __cleanup();
};
}

#endif /* _Tag_H_ */