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
#include <aws/gamelift/model/IpProtocol.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int TCP_HASH = HashingUtils::HashString("TCP");
static const int UDP_HASH = HashingUtils::HashString("UDP");

namespace Aws
{
namespace GameLift
{
namespace Model
{
namespace IpProtocolMapper
{


IpProtocol GetIpProtocolForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TCP_HASH)
  {
     return IpProtocol::TCP;
  }
  else if (hashCode == UDP_HASH)
  {
     return IpProtocol::UDP;
  }
  return IpProtocol::NOT_SET;
}

Aws::String GetNameForIpProtocol(IpProtocol enumValue)
{
  switch(enumValue)
  {
  case IpProtocol::TCP:
    return "TCP";
  case IpProtocol::UDP:
    return "UDP";
  default:
    return "";
  }
}

} // namespace IpProtocolMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
