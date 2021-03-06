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

#include <alibabacloud/rtc/model/MuteAudioResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

MuteAudioResult::MuteAudioResult() :
	ServiceResult()
{}

MuteAudioResult::MuteAudioResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MuteAudioResult::~MuteAudioResult()
{}

void MuteAudioResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allParticipants = value["Participants"]["Participant"];
	for (auto value : allParticipants)
	{
		Participant participantsObject;
		if(!value["Id"].isNull())
			participantsObject.id = value["Id"].asString();
		if(!value["Code"].isNull())
			participantsObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			participantsObject.message = value["Message"].asString();
		participants_.push_back(participantsObject);
	}
	if(!value["ConferenceId"].isNull())
		conferenceId_ = value["ConferenceId"].asString();

}

std::string MuteAudioResult::getConferenceId()const
{
	return conferenceId_;
}

std::vector<MuteAudioResult::Participant> MuteAudioResult::getParticipants()const
{
	return participants_;
}

