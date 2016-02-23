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
#include <aws/route53domains/model/ContactType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int PERSON_HASH = HashingUtils::HashString("PERSON");
static const int COMPANY_HASH = HashingUtils::HashString("COMPANY");
static const int ASSOCIATION_HASH = HashingUtils::HashString("ASSOCIATION");
static const int PUBLIC_BODY_HASH = HashingUtils::HashString("PUBLIC_BODY");
static const int RESELLER_HASH = HashingUtils::HashString("RESELLER");

namespace Aws
{
namespace Route53Domains
{
namespace Model
{
namespace ContactTypeMapper
{


ContactType GetContactTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PERSON_HASH)
  {
     return ContactType::PERSON;
  }
  else if (hashCode == COMPANY_HASH)
  {
     return ContactType::COMPANY;
  }
  else if (hashCode == ASSOCIATION_HASH)
  {
     return ContactType::ASSOCIATION;
  }
  else if (hashCode == PUBLIC_BODY_HASH)
  {
     return ContactType::PUBLIC_BODY;
  }
  else if (hashCode == RESELLER_HASH)
  {
     return ContactType::RESELLER;
  }
  return ContactType::NOT_SET;
}

Aws::String GetNameForContactType(ContactType enumValue)
{
  switch(enumValue)
  {
  case ContactType::PERSON:
    return "PERSON";
  case ContactType::COMPANY:
    return "COMPANY";
  case ContactType::ASSOCIATION:
    return "ASSOCIATION";
  case ContactType::PUBLIC_BODY:
    return "PUBLIC_BODY";
  case ContactType::RESELLER:
    return "RESELLER";
  default:
    return "";
  }
}

} // namespace ContactTypeMapper
} // namespace Model
} // namespace Route53Domains
} // namespace Aws
