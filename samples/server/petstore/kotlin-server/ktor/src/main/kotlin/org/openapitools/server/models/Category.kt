/**
* OpenAPI Petstore
* This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
*
* The version of the OpenAPI document: 1.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.models


import java.io.Serializable
/**
 * A category for a pet
 * @param id 
 * @param name 
 */
data class Category(
    val id: kotlin.Long? = null,
    val name: kotlin.String? = null
) : Serializable 
{
    companion object {
        private const val serialVersionUID: Long = 123
    }
}

