/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2016 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include <jni.h>

#include "Proxy.h"

namespace ti {
namespace googleanalytics {

class MapBuilderProxy : public titanium::Proxy
{
public:
	explicit MapBuilderProxy();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;

	// Methods -----------------------------------------------------------
	static void set(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createTiming(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createException(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setCampaignParamsFromUrl(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createSocial(const v8::FunctionCallbackInfo<v8::Value>&);
	static void build(const v8::FunctionCallbackInfo<v8::Value>&);
	static void get(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createItem(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createEvent(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createTransaction(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setAll(const v8::FunctionCallbackInfo<v8::Value>&);
	static void createAppView(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------

};

} // googleanalytics
} // ti
