/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * ApiException.h
 * 
 * This is the exception being thrown in case the api call was not successful
 */

#ifndef ApiException_H_
#define ApiException_H_



#include <memory> 
#include <map>

#include <cpprest/details/basic_types.h>
#include <cpprest/http_msg.h>


namespace io {
namespace swagger {
namespace client {
namespace api {

class  ApiException
    : public web::http::http_exception
{
public:
    ApiException( int errorCode
        , const utility::string_t& message
        , std::shared_ptr<std::istream> content = nullptr );
    ApiException( int errorCode
        , const utility::string_t& message
        , std::map<utility::string_t, utility::string_t>& headers
        , std::shared_ptr<std::istream> content = nullptr );
    virtual ~ApiException();
    
    std::map<utility::string_t, utility::string_t>& getHeaders();
    std::shared_ptr<std::istream> getContent() const;
        
protected:
    std::shared_ptr<std::istream> m_Content;    
    std::map<utility::string_t, utility::string_t> m_Headers;
};

}
}
}
}

#endif /* ApiBase_H_ */
