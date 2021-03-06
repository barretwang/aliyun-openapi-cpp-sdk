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

#include <alibabacloud/emr/model/CreateClusterScriptRequest.h>

using AlibabaCloud::Emr::Model::CreateClusterScriptRequest;

CreateClusterScriptRequest::CreateClusterScriptRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateClusterScript")
{}

CreateClusterScriptRequest::~CreateClusterScriptRequest()
{}

std::string CreateClusterScriptRequest::getArgs()const
{
	return args_;
}

void CreateClusterScriptRequest::setArgs(const std::string& args)
{
	args_ = args;
	setParameter("Args", args);
}

std::string CreateClusterScriptRequest::getPath()const
{
	return path_;
}

void CreateClusterScriptRequest::setPath(const std::string& path)
{
	path_ = path;
	setParameter("Path", path);
}

long CreateClusterScriptRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateClusterScriptRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateClusterScriptRequest::getRegionId()const
{
	return regionId_;
}

void CreateClusterScriptRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateClusterScriptRequest::getName()const
{
	return name_;
}

void CreateClusterScriptRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateClusterScriptRequest::getClusterId()const
{
	return clusterId_;
}

void CreateClusterScriptRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string CreateClusterScriptRequest::getNodeIdList()const
{
	return nodeIdList_;
}

void CreateClusterScriptRequest::setNodeIdList(const std::string& nodeIdList)
{
	nodeIdList_ = nodeIdList;
	setParameter("NodeIdList", nodeIdList);
}

std::string CreateClusterScriptRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateClusterScriptRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

