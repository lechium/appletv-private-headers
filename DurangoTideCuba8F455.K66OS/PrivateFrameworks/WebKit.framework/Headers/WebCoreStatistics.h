/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library


@interface WebCoreStatistics : NSObject {
}
+ (int)autoreleasedPageCount;	// 0x30512fc1
+ (unsigned long)cachedFontDataCount;	// 0x30512c41
+ (unsigned long)cachedFontDataInactiveCount;	// 0x30512c51
+ (int)cachedFrameCount;	// 0x30512fb1
+ (int)cachedPageCount;	// 0x30512fa5
+ (void)emptyCache;	// 0x30501641
+ (void)garbageCollectJavaScriptObjects;	// 0x30512bd5
+ (void)garbageCollectJavaScriptObjectsOnAlternateThreadForDebugging:(BOOL)debugging;	// 0x30512be5
+ (unsigned long)glyphPageCount;	// 0x30512c75
+ (unsigned long)iconPageURLMappingCount;	// 0x30512c01
+ (unsigned long)iconRecordCount;	// 0x30512c21
+ (unsigned long)iconRetainedPageURLCount;	// 0x30512c11
+ (unsigned long)iconsWithDataCount;	// 0x30512c31
+ (unsigned long)javaScriptGlobalObjectsCount;	// 0x3051257d
+ (unsigned long)javaScriptInterpretersCount;	// 0x305124b5
+ (unsigned long)javaScriptNoGCAllowedObjectsCount;	// 0x3051245d
+ (id)javaScriptObjectTypeCounts;	// 0x305129e9
+ (unsigned long)javaScriptObjectsCount;	// 0x305124dd
+ (unsigned long)javaScriptProtectedGlobalObjectsCount;	// 0x3051275d
+ (id)javaScriptProtectedObjectTypeCounts;	// 0x305127fd
+ (unsigned long)javaScriptProtectedObjectsCount;	// 0x3051261d
+ (unsigned long)javaScriptReferencedObjectsCount;	// 0x305126bd
+ (id)javaScriptRootObjectClasses;	// 0x305124a1
+ (id)javaScriptRootObjectTypeCounts;	// 0x305124c9
+ (id)memoryStatistics;	// 0x30512dd1
+ (void)purgeInactiveFontData;	// 0x30512c61
+ (void)returnFreeMemoryToSystem;	// 0x30512f99
+ (void)setCacheDisabled:(BOOL)disabled;	// 0x30512481
+ (void)setShouldPrintExceptions:(BOOL)printExceptions;	// 0x30512d15
+ (BOOL)shouldPrintExceptions;	// 0x30512c81
+ (void)startIgnoringWebCoreNodeLeaks;	// 0x30512db9
+ (id)statistics;	// 0x30512461
+ (void)stopIgnoringWebCoreNodeLeaks;	// 0x30512dc5
@end
