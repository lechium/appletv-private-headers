/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSArray, NSMutableSet;

@interface WebPluginDatabase : NSObject {
@private
	NSMutableDictionary *plugins;	// 4 = 0x4
	NSMutableSet *registeredMIMETypes;	// 8 = 0x8
	NSArray *plugInPaths;	// 12 = 0xc
	NSMutableSet *pluginInstanceViews;	// 16 = 0x10
}
@property(readonly, retain) NSMutableDictionary *plugins;	// G=0x34528d2d; converted property
+ (id)_defaultPlugInPaths;	// 0x34525bb9
+ (void)closeSharedDatabase;	// 0x34574bf9
+ (void)setAdditionalWebPlugInPaths:(id)paths;	// 0x34574bb9
+ (id)sharedDatabase;	// 0x34525a95
- (id)init;	// 0x34525b25
- (void)_addPlugin:(id)plugin;	// 0x34527afd
- (id)_plugInPaths;	// 0x3452625d
- (void)_removePlugin:(id)plugin;	// 0x34574ee5
- (id)_scanForNewPlugins;	// 0x34526095
- (void)addPluginInstanceView:(id)view;	// 0x34574999
- (void)close;	// 0x345748e5
- (void)dealloc;	// 0x34574c15
- (void)destroyAllPluginInstanceViews;	// 0x34574af5
- (BOOL)isMIMETypeRegistered:(id)registered;	// 0x34574971
- (id)pluginForExtension:(id)extension;	// 0x34574c9d
- (id)pluginForMIMEType:(id)mimetype;	// 0x34527c51
// converted property getter: - (id)plugins;	// 0x34528d2d
- (void)refresh;	// 0x34525c81
- (void)removePluginInstanceView:(id)view;	// 0x345749bd
- (void)removePluginInstanceViewsFor:(id)aFor;	// 0x345749e1
- (void)setPlugInPaths:(id)paths;	// 0x34525c39
@end

