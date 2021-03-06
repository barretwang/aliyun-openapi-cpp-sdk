/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/emr/model/ListFailureJobExecutionInstancesRequest.h>

using AlibabaCloud::Emr::Model::ListFailureJobExecutionInstancesRequest;

ListFailureJobExecutionInstancesRequest::ListFailureJobExecutionInstancesRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListFailureJobExecutionInstances")
{}

ListFailureJobExecutionInstancesRequest::~ListFailureJobExecutionInstancesRequest()
{}

long ListFailureJobExecutionInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListFailureJobExecutionInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListFailureJobExecutionInstancesRequest::getRegionId()const
{
	return regionId_;
}

void ListFailureJobExecutionInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListFailureJobExecutionInstancesRequest::getCount()const
{
	return count_;
}

void ListFailureJobExecutionInstancesRequest::setCount(int count)
{
	count_ = count;
	setParameter("Count", std::to_string(count));
}

std::string ListFailureJobExecutionInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListFailureJobExecutionInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

