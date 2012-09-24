/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSArray, NSMutableDictionary;

@interface WebPluginDatabase : NSObject {
	NSMutableDictionary *plugins;	// 4 = 0x4
	NSMutableSet *registeredMIMETypes;	// 8 = 0x8
	NSArray *plugInPaths;	// 12 = 0xc
	NSMutableSet *pluginInstanceViews;	// 16 = 0x10
}
@property(readonly, retain) NSMutableDictionary *plugins;	// G=0x3168c029; converted property
+ (id)_defaultPlugInPaths;	// 0x31689735
+ (void)closeSharedDatabase;	// 0x316eb1b5
+ (void)setAdditionalWebPlugInPaths:(id)paths;	// 0x316eb441
+ (id)sharedDatabase;	// 0x31689621
- (id)init;	// 0x316896a5
- (void)_addPlugin:(id)plugin;	// 0x3168b3a9
- (id)_plugInPaths;	// 0x31689d65
- (void)_removePlugin:(id)plugin;	// 0x316eb7ed
- (id)_scanForNewPlugins;	// 0x31689ba1
- (void)addPluginInstanceView:(id)view;	// 0x316eb5c5
- (void)close;	// 0x316eb481
- (void)dealloc;	// 0x316eb515
- (void)destroyAllPluginInstanceViews;	// 0x316eb721
- (BOOL)isMIMETypeRegistered:(id)registered;	// 0x316eb5a1
- (id)pluginForExtension:(id)extension;	// 0x316eb1d1
- (id)pluginForMIMEType:(id)mimetype;	// 0x3168b4fd
// converted property getter: - (id)plugins;	// 0x3168c029
- (void)refresh;	// 0x316897f9
- (void)removePluginInstanceView:(id)view;	// 0x316eb5e5
- (void)removePluginInstanceViewsFor:(id)aFor;	// 0x316eb605
- (void)setPlugInPaths:(id)paths;	// 0x316897b5
@end
