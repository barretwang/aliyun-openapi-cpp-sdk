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

#include <alibabacloud/imm/model/DeleteVideoRequest.h>

using AlibabaCloud::Imm::Model::DeleteVideoRequest;

DeleteVideoRequest::DeleteVideoRequest() :
	RpcServiceRequest("imm", "2017-09-06", "DeleteVideo")
{}

DeleteVideoRequest::~DeleteVideoRequest()
{}

std::string DeleteVideoRequest::getVideoUri()const
{
	return videoUri_;
}

void DeleteVideoRequest::setVideoUri(const std::string& videoUri)
{
	videoUri_ = videoUri;
	setCoreParameter("VideoUri", videoUri);
}

std::string DeleteVideoRequest::getRegionId()const
{
	return regionId_;
}

void DeleteVideoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteVideoRequest::getProject()const
{
	return project_;
}

void DeleteVideoRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string DeleteVideoRequest::getSetId()const
{
	return setId_;
}

void DeleteVideoRequest::setSetId(const std::string& setId)
{
	setId_ = setId;
	setCoreParameter("SetId", setId);
}

bool DeleteVideoRequest::getResources()const
{
	return resources_;
}

void DeleteVideoRequest::setResources(bool resources)
{
	resources_ = resources;
	setCoreParameter("Resources", resources ? "true" : "false");
}

std::string DeleteVideoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteVideoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

