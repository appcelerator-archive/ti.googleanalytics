/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2017 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "ti.googleanalytics.FieldsProxy.h"

#include "AndroidUtil.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "TypeConverter.h"
#include "V8Util.h"


#include "org.appcelerator.kroll.KrollProxy.h"

#define TAG "FieldsProxy"

using namespace v8;

namespace ti {
namespace googleanalytics {


Persistent<FunctionTemplate> FieldsProxy::proxyTemplate;
jclass FieldsProxy::javaClass = NULL;

FieldsProxy::FieldsProxy() : titanium::Proxy()
{
}

void FieldsProxy::bindProxy(Local<Object> exports, Local<Context> context)
{
	Isolate* isolate = context->GetIsolate();

	Local<FunctionTemplate> pt = getProxyTemplate(isolate);

	v8::TryCatch tryCatch(isolate);
	Local<Function> constructor;
	MaybeLocal<Function> maybeConstructor = pt->GetFunction(context);
	if (!maybeConstructor.ToLocal(&constructor)) {
		titanium::V8Util::fatalException(isolate, tryCatch);
		return;
	}

	Local<String> nameSymbol = NEW_SYMBOL(isolate, "Fields"); // use symbol over string for efficiency
	exports->Set(nameSymbol, constructor);
}

void FieldsProxy::dispose(Isolate* isolate)
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Reset();
	}

	titanium::KrollProxy::dispose(isolate);
}

