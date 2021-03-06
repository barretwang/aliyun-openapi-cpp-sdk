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

#include <alibabacloud/cas/model/CreateSignatureRequest.h>

using AlibabaCloud::Cas::Model::CreateSignatureRequest;

CreateSignatureRequest::CreateSignatureRequest() :
	RpcServiceRequest("cas", "2018-08-13", "CreateSignature")
{}

CreateSignatureRequest::~CreateSignatureRequest()
{}

int CreateSignatureRequest::getQuantity()const
{
	return quantity_;
}

void CreateSignatureRequest::setQuantity(int quantity)
{
	quantity_ = quantity;
	setParameter("Quantity", std::to_string(quantity));
}

std::string CreateSignatureRequest::getHandSignImg()const
{
	return handSignImg_;
}

void CreateSignatureRequest::setHandSignImg(const std::string& handSignImg)
{
	handSignImg_ = handSignImg;
	setParameter("HandSignImg", handSignImg);
}

std::string CreateSignatureRequest::getDocId()const
{
	return docId_;
}

void CreateSignatureRequest::setDocId(const std::string& docId)
{
	docId_ = docId;
	setParameter("DocId", docId);
}

std::string CreateSignatureRequest::getCustomApi()const
{
	return customApi_;
}

void CreateSignatureRequest::setCustomApi(const std::string& customApi)
{
	customApi_ = customApi;
	setParameter("CustomApi", customApi);
}

int CreateSignatureRequest::getPositionPage()const
{
	return positionPage_;
}

void CreateSignatureRequest::setPositionPage(int positionPage)
{
	positionPage_ = positionPage;
	setParameter("PositionPage", std::to_string(positionPage));
}

std::string CreateSignatureRequest::getDocTitle()const
{
	return docTitle_;
}

void CreateSignatureRequest::setDocTitle(const std::string& docTitle)
{
	docTitle_ = docTitle;
	setParameter("DocTitle", docTitle);
}

int CreateSignatureRequest::getPositionX()const
{
	return positionX_;
}

void CreateSignatureRequest::setPositionX(int positionX)
{
	positionX_ = positionX;
	setParameter("PositionX", std::to_string(positionX));
}

int CreateSignatureRequest::getPositionY()const
{
	return positionY_;
}

void CreateSignatureRequest::setPositionY(int positionY)
{
	positionY_ = positionY;
	setParameter("PositionY", std::to_string(positionY));
}

std::string CreateSignatureRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateSignatureRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateSignatureRequest::getPeopleId()const
{
	return peopleId_;
}

void CreateSignatureRequest::setPeopleId(const std::string& peopleId)
{
	peopleId_ = peopleId;
	setParameter("PeopleId", peopleId);
}

int CreateSignatureRequest::getPositionType()const
{
	return positionType_;
}

void CreateSignatureRequest::setPositionType(int positionType)
{
	positionType_ = positionType;
	setParameter("PositionType", std::to_string(positionType));
}

std::string CreateSignatureRequest::getSignKeyword()const
{
	return signKeyword_;
}

void CreateSignatureRequest::setSignKeyword(const std::string& signKeyword)
{
	signKeyword_ = signKeyword;
	setParameter("SignKeyword", signKeyword);
}

std::string CreateSignatureRequest::getNotifyUrl()const
{
	return notifyUrl_;
}

void CreateSignatureRequest::setNotifyUrl(const std::string& notifyUrl)
{
	notifyUrl_ = notifyUrl;
	setParameter("NotifyUrl", notifyUrl);
}

int CreateSignatureRequest::getValidity()const
{
	return validity_;
}

void CreateSignatureRequest::setValidity(int validity)
{
	validity_ = validity;
	setParameter("Validity", std::to_string(validity));
}

std::string CreateSignatureRequest::getReturnUrl()const
{
	return returnUrl_;
}

void CreateSignatureRequest::setReturnUrl(const std::string& returnUrl)
{
	returnUrl_ = returnUrl;
	setParameter("ReturnUrl", returnUrl);
}

std::string CreateSignatureRequest::getLang()const
{
	return lang_;
}

void CreateSignatureRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int CreateSignatureRequest::getKeywordStrategy()const
{
	return keywordStrategy_;
}

void CreateSignatureRequest::setKeywordStrategy(int keywordStrategy)
{
	keywordStrategy_ = keywordStrategy;
	setParameter("KeywordStrategy", std::to_string(keywordStrategy));
}

