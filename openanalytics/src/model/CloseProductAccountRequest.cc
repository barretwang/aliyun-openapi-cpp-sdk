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

#include <alibabacloud/openanalytics/model/CloseProductAccountRequest.h>

using AlibabaCloud::Openanalytics::Model::CloseProductAccountRequest;

CloseProductAccountRequest::CloseProductAccountRequest() :
	RpcServiceRequest("openanalytics", "2018-03-01", "CloseProductAccount")
{}

CloseProductAccountRequest::~CloseProductAccountRequest()
{}

long CloseProductAccountRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CloseProductAccountRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

long CloseProductAccountRequest::getCallerBid()const
{
	return callerBid_;
}

void CloseProductAccountRequest::setCallerBid(long callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", std::to_string(callerBid));
}

std::string CloseProductAccountRequest::getCallerType()const
{
	return callerType_;
}

void CloseProductAccountRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool CloseProductAccountRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CloseProductAccountRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string CloseProductAccountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CloseProductAccountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool CloseProductAccountRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CloseProductAccountRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string CloseProductAccountRequest::getRegionID()const
{
	return regionID_;
}

void CloseProductAccountRequest::setRegionID(const std::string& regionID)
{
	regionID_ = regionID;
	setParameter("RegionID", regionID);
}

std::string CloseProductAccountRequest::getRequestId()const
{
	return requestId_;
}

void CloseProductAccountRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

long CloseProductAccountRequest::getCallerUid()const
{
	return callerUid_;
}

void CloseProductAccountRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string CloseProductAccountRequest::getProductCode()const
{
	return productCode_;
}

void CloseProductAccountRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", productCode);
}

std::string CloseProductAccountRequest::getProductAccessKey()const
{
	return productAccessKey_;
}

void CloseProductAccountRequest::setProductAccessKey(const std::string& productAccessKey)
{
	productAccessKey_ = productAccessKey;
	setParameter("ProductAccessKey", productAccessKey);
}

std::string CloseProductAccountRequest::getTargetUid()const
{
	return targetUid_;
}

void CloseProductAccountRequest::setTargetUid(const std::string& targetUid)
{
	targetUid_ = targetUid;
	setParameter("TargetUid", targetUid);
}

std::string CloseProductAccountRequest::getTargetArnRole()const
{
	return targetArnRole_;
}

void CloseProductAccountRequest::setTargetArnRole(const std::string& targetArnRole)
{
	targetArnRole_ = targetArnRole;
	setParameter("TargetArnRole", targetArnRole);
}

