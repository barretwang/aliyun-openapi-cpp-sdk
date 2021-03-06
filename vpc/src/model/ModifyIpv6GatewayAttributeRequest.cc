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

#include <alibabacloud/vpc/model/ModifyIpv6GatewayAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyIpv6GatewayAttributeRequest;

ModifyIpv6GatewayAttributeRequest::ModifyIpv6GatewayAttributeRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyIpv6GatewayAttribute")
{}

ModifyIpv6GatewayAttributeRequest::~ModifyIpv6GatewayAttributeRequest()
{}

long ModifyIpv6GatewayAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyIpv6GatewayAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ModifyIpv6GatewayAttributeRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyIpv6GatewayAttributeRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string ModifyIpv6GatewayAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyIpv6GatewayAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

bool ModifyIpv6GatewayAttributeRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyIpv6GatewayAttributeRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string ModifyIpv6GatewayAttributeRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyIpv6GatewayAttributeRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyIpv6GatewayAttributeRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyIpv6GatewayAttributeRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyIpv6GatewayAttributeRequest::getCallerType()const
{
	return callerType_;
}

void ModifyIpv6GatewayAttributeRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string ModifyIpv6GatewayAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyIpv6GatewayAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyIpv6GatewayAttributeRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifyIpv6GatewayAttributeRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ModifyIpv6GatewayAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyIpv6GatewayAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyIpv6GatewayAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyIpv6GatewayAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

bool ModifyIpv6GatewayAttributeRequest::getEnable()const
{
	return enable_;
}

void ModifyIpv6GatewayAttributeRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string ModifyIpv6GatewayAttributeRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyIpv6GatewayAttributeRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string ModifyIpv6GatewayAttributeRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyIpv6GatewayAttributeRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyIpv6GatewayAttributeRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyIpv6GatewayAttributeRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long ModifyIpv6GatewayAttributeRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyIpv6GatewayAttributeRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string ModifyIpv6GatewayAttributeRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyIpv6GatewayAttributeRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string ModifyIpv6GatewayAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyIpv6GatewayAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyIpv6GatewayAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyIpv6GatewayAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyIpv6GatewayAttributeRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyIpv6GatewayAttributeRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long ModifyIpv6GatewayAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyIpv6GatewayAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool ModifyIpv6GatewayAttributeRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyIpv6GatewayAttributeRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool ModifyIpv6GatewayAttributeRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyIpv6GatewayAttributeRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool ModifyIpv6GatewayAttributeRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyIpv6GatewayAttributeRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string ModifyIpv6GatewayAttributeRequest::getRequestId()const
{
	return requestId_;
}

void ModifyIpv6GatewayAttributeRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string ModifyIpv6GatewayAttributeRequest::getIpv6GatewayId()const
{
	return ipv6GatewayId_;
}

void ModifyIpv6GatewayAttributeRequest::setIpv6GatewayId(const std::string& ipv6GatewayId)
{
	ipv6GatewayId_ = ipv6GatewayId;
	setParameter("Ipv6GatewayId", ipv6GatewayId);
}

std::string ModifyIpv6GatewayAttributeRequest::getName()const
{
	return name_;
}

void ModifyIpv6GatewayAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

