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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/FleetCapacity.h>

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
namespace GameLift
{
namespace Model
{
  /**
   * <p>Represents the returned data in response to a request action.</p>
   */
  class AWS_GAMELIFT_API DescribeFleetCapacityResult
  {
  public:
    DescribeFleetCapacityResult();
    DescribeFleetCapacityResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeFleetCapacityResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Collection of objects containing capacity information for each requested
     * fleet ID. Leave this parameter empty to retrieve capacity information for all
     * fleets.</p>
     */
    inline const Aws::Vector<FleetCapacity>& GetFleetCapacity() const{ return m_fleetCapacity; }

    /**
     * <p>Collection of objects containing capacity information for each requested
     * fleet ID. Leave this parameter empty to retrieve capacity information for all
     * fleets.</p>
     */
    inline void SetFleetCapacity(const Aws::Vector<FleetCapacity>& value) { m_fleetCapacity = value; }

    /**
     * <p>Collection of objects containing capacity information for each requested
     * fleet ID. Leave this parameter empty to retrieve capacity information for all
     * fleets.</p>
     */
    inline void SetFleetCapacity(Aws::Vector<FleetCapacity>&& value) { m_fleetCapacity = value; }

    /**
     * <p>Collection of objects containing capacity information for each requested
     * fleet ID. Leave this parameter empty to retrieve capacity information for all
     * fleets.</p>
     */
    inline DescribeFleetCapacityResult& WithFleetCapacity(const Aws::Vector<FleetCapacity>& value) { SetFleetCapacity(value); return *this;}

    /**
     * <p>Collection of objects containing capacity information for each requested
     * fleet ID. Leave this parameter empty to retrieve capacity information for all
     * fleets.</p>
     */
    inline DescribeFleetCapacityResult& WithFleetCapacity(Aws::Vector<FleetCapacity>&& value) { SetFleetCapacity(value); return *this;}

    /**
     * <p>Collection of objects containing capacity information for each requested
     * fleet ID. Leave this parameter empty to retrieve capacity information for all
     * fleets.</p>
     */
    inline DescribeFleetCapacityResult& AddFleetCapacity(const FleetCapacity& value) { m_fleetCapacity.push_back(value); return *this; }

    /**
     * <p>Collection of objects containing capacity information for each requested
     * fleet ID. Leave this parameter empty to retrieve capacity information for all
     * fleets.</p>
     */
    inline DescribeFleetCapacityResult& AddFleetCapacity(FleetCapacity&& value) { m_fleetCapacity.push_back(value); return *this; }

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p> <note><p>If a request has a limit that exactly matches the number of
     * remaining results, a token is returned even though there are no more results to
     * retrieve.</p></note>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p> <note><p>If a request has a limit that exactly matches the number of
     * remaining results, a token is returned even though there are no more results to
     * retrieve.</p></note>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p> <note><p>If a request has a limit that exactly matches the number of
     * remaining results, a token is returned even though there are no more results to
     * retrieve.</p></note>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p> <note><p>If a request has a limit that exactly matches the number of
     * remaining results, a token is returned even though there are no more results to
     * retrieve.</p></note>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p> <note><p>If a request has a limit that exactly matches the number of
     * remaining results, a token is returned even though there are no more results to
     * retrieve.</p></note>
     */
    inline DescribeFleetCapacityResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p> <note><p>If a request has a limit that exactly matches the number of
     * remaining results, a token is returned even though there are no more results to
     * retrieve.</p></note>
     */
    inline DescribeFleetCapacityResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p> <note><p>If a request has a limit that exactly matches the number of
     * remaining results, a token is returned even though there are no more results to
     * retrieve.</p></note>
     */
    inline DescribeFleetCapacityResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<FleetCapacity> m_fleetCapacity;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
