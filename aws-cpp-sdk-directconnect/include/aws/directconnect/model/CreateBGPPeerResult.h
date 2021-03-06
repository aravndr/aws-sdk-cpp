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

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/VirtualInterface.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DirectConnect
{
namespace Model
{
  class AWS_DIRECTCONNECT_API CreateBGPPeerResult
  {
  public:
    CreateBGPPeerResult();
    CreateBGPPeerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateBGPPeerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The virtual interface.</p>
     */
    inline const VirtualInterface& GetVirtualInterface() const{ return m_virtualInterface; }

    /**
     * <p>The virtual interface.</p>
     */
    inline void SetVirtualInterface(const VirtualInterface& value) { m_virtualInterface = value; }

    /**
     * <p>The virtual interface.</p>
     */
    inline void SetVirtualInterface(VirtualInterface&& value) { m_virtualInterface = std::move(value); }

    /**
     * <p>The virtual interface.</p>
     */
    inline CreateBGPPeerResult& WithVirtualInterface(const VirtualInterface& value) { SetVirtualInterface(value); return *this;}

    /**
     * <p>The virtual interface.</p>
     */
    inline CreateBGPPeerResult& WithVirtualInterface(VirtualInterface&& value) { SetVirtualInterface(std::move(value)); return *this;}

  private:

    VirtualInterface m_virtualInterface;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
