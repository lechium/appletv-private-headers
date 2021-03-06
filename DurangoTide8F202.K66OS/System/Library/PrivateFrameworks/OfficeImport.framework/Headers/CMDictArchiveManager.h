/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMArchiveManager.h"

@class NSMutableDictionary, NSString, NSMutableString;

__attribute__((visibility("hidden")))
@interface CMDictArchiveManager : CMArchiveManager {
@private
	NSMutableString *mCssString;	// 40 = 0x28
	NSMutableDictionary *mStyleCache;	// 44 = 0x2c
	NSMutableDictionary *mResources;	// 48 = 0x30
	NSString *mPrefix;	// 52 = 0x34
	NSString *mResourceUrlProtocol;	// 56 = 0x38
	NSMutableString *mMainHtml;	// 60 = 0x3c
	NSString *mName;	// 64 = 0x40
	bool mIsFrameset;	// 68 = 0x44
}
- (id)initWithName:(id)name resourcePathPrefix:(id)prefix;	// 0x31aa1025
- (id)addCssStyle:(id)style;	// 0x31aa0b15
- (void)addCssStyle:(id)style withName:(id)name;	// 0x31aa0ac5
- (id)createDictionaryWithSizeInfos:(BOOL)sizeInfos;	// 0x31aa0c05
- (id)createResourceWithName:(id)name;	// 0x31aa0f01
- (id)cssStylesheetString;	// 0x31aa09e9
- (void)dealloc;	// 0x31aa0fa5
- (id)name;	// 0x31aa09c9
- (void)pushCssToPath:(id)path;	// 0x31aa09f9
- (void)pushData:(id)data toPath:(id)path;	// 0x31aa0e45
- (void)pushText:(id)text toPath:(id)path;	// 0x31aa0ddd
- (int)resourceCount;	// 0x31aa0be5
- (id)resourceUrlProtocol;	// 0x31aa09d9
- (void)setIsFrameset;	// 0x31aa09b9
@end

