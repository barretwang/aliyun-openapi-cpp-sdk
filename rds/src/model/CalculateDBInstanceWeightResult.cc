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

#include <alibabacloud/rds/model/CalculateDBInstanceWeightResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

CalculateDBInstanceWeightResult::CalculateDBInstanceWeightResult() :
	ServiceResult()
{}

CalculateDBInstanceWeightResult::CalculateDBInstanceWeightResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CalculateDBInstanceWeightResult::~CalculateDBInstanceWeightResult()
{}

void CalculateDBInstanceWeightResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["DBInstanceWeight"];
	for (auto value : allItems)
	{
		DBInstanceWeight itemsObject;
		if(!value["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = value["DBInstanceId"].asString();
		if(!value["DBInstanceType"].isNull())
			itemsObject.dBInstanceType = value["DBInstanceType"].asString();
		if(!value["ReadonlyInstanceSQLDelayedTime"].isNull())
			itemsObject.readonlyInstanceSQLDelayedTime = value["ReadonlyInstanceSQLDelayedTime"].asString();
		if(!value["Availability"].isNull())
			itemsObject.availability = value["Availability"].asString();
		if(!value["Weight"].isNull())
			itemsObject.weight = value["Weight"].asString();
		items_.push_back(itemsObject);
	}

}

std::vector<CalculateDBInstanceWeightResult::DBInstanceWeight> CalculateDBInstanceWeightResult::getItems()const
{
	return items_;
}

