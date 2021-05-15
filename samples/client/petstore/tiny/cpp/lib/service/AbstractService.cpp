#include "AbstractService.h"
#include "Response.h"

using namespace std;
using namespace Tiny;

Response<String> AbstractService::Request(const char * type, String payload){
    std::string url = basepath + ""; //Params :
    // Query    |
    // Headers  |
    // Headers  |
    // Body     |
    HTTPClient http;
    http.begin(String(url.c_str()), test_root_ca); //HTTPS example connection

    // Send Request
    // METHOD   |
    int httpCode = http.GET();
    // Handle Request
    String response_body = http.getString();
    http.end();

    Response<String> response(response_body, httpCode);
    return response;
};
