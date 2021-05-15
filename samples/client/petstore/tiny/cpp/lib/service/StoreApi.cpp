#include "StoreApi.h"

using namespace std;
using namespace Tiny;


    StoreApi::StoreApi()
    {

    }

    StoreApi::~StoreApi()
    {

    }

        Response<
            String
        >
        StoreApi::
        deleteOrder(
            
            std::string orderId
            
        )
        {
            std::string url = basepath + "/store/order/{orderId}"; //orderId 
            // Query    | 
            // Headers  | 
            // Form  | 
            // Body     | 

                string s_orderId("{");
                s_orderId.append("orderId");
                s_orderId.append("}");

                int pos = url.find(s_orderId);

                url.erase(pos, s_orderId.length());
                url.insert(pos, stringify(orderId)); //stringify(&orderId, "std::string"));

            HTTPClient http;
            http.begin(String(url.c_str()), test_root_ca); //HTTPS example connection

            std::string payload = "";
            // Send Request
            // METHOD | POST
            int httpCode = http.sendRequest("POST", (uint8_t *) payload.c_str(), payload.length());

            // Handle Request
            String output = http.getString();
            std::string output_string = output.c_str();        

            http.end();

        // --------------- MINE STARTS HERE ---------------


        // --------------- MINE ENDS HERE ---------------

            
            Response<String> response(output, httpCode);
            return response;
        }

        Response<
            String
        >
        StoreApi::
        getInventory(
        )
        {
            std::string url = basepath + "/store/inventory"; //
            // Query    | 
            // Headers  | 
            // Form  | 
            // Body     | 


            HTTPClient http;
            http.begin(String(url.c_str()), test_root_ca); //HTTPS example connection

            std::string payload = "";
            // Send Request
            // METHOD | GET
            int httpCode = http.sendRequest("GET", (uint8_t *) payload.c_str(), payload.length());

            // Handle Request
            String output = http.getString();
            std::string output_string = output.c_str();        

            http.end();

        // --------------- MINE STARTS HERE ---------------



            //TODO: Implement map logic here




        // --------------- MINE ENDS HERE ---------------

            
            //TODO: No support for maps.
            Response<String> response(output, httpCode);
            return response;
        }

        Response<
            Order
        >
        StoreApi::
        getOrderById(
            
            long orderId
            
        )
        {
            std::string url = basepath + "/store/order/{orderId}"; //orderId 
            // Query    | 
            // Headers  | 
            // Form  | 
            // Body     | 

                string s_orderId("{");
                s_orderId.append("orderId");
                s_orderId.append("}");

                int pos = url.find(s_orderId);

                url.erase(pos, s_orderId.length());
                url.insert(pos, stringify(orderId)); //stringify(&orderId, "long"));

            HTTPClient http;
            http.begin(String(url.c_str()), test_root_ca); //HTTPS example connection

            std::string payload = "";
            // Send Request
            // METHOD | GET
            int httpCode = http.sendRequest("GET", (uint8_t *) payload.c_str(), payload.length());

            // Handle Request
            String output = http.getString();
            std::string output_string = output.c_str();        

            http.end();

        // --------------- MINE STARTS HERE ---------------




            Order obj(output_string);


        // --------------- MINE ENDS HERE ---------------

            
            Response<Order> response(obj, httpCode);
            return response;
        }

        Response<
            Order
        >
        StoreApi::
        placeOrder(
            
            Order order
            
        )
        {
            std::string url = basepath + "/store/order"; //
            // Query    | 
            // Headers  | 
            // Form  | 
            // Body     | order


            HTTPClient http;
            http.begin(String(url.c_str()), test_root_ca); //HTTPS example connection

            std::string payload = "";
            // Send Request
            // METHOD | POST
            


            payload = order.toJson().dump();

            int httpCode = http.sendRequest("POST", (uint8_t *) payload.c_str(), payload.length());

            // Handle Request
            String output = http.getString();
            std::string output_string = output.c_str();        

            http.end();

        // --------------- MINE STARTS HERE ---------------




            Order obj(output_string);


        // --------------- MINE ENDS HERE ---------------

            
            Response<Order> response(obj, httpCode);
            return response;
        }




