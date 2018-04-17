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

class GoogleanalyticsModule : public titanium::Proxy
{
public:
	explicit GoogleanalyticsModule();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;

	// Methods -----------------------------------------------------------
	static void getDefaultTracker(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getOptOut(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getMapBuilder(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getFields(const v8::FunctionCallbackInfo<v8::Value>&);
	static void closeTracker(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setDefaultTracker(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setOptOut(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getTracker(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getDryRun(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setDryRun(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_optOut(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_optOut(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_defaultTracker(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_defaultTracker(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_dryRun(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_dryRun(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_tracker(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_mapBuilder(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_fields(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

} // googleanalytics
} // ti
