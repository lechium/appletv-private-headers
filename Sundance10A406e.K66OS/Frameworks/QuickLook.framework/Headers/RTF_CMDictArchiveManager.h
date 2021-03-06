/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "RTF_CMArchiveManager.h"

@class NSMutableString, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface RTF_CMDictArchiveManager : RTF_CMArchiveManager {
	NSMutableString *mCssString;	// 32 = 0x20
	NSMutableDictionary *mStyleCache;	// 36 = 0x24
	NSMutableDictionary *mResources;	// 40 = 0x28
	NSString *mPrefix;	// 44 = 0x2c
	NSString *mResourceUrlProtocol;	// 48 = 0x30
	NSMutableString *mMainHtml;	// 52 = 0x34
	NSString *mName;	// 56 = 0x38
	bool mIsFrameset;	// 60 = 0x3c
}
- (id)initWithName:(id)name resourcePathPrefix:(id)prefix;	// 0x30e06609
- (id)addCssStyle:(id)style;	// 0x30e06bad
- (void)addCssStyle:(id)style withName:(id)name;	// 0x30e06c85
- (id)copyDictionaryWithSizeInfos:(BOOL)sizeInfos;	// 0x30e069e5
- (id)cssStylesheetString;	// 0x30e06db5
- (void)dealloc;	// 0x30e06721
- (id)name;	// 0x30e067c1
- (id)newResourceWithName:(id)name;	// 0x30e067d1
- (void)pushCssToPath:(id)path;	// 0x30e06cdd
- (void)pushData:(id)data toPath:(id)path;	// 0x30e06891
- (void)pushText:(id)text toPath:(id)path;	// 0x30e06969
- (int)resourceCount;	// 0x30e06b7d
- (id)resourceUrlProtocol;	// 0x30e06b9d
- (void)setIsFrameset;	// 0x30e067ad
@end

