/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _PFGarbageManager : NSObject {
@private
	NSMutableArray *_urlsToCleanUp;	// 4 = 0x4
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x330fffe1
+ (id)defaultInstance;	// 0x330ffff1
+ (void)initialize;	// 0x33100da5
- (id)_init__;	// 0x33100d41
- (BOOL)_isDeallocating;	// 0x33100011
- (BOOL)_tryRetain;	// 0x33100015
- (id)autorelease;	// 0x33100019
- (void)doCleanupForURL:(id)url;	// 0x33100dd9
- (void)registerURLForCleanup:(id)cleanup;	// 0x33100eb5
- (void)release;	// 0x3310000d
- (void)removeDirectory:(id)directory;	// 0x33100849
- (id)retain;	// 0x33100001
- (unsigned)retainCount;	// 0x33100005
- (id)temporaryLinksDirectoryForStore:(id)store;	// 0x331007e9
@end
