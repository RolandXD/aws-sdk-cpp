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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/TopicRulePayload.h>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the ReplaceTopicRule operation.</p>
   */
  class AWS_IOT_API ReplaceTopicRuleRequest : public IoTRequest
  {
  public:
    ReplaceTopicRuleRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline ReplaceTopicRuleRequest& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline ReplaceTopicRuleRequest& WithRuleName(Aws::String&& value) { SetRuleName(value); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline ReplaceTopicRuleRequest& WithRuleName(const char* value) { SetRuleName(value); return *this;}

    /**
     * <p>The rule payload.</p>
     */
    inline const TopicRulePayload& GetTopicRulePayload() const{ return m_topicRulePayload; }

    /**
     * <p>The rule payload.</p>
     */
    inline void SetTopicRulePayload(const TopicRulePayload& value) { m_topicRulePayloadHasBeenSet = true; m_topicRulePayload = value; }

    /**
     * <p>The rule payload.</p>
     */
    inline void SetTopicRulePayload(TopicRulePayload&& value) { m_topicRulePayloadHasBeenSet = true; m_topicRulePayload = value; }

    /**
     * <p>The rule payload.</p>
     */
    inline ReplaceTopicRuleRequest& WithTopicRulePayload(const TopicRulePayload& value) { SetTopicRulePayload(value); return *this;}

    /**
     * <p>The rule payload.</p>
     */
    inline ReplaceTopicRuleRequest& WithTopicRulePayload(TopicRulePayload&& value) { SetTopicRulePayload(value); return *this;}

  private:
    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet;
    TopicRulePayload m_topicRulePayload;
    bool m_topicRulePayloadHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
