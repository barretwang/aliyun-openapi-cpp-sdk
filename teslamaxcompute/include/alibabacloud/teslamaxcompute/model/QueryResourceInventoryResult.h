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

#ifndef ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_QUERYRESOURCEINVENTORYRESULT_H_
#define ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_QUERYRESOURCEINVENTORYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/teslamaxcompute/TeslaMaxComputeExport.h>

namespace AlibabaCloud
{
	namespace TeslaMaxCompute
	{
		namespace Model
		{
			class ALIBABACLOUD_TESLAMAXCOMPUTE_EXPORT QueryResourceInventoryResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Cluster
					{
						struct ResourceParameter
						{
							std::string paraName;
							std::string paraValue;
						};
						struct ResourceInventory
						{
							long used;
							long total;
							long available;
							std::string resourceType;
						};
						std::string status;
						std::vector<Cluster::ResourceInventory> resourceInventories;
						std::string cluster;
						std::string region;
						std::string machineRoom;
						std::vector<Cluster::ResourceParameter> resourceParameters;
					};
					std::string lastUpdate;
					std::vector<Cluster> clusters;
				};


				QueryResourceInventoryResult();
				explicit QueryResourceInventoryResult(const std::string &payload);
				~QueryResourceInventoryResult();
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_QUERYRESOURCEINVENTORYRESULT_H_