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

#include <alibabacloud/openanalytics/model/GetRegionStatusRequest.h>

using AlibabaCloud::Openanalytics::Model::GetRegionStatusRequest;

GetRegionStatusRequest::GetRegionStatusRequest() :
	RpcServiceRequest("openanalytics", "2018-03-01", "GetRegionStatus")
{}

GetRegionStatusRequest::~GetRegionStatusRequest()
{}

bool GetRegionStatusRequest::getSecurity_transport()const
{
	return security_transport_;
}

void GetRegionStatusRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string GetRegionStatusRequest::getRegionID()const
{
	return regionID_;
}

void GetRegionStatusRequest::setRegionID(const std::string& regionID)
{
	regionID_ = regionID;
	setParameter("RegionID", regionID);
}

std::string GetRegionStatusRequest::getRequestId()const
{
	return requestId_;
}

void GetRegionStatusRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

long GetRegionStatusRequest::getCallerParentId()const
{
	return callerParentId_;
}

void GetRegionStatusRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

long GetRegionStatusRequest::getCallerBid()const
{
	return callerBid_;
}

void GetRegionStatusRequest::setCallerBid(long callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", std::to_string(callerBid));
}

std::string GetRegionStatusRequest::getCallerType()const
{
	return callerType_;
}

void GetRegionStatusRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool GetRegionStatusRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void GetRegionStatusRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

long GetRegionStatusRequest::getCallerUid()const
{
	return callerUid_;
}

void GetRegionStatusRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string GetRegionStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetRegionStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long GetRegionStatusRequest::getTargetUid()const
{
	return targetUid_;
}

void GetRegionStatusRequest::setTargetUid(long targetUid)
{
	targetUid_ = targetUid;
	setParameter("TargetUid", std::to_string(targetUid));
}

