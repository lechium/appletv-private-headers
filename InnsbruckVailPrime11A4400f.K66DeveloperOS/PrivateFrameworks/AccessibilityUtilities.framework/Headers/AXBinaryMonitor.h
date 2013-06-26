/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import </libobjc.A.h>

@class NSMutableDictionary;

@interface AXBinaryMonitor : NSObject {
	NSMutableDictionary *_bundleHandlerMap;	// 4 = 0x4
	NSMutableDictionary *_frameworkHandlerMap;	// 8 = 0x8
	NSMutableDictionary *_dylibHandlerMap;	// 12 = 0xc
}
@property(retain, nonatomic) NSMutableDictionary *bundleHandlerMap;	// G=0x2fe40065; S=0x2fe40075; @synthesize=_bundleHandlerMap
@property(retain, nonatomic) NSMutableDictionary *dylibHandlerMap;	// G=0x2fe400a5; S=0x2fe400b5; @synthesize=_dylibHandlerMap
@property(retain, nonatomic) NSMutableDictionary *frameworkHandlerMap;	// G=0x2fe40085; S=0x2fe40095; @synthesize=_frameworkHandlerMap
+ (void)initialize;	// 0x2fe3f63d
+ (id)sharedInstance;	// 0x2fe3f765
- (id)init;	// 0x2fe3f7d1
- (void)_addHandler:(id)handler withName:(id)name toMap:(id *)map;	// 0x2fe3fb7d
- (id)_bundleNameForImage:(id)image;	// 0x2fe3fe9d
- (id)_dylibNameForImage:(id)image;	// 0x2fe3ff81
- (id)_frameworkNameForImage:(id)image;	// 0x2fe3fdb9
- (void)_handleLoadedImagePath:(id)path;	// 0x2fe3f8dd
- (BOOL)_loadImageIsBundle:(id)bundle;	// 0x2fe3fd29
- (BOOL)_loadImageIsDylib:(id)dylib;	// 0x2fe3fd71
- (BOOL)_loadImageIsFramework:(id)framework;	// 0x2fe3fce1
- (void)addHandler:(id)handler forBundleID:(id)bundleID;	// 0x2fe3f9bd
- (void)addHandler:(id)handler forBundleName:(id)bundleName;	// 0x2fe3f9f1
- (void)addHandler:(id)handler forDylib:(id)dylib;	// 0x2fe3faf9
- (void)addHandler:(id)handler forFramework:(id)framework;	// 0x2fe3fa75
// declared property getter: - (id)bundleHandlerMap;	// 0x2fe40065
- (void)dealloc;	// 0x2fe3f871
// declared property getter: - (id)dylibHandlerMap;	// 0x2fe400a5
// declared property getter: - (id)frameworkHandlerMap;	// 0x2fe40085
// declared property setter: - (void)setBundleHandlerMap:(id)map;	// 0x2fe40075
// declared property setter: - (void)setDylibHandlerMap:(id)map;	// 0x2fe400b5
// declared property setter: - (void)setFrameworkHandlerMap:(id)map;	// 0x2fe40095
@end
