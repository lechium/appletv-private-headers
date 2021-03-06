/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMArchiveManager.h"
#import "OfficeImport-Structs.h"

@class NSDate, NSMutableString, NSMutableDictionary;

@interface CMProgressiveArchiveManager : CMArchiveManager {
	const void *mClient;	// 44 = 0x2c
	XXStruct_1D5yyA *mCallBacks;	// 48 = 0x30
	NSMutableDictionary *mDataCache;	// 52 = 0x34
	NSMutableDictionary *mStyleCache;	// 56 = 0x38
	NSMutableString *mCssString;	// 60 = 0x3c
	BOOL mMainDataInited;	// 64 = 0x40
	NSDate *mStartDate;	// 68 = 0x44
	NSDate *mLastCommitDate;	// 72 = 0x48
	NSMutableString *mHtmlLogString;	// 76 = 0x4c
}
- (id)initWithClient:(const void *)client andCallBacks:(XXStruct_1D5yyA *)backs;	// 0x349d7acd
- (id)addCssStyle:(id)style;	// 0x34a50769
- (void)addCssStyle:(id)style withName:(id)name;	// 0x34bc66f9
- (void)closeResourceAtPath:(id)path;	// 0x34a56145
- (void)commitDataAtPath:(id)path;	// 0x34a508e1
- (id)copyResourceWithName:(id)name;	// 0x34bc6589
- (id)cssStylesheetString;	// 0x34a9cd39
- (void)dealloc;	// 0x34a67939
- (BOOL)isCancelled;	// 0x349f9241
- (BOOL)isProgressive;	// 0x34a59199
- (void)pushCssToPath:(id)path;	// 0x34a517d5
- (void)pushData:(id)data toPath:(id)path;	// 0x34a50bf5
- (void)pushText:(id)text toPath:(id)path;	// 0x34a50b41
@end

