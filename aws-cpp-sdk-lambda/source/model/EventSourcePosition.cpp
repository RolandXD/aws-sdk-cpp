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
#include <aws/lambda/model/EventSourcePosition.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int TRIM_HORIZON_HASH = HashingUtils::HashString("TRIM_HORIZON");
static const int LATEST_HASH = HashingUtils::HashString("LATEST");

namespace Aws
{
namespace Lambda
{
namespace Model
{
namespace EventSourcePositionMapper
{


EventSourcePosition GetEventSourcePositionForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TRIM_HORIZON_HASH)
  {
     return EventSourcePosition::TRIM_HORIZON;
  }
  else if (hashCode == LATEST_HASH)
  {
     return EventSourcePosition::LATEST;
  }
  return EventSourcePosition::NOT_SET;
}

Aws::String GetNameForEventSourcePosition(EventSourcePosition enumValue)
{
  switch(enumValue)
  {
  case EventSourcePosition::TRIM_HORIZON:
    return "TRIM_HORIZON";
  case EventSourcePosition::LATEST:
    return "LATEST";
  default:
    return "";
  }
}

} // namespace EventSourcePositionMapper
} // namespace Model
} // namespace Lambda
} // namespace Aws
