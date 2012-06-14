/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSCondition, NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSUDateParserLibrary : NSObject {
@private
	unsigned mMaxPermittedParsers;	// 4 = 0x4
	unsigned mNumberOfUses;	// 8 = 0x8
	unsigned mParsersCreated;	// 12 = 0xc
	NSMutableArray *mAvailableDateParsers;	// 16 = 0x10
	NSCondition *mParserLibraryConditionVariable;	// 20 = 0x14
}
+ (id)_singletonAlloc;	// 0x312d8c69
+ (id)allocWithZone:(NSZone *)zone;	// 0x312d8e1d
+ (id)sharedDateParserLibrary;	// 0x312d8c99
- (id)init;	// 0x312d8eb1
- (id)autorelease;	// 0x312d8ea9
- (id)checkoutDateParser;	// 0x312d8f71
- (id)copyWithZone:(NSZone *)zone;	// 0x312d8ead
- (oneway void)release;	// 0x312d8ea5
- (id)retain;	// 0x312d8e99
- (unsigned)retainCount;	// 0x312d8e9d
- (void)returnDateParser:(id)parser;	// 0x312d9201
@end

