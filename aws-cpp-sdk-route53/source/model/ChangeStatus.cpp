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
#include <aws/route53/model/ChangeStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int INSYNC_HASH = HashingUtils::HashString("INSYNC");

namespace Aws
{
namespace Route53
{
namespace Model
{
namespace ChangeStatusMapper
{


ChangeStatus GetChangeStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH)
  {
     return ChangeStatus::PENDING;
  }
  else if (hashCode == INSYNC_HASH)
  {
     return ChangeStatus::INSYNC;
  }
  return ChangeStatus::NOT_SET;
}

Aws::String GetNameForChangeStatus(ChangeStatus enumValue)
{
  switch(enumValue)
  {
  case ChangeStatus::PENDING:
    return "PENDING";
  case ChangeStatus::INSYNC:
    return "INSYNC";
  default:
    return "";
  }
}

} // namespace ChangeStatusMapper
} // namespace Model
} // namespace Route53
} // namespace Aws
