﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/es/model/AdvancedSecurityOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

AdvancedSecurityOptions::AdvancedSecurityOptions() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_internalUserDatabaseEnabled(false),
    m_internalUserDatabaseEnabledHasBeenSet(false)
{
}

AdvancedSecurityOptions::AdvancedSecurityOptions(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_internalUserDatabaseEnabled(false),
    m_internalUserDatabaseEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

AdvancedSecurityOptions& AdvancedSecurityOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InternalUserDatabaseEnabled"))
  {
    m_internalUserDatabaseEnabled = jsonValue.GetBool("InternalUserDatabaseEnabled");

    m_internalUserDatabaseEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue AdvancedSecurityOptions::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_internalUserDatabaseEnabledHasBeenSet)
  {
   payload.WithBool("InternalUserDatabaseEnabled", m_internalUserDatabaseEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
