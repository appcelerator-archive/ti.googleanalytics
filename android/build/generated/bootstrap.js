/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 * Warning: This file is GENERATED, and should not be modified
 */
var bootstrap = kroll.NativeModule.require("bootstrap"),
	invoker = kroll.NativeModule.require("invoker"),
	Titanium = kroll.binding("Titanium").Titanium;

function moduleBootstrap(moduleBinding) {
	function lazyGet(object, binding, name, namespace) {
		return bootstrap.lazyGet(object, binding,
			name, namespace, moduleBinding.getBinding);
	}

	var module = moduleBinding.getBinding("ti.googleanalytics.GoogleanalyticsModule")["Googleanalytics"];
	var invocationAPIs = module.invocationAPIs = [];
	module.apiName = "Googleanalytics";

	function addInvocationAPI(module, moduleNamespace, namespace, api) {
		invocationAPIs.push({ namespace: namespace, api: api });
	}

	
		if (!("__propertiesDefined__" in module)) {Object.defineProperties(module, {
"Tracker": {
get: function() {
var Tracker =  lazyGet(this, "ti.googleanalytics.TrackerProxy", "Tracker", "Tracker");
return Tracker;
},
configurable: true
},
"Fields": {
get: function() {
var Fields =  lazyGet(this, "ti.googleanalytics.FieldsProxy", "Fields", "Fields");
return Fields;
},
configurable: true
},
"MapBuilder": {
get: function() {
var MapBuilder =  lazyGet(this, "ti.googleanalytics.MapBuilderProxy", "MapBuilder", "MapBuilder");
return MapBuilder;
},
configurable: true
},

});
}
module.__propertiesDefined__ = true;
return module;

}
exports.bootstrap = moduleBootstrap;
