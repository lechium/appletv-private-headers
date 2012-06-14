/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDRoot.h"


__attribute__((visibility("hidden")))
@interface GQDBGPresentation : GQDRoot {
@private
	CFArrayRef mThemes;	// 36 = 0x24
	CGSize mSlideSize;	// 40 = 0x28
	BOOL mIsOldAssetNameMapInitialized;	// 48 = 0x30
	CFDictionaryRef mOldAssetNameMap;	// 52 = 0x34
}
+ (xmlNs *)appNamespace;	// 0x36c435a5
+ (void)initialize;	// 0x36c43365
+ (id)parseNumberOutOfBasename:(id)basename returningNumber:(int *)number;	// 0x36c439e9
- (id)init;	// 0x36c43551
- (id).cxx_construct;	// 0x36c43dc5
- (void)addTheme:(id)theme;	// 0x36c43621
- (id)colorForMissingAppBundleResource:(CFStringRef)missingAppBundleResource processorBundle:(CFBundleRef)bundle;	// 0x36c43af9
- (CFStringRef)createUpgradedAppBundleResourcePath:(CFStringRef)path processorBundle:(CFBundleRef)bundle;	// 0x36c43dc9
- (CFURLRef)createUrlToAppBundleResource:(CFStringRef)appBundleResource processorBundle:(CFBundleRef)bundle;	// 0x36c43cb5
- (void)dealloc;	// 0x36c435b5
- (void)initializeAppBundleResourcesUrl;	// 0x36c43d99
- (void)loadAppBundleResourceToColorMap;	// 0x36c4364d
- (CGSize)slideSize;	// 0x36c43635
- (CFArrayRef)themes;	// 0x36c43611
@end

