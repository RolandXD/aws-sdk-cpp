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
namespace APIGateway
{
namespace Model
{

  /**
   */
  class AWS_APIGATEWAY_API DeleteClientCertificateRequest : public APIGatewayRequest
  {
  public:
    DeleteClientCertificateRequest();
    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetClientCertificateId() const{ return m_clientCertificateId; }

    
    inline void SetClientCertificateId(const Aws::String& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = value; }

    
    inline void SetClientCertificateId(Aws::String&& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = value; }

    
    inline void SetClientCertificateId(const char* value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId.assign(value); }

    
    inline DeleteClientCertificateRequest& WithClientCertificateId(const Aws::String& value) { SetClientCertificateId(value); return *this;}

    
    inline DeleteClientCertificateRequest& WithClientCertificateId(Aws::String&& value) { SetClientCertificateId(value); return *this;}

    
    inline DeleteClientCertificateRequest& WithClientCertificateId(const char* value) { SetClientCertificateId(value); return *this;}

  private:
    Aws::String m_clientCertificateId;
    bool m_clientCertificateIdHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
