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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API Tag
  {
  public:
    Tag();
    Tag(const Aws::Utils::Json::JsonValue& jsonValue);
    Tag& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and cannot be prefixed with "aws:" or "dms:". The
     * string can only contain only the set of Unicode letters, digits, white-space,
     * '_', '.', '/', '=', '+', '-' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and cannot be prefixed with "aws:" or "dms:". The
     * string can only contain only the set of Unicode letters, digits, white-space,
     * '_', '.', '/', '=', '+', '-' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and cannot be prefixed with "aws:" or "dms:". The
     * string can only contain only the set of Unicode letters, digits, white-space,
     * '_', '.', '/', '=', '+', '-' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and cannot be prefixed with "aws:" or "dms:". The
     * string can only contain only the set of Unicode letters, digits, white-space,
     * '_', '.', '/', '=', '+', '-' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and cannot be prefixed with "aws:" or "dms:". The
     * string can only contain only the set of Unicode letters, digits, white-space,
     * '_', '.', '/', '=', '+', '-' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and cannot be prefixed with "aws:" or "dms:". The
     * string can only contain only the set of Unicode letters, digits, white-space,
     * '_', '.', '/', '=', '+', '-' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(value); return *this;}

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and cannot be prefixed with "aws:" or "dms:". The
     * string can only contain only the set of Unicode letters, digits, white-space,
     * '_', '.', '/', '=', '+', '-' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}

    /**
     * <p>A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length and cannot be prefixed with "aws:" or "dms:".
     * The string can only contain only the set of Unicode letters, digits,
     * white-space, '_', '.', '/', '=', '+', '-' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length and cannot be prefixed with "aws:" or "dms:".
     * The string can only contain only the set of Unicode letters, digits,
     * white-space, '_', '.', '/', '=', '+', '-' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length and cannot be prefixed with "aws:" or "dms:".
     * The string can only contain only the set of Unicode letters, digits,
     * white-space, '_', '.', '/', '=', '+', '-' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length and cannot be prefixed with "aws:" or "dms:".
     * The string can only contain only the set of Unicode letters, digits,
     * white-space, '_', '.', '/', '=', '+', '-' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length and cannot be prefixed with "aws:" or "dms:".
     * The string can only contain only the set of Unicode letters, digits,
     * white-space, '_', '.', '/', '=', '+', '-' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length and cannot be prefixed with "aws:" or "dms:".
     * The string can only contain only the set of Unicode letters, digits,
     * white-space, '_', '.', '/', '=', '+', '-' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length and cannot be prefixed with "aws:" or "dms:".
     * The string can only contain only the set of Unicode letters, digits,
     * white-space, '_', '.', '/', '=', '+', '-' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:
    Aws::String m_key;
    bool m_keyHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
