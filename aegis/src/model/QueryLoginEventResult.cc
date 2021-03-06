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

#include <alibabacloud/aegis/model/QueryLoginEventResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

QueryLoginEventResult::QueryLoginEventResult() :
	ServiceResult()
{}

QueryLoginEventResult::QueryLoginEventResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryLoginEventResult::~QueryLoginEventResult()
{}

void QueryLoginEventResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allList = value["List"]["Entity"];
	for (auto value : allList)
	{
		Data::Entity entityObject;
		if(!value["Uuid"].isNull())
			entityObject.uuid = value["Uuid"].asString();
		if(!value["LoginTime"].isNull())
			entityObject.loginTime = value["LoginTime"].asString();
		if(!value["LoginType"].isNull())
			entityObject.loginType = std::stoi(value["LoginType"].asString());
		if(!value["LoginTypeName"].isNull())
			entityObject.loginTypeName = value["LoginTypeName"].asString();
		if(!value["BuyVersion"].isNull())
			entityObject.buyVersion = value["BuyVersion"].asString();
		if(!value["LoginSourceIp"].isNull())
			entityObject.loginSourceIp = value["LoginSourceIp"].asString();
		if(!value["GroupId"].isNull())
			entityObject.groupId = std::stoi(value["GroupId"].asString());
		if(!value["InstanceName"].isNull())
			entityObject.instanceName = value["InstanceName"].asString();
		if(!value["InstanceId"].isNull())
			entityObject.instanceId = value["InstanceId"].asString();
		if(!value["Ip"].isNull())
			entityObject.ip = value["Ip"].asString();
		if(!value["Region"].isNull())
			entityObject.region = value["Region"].asString();
		if(!value["Status"].isNull())
			entityObject.status = std::stoi(value["Status"].asString());
		if(!value["StatusName"].isNull())
			entityObject.statusName = value["StatusName"].asString();
		if(!value["Location"].isNull())
			entityObject.location = value["Location"].asString();
		if(!value["UserName"].isNull())
			entityObject.userName = value["UserName"].asString();
		data_.list.push_back(entityObject);
	}
	auto pageInfoNode = dataNode["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		data_.pageInfo.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		data_.pageInfo.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		data_.pageInfo.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		data_.pageInfo.count = std::stoi(pageInfoNode["Count"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryLoginEventResult::getRequestId()const
{
	return requestId_;
}

std::string QueryLoginEventResult::getMessage()const
{
	return message_;
}

QueryLoginEventResult::Data QueryLoginEventResult::getData()const
{
	return data_;
}

std::string QueryLoginEventResult::getCode()const
{
	return code_;
}

bool QueryLoginEventResult::getSuccess()const
{
	return success_;
}