Local<FunctionTemplate> FieldsProxy::getProxyTemplate(Isolate* isolate)
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate.Get(isolate);
	}

	LOGD(TAG, "FieldsProxy::getProxyTemplate()");

	javaClass = titanium::JNIUtil::findClass("ti/googleanalytics/FieldsProxy");
	EscapableHandleScope scope(isolate);

	// use symbol over string for efficiency
	Local<String> nameSymbol = NEW_SYMBOL(isolate, "Fields");

	Local<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(isolate,
		titanium::KrollProxy::getProxyTemplate(isolate)
, javaClass, nameSymbol);

	proxyTemplate.Reset(isolate, t);
	t->Set(titanium::Proxy::inheritSymbol.Get(isolate),
		FunctionTemplate::New(isolate, titanium::Proxy::inherit<FieldsProxy>));

	// Method bindings --------------------------------------------------------

	Local<ObjectTemplate> prototypeTemplate = t->PrototypeTemplate();
	Local<ObjectTemplate> instanceTemplate = t->InstanceTemplate();

	// Delegate indexed property get and set to the Java proxy.
	instanceTemplate->SetIndexedPropertyHandler(titanium::Proxy::getIndexedProperty,
		titanium::Proxy::setIndexedProperty);

	// Constants --------------------------------------------------------------
	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment in FieldsProxy");
		//return;
	}


			DEFINE_STRING_CONSTANT(isolate, t, "CAMPAIGN_MEDIUM", "&cm");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "CAMPAIGN_MEDIUM", "&cm");

			DEFINE_STRING_CONSTANT(isolate, t, "NON_INTERACTION", "&ni");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "NON_INTERACTION", "&ni");

			DEFINE_STRING_CONSTANT(isolate, t, "SOCIAL_NETWORK", "&sn");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "SOCIAL_NETWORK", "&sn");

			DEFINE_STRING_CONSTANT(isolate, t, "APP_NAME", "&an");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "APP_NAME", "&an");

			DEFINE_STRING_CONSTANT(isolate, t, "REFERRER", "&dr");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "REFERRER", "&dr");

			DEFINE_STRING_CONSTANT(isolate, t, "CAMPAIGN_CONTENT", "&cc");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "CAMPAIGN_CONTENT", "&cc");

			DEFINE_STRING_CONSTANT(isolate, t, "ANONYMIZE_IP", "&aip");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "ANONYMIZE_IP", "&aip");

			DEFINE_STRING_CONSTANT(isolate, t, "USE_SECURE", "useSecure");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "USE_SECURE", "useSecure");

			DEFINE_STRING_CONSTANT(isolate, t, "ITEM_NAME", "&in");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "ITEM_NAME", "&in");

			DEFINE_STRING_CONSTANT(isolate, t, "CLIENT_ID", "&cid");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "CLIENT_ID", "&cid");

			DEFINE_STRING_CONSTANT(isolate, t, "TIMING_VALUE", "&utt");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "TIMING_VALUE", "&utt");

			DEFINE_STRING_CONSTANT(isolate, t, "EX_DESCRIPTION", "&exd");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "EX_DESCRIPTION", "&exd");

			DEFINE_STRING_CONSTANT(isolate, t, "TRANSACTION_REVENUE", "&tr");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "TRANSACTION_REVENUE", "&tr");

			DEFINE_STRING_CONSTANT(isolate, t, "EVENT_LABEL", "&el");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "EVENT_LABEL", "&el");

			DEFINE_STRING_CONSTANT(isolate, t, "APP_INSTALLER_ID", "&aiid");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "APP_INSTALLER_ID", "&aiid");

			DEFINE_STRING_CONSTANT(isolate, t, "LANGUAGE", "&ul");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "LANGUAGE", "&ul");

			DEFINE_STRING_CONSTANT(isolate, t, "TRANSACTION_AFFILIATION", "&ta");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "TRANSACTION_AFFILIATION", "&ta");

			DEFINE_STRING_CONSTANT(isolate, t, "EVENT_CATEGORY", "&ec");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "EVENT_CATEGORY", "&ec");

			DEFINE_STRING_CONSTANT(isolate, t, "CAMPAIGN_ID", "&ci");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "CAMPAIGN_ID", "&ci");

			DEFINE_STRING_CONSTANT(isolate, t, "PAGE", "&dp");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "PAGE", "&dp");

			DEFINE_STRING_CONSTANT(isolate, t, "EVENT_VALUE", "&ev");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "EVENT_VALUE", "&ev");

			DEFINE_STRING_CONSTANT(isolate, t, "HIT_TYPE", "&t");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "HIT_TYPE", "&t");

			DEFINE_STRING_CONSTANT(isolate, t, "EX_FATAL", "&exf");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "EX_FATAL", "&exf");

			DEFINE_STRING_CONSTANT(isolate, t, "ITEM_SKU", "&ic");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "ITEM_SKU", "&ic");

			DEFINE_STRING_CONSTANT(isolate, t, "TIMING_CATEGORY", "&utc");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "TIMING_CATEGORY", "&utc");

			DEFINE_STRING_CONSTANT(isolate, t, "SESSION_CONTROL", "&sc");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "SESSION_CONTROL", "&sc");

			DEFINE_STRING_CONSTANT(isolate, t, "TIMING_VAR", "&utv");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "TIMING_VAR", "&utv");

			DEFINE_STRING_CONSTANT(isolate, t, "LOCATION", "&dl");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "LOCATION", "&dl");

			DEFINE_STRING_CONSTANT(isolate, t, "FLASH_VERSION", "&fl");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "FLASH_VERSION", "&fl");

			DEFINE_STRING_CONSTANT(isolate, t, "SOCIAL_ACTION", "&sa");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "SOCIAL_ACTION", "&sa");

			DEFINE_STRING_CONSTANT(isolate, t, "APP_VERSION", "&av");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "APP_VERSION", "&av");

			DEFINE_STRING_CONSTANT(isolate, t, "CURRENCY_CODE", "&cu");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "CURRENCY_CODE", "&cu");

			DEFINE_STRING_CONSTANT(isolate, t, "ANDROID_APP_UID", "AppUID");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "ANDROID_APP_UID", "AppUID");

			DEFINE_STRING_CONSTANT(isolate, t, "DESCRIPTION", "&cd");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "DESCRIPTION", "&cd");

			DEFINE_STRING_CONSTANT(isolate, t, "CAMPAIGN_NAME", "&cn");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "CAMPAIGN_NAME", "&cn");

			DEFINE_STRING_CONSTANT(isolate, t, "ITEM_CATEGORY", "&iv");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "ITEM_CATEGORY", "&iv");

			DEFINE_STRING_CONSTANT(isolate, t, "APP_ID", "&aid");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "APP_ID", "&aid");

			DEFINE_STRING_CONSTANT(isolate, t, "ITEM_QUANTITY", "&iq");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "ITEM_QUANTITY", "&iq");

			DEFINE_STRING_CONSTANT(isolate, t, "TIMING_LABEL", "&utl");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "TIMING_LABEL", "&utl");

			DEFINE_STRING_CONSTANT(isolate, t, "JAVA_ENABLED", "&je");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "JAVA_ENABLED", "&je");

			DEFINE_STRING_CONSTANT(isolate, t, "VIEWPORT_SIZE", "&vp");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "VIEWPORT_SIZE", "&vp");

			DEFINE_STRING_CONSTANT(isolate, t, "TRANSACTION_SHIPPING", "&ts");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "TRANSACTION_SHIPPING", "&ts");

			DEFINE_STRING_CONSTANT(isolate, t, "EVENT_ACTION", "&ea");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "EVENT_ACTION", "&ea");

			DEFINE_STRING_CONSTANT(isolate, t, "SAMPLE_RATE", "&sf");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "SAMPLE_RATE", "&sf");

			DEFINE_STRING_CONSTANT(isolate, t, "TRACKING_ID", "&tid");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "TRACKING_ID", "&tid");

			DEFINE_STRING_CONSTANT(isolate, t, "HOSTNAME", "&dh");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "HOSTNAME", "&dh");

			DEFINE_STRING_CONSTANT(isolate, t, "SCREEN_RESOLUTION", "&sr");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "SCREEN_RESOLUTION", "&sr");

			DEFINE_STRING_CONSTANT(isolate, t, "ENCODING", "&de");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "ENCODING", "&de");

			DEFINE_STRING_CONSTANT(isolate, t, "SCREEN_COLORS", "&sd");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "SCREEN_COLORS", "&sd");

			DEFINE_STRING_CONSTANT(isolate, t, "SOCIAL_TARGET", "&st");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "SOCIAL_TARGET", "&st");

			DEFINE_STRING_CONSTANT(isolate, t, "TRANSACTION_TAX", "&tt");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "TRANSACTION_TAX", "&tt");

			DEFINE_STRING_CONSTANT(isolate, t, "TITLE", "&dt");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "TITLE", "&dt");

			DEFINE_STRING_CONSTANT(isolate, t, "SCREEN_NAME", "&cd");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "SCREEN_NAME", "&cd");

			DEFINE_STRING_CONSTANT(isolate, t, "CAMPAIGN_SOURCE", "&cs");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "CAMPAIGN_SOURCE", "&cs");

			DEFINE_STRING_CONSTANT(isolate, t, "TRANSACTION_ID", "&ti");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "TRANSACTION_ID", "&ti");

			DEFINE_STRING_CONSTANT(isolate, t, "ITEM_PRICE", "&ip");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "ITEM_PRICE", "&ip");

			DEFINE_STRING_CONSTANT(isolate, t, "CAMPAIGN_KEYWORD", "&ck");
			// TODO: deprecate in 7.0.0
			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "CAMPAIGN_KEYWORD", "&ck");


	// Dynamic properties -----------------------------------------------------

	// Accessors --------------------------------------------------------------

	return scope.Escape(t);
}

// Methods --------------------------------------------------------------------

// Dynamic property accessors -------------------------------------------------


} // googleanalytics
} // ti
