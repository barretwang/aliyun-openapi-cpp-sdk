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

#include <alibabacloud/dds/model/SampleRequest.h>

using AlibabaCloud::Dds::Model::SampleRequest;

SampleRequest::SampleRequest() :
	RpcServiceRequest("dds", "2015-12-01", "Sample")
{}

SampleRequest::~SampleRequest()
{}

long SampleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SampleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SampleRequest::getSecurityToken()const
{
	return securityToken_;
}

void SampleRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SampleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SampleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SampleRequest::getRegionId()const
{
	return regionId_;
}

void SampleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SampleRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SampleRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string SampleRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void SampleRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long SampleRequest::getOwnerId()const
{
	return ownerId_;
}

void SampleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SampleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SampleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

