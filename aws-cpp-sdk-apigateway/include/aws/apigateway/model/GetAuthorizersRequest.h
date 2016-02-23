/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Request to describe an existing <a>Authorizers</a> resource.</p>
   */
  class AWS_APIGATEWAY_API GetAuthorizersRequest : public APIGatewayRequest
  {
  public:
    GetAuthorizersRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizers</a> resource.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizers</a> resource.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizers</a> resource.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizers</a> resource.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizers</a> resource.</p>
     */
    inline GetAuthorizersRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizers</a> resource.</p>
     */
    inline GetAuthorizersRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizers</a> resource.</p>
     */
    inline GetAuthorizersRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    
    inline const Aws::String& GetPosition() const{ return m_position; }

    
    inline void SetPosition(const Aws::String& value) { m_positionHasBeenSet = true; m_position = value; }

    
    inline void SetPosition(Aws::String&& value) { m_positionHasBeenSet = true; m_position = value; }

    
    inline void SetPosition(const char* value) { m_positionHasBeenSet = true; m_position.assign(value); }

    
    inline GetAuthorizersRequest& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    
    inline GetAuthorizersRequest& WithPosition(Aws::String&& value) { SetPosition(value); return *this;}

    
    inline GetAuthorizersRequest& WithPosition(const char* value) { SetPosition(value); return *this;}

    
    inline long GetLimit() const{ return m_limit; }

    
    inline void SetLimit(long value) { m_limitHasBeenSet = true; m_limit = value; }

    
    inline GetAuthorizersRequest& WithLimit(long value) { SetLimit(value); return *this;}

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_position;
    bool m_positionHasBeenSet;
    long m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
