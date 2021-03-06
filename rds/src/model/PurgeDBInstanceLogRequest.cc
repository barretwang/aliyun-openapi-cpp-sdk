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

#include <alibabacloud/rds/model/PurgeDBInstanceLogRequest.h>

using AlibabaCloud::Rds::Model::PurgeDBInstanceLogRequest;

PurgeDBInstanceLogRequest::PurgeDBInstanceLogRequest() :
	RpcServiceRequest("rds", "2014-08-15", "PurgeDBInstanceLog")
{}

PurgeDBInstanceLogRequest::~PurgeDBInstanceLogRequest()
{}

long PurgeDBInstanceLogRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PurgeDBInstanceLogRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string PurgeDBInstanceLogRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void PurgeDBInstanceLogRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string PurgeDBInstanceLogRequest::getClientToken()const
{
	return clientToken_;
}

void PurgeDBInstanceLogRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string PurgeDBInstanceLogRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void PurgeDBInstanceLogRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string PurgeDBInstanceLogRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void PurgeDBInstanceLogRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long PurgeDBInstanceLogRequest::getOwnerId()const
{
	return ownerId_;
}

void PurgeDBInstanceLogRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string PurgeDBInstanceLogRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PurgeDBInstanceLogRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

