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

#include <alibabacloud/openanalytics/model/QueryEndPointListRequest.h>

using AlibabaCloud::Openanalytics::Model::QueryEndPointListRequest;

QueryEndPointListRequest::QueryEndPointListRequest() :
	RpcServiceRequest("openanalytics", "2018-03-01", "QueryEndPointList")
{}

QueryEndPointListRequest::~QueryEndPointListRequest()
{}

bool QueryEndPointListRequest::getSecurity_transport()const
{
	return security_transport_;
}

void QueryEndPointListRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string QueryEndPointListRequest::getRegionID()const
{
	return regionID_;
}

void QueryEndPointListRequest::setRegionID(const std::string& regionID)
{
	regionID_ = regionID;
	setParameter("RegionID", regionID);
}

std::string QueryEndPointListRequest::getRequestId()const
{
	return requestId_;
}

void QueryEndPointListRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

long QueryEndPointListRequest::getCallerParentId()const
{
	return callerParentId_;
}

void QueryEndPointListRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

long QueryEndPointListRequest::getCallerBid()const
{
	return callerBid_;
}

void QueryEndPointListRequest::setCallerBid(long callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", std::to_string(callerBid));
}

std::string QueryEndPointListRequest::getCallerType()const
{
	return callerType_;
}

void QueryEndPointListRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool QueryEndPointListRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void QueryEndPointListRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

long QueryEndPointListRequest::getCallerUid()const
{
	return callerUid_;
}

void QueryEndPointListRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string QueryEndPointListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryEndPointListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long QueryEndPointListRequest::getUserID()const
{
	return userID_;
}

void QueryEndPointListRequest::setUserID(long userID)
{
	userID_ = userID;
	setParameter("UserID", std::to_string(userID));
}

