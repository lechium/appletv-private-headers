/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "EDImmutableObject.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDRunsCollection, EDPhoneticInfo, NSString;

@interface EDString : NSObject <NSCopying, EDImmutableObject> {
	NSString *mString;	// 4 = 0x4
	EDRunsCollection *mRuns;	// 8 = 0x8
	EDPhoneticInfo *mPhoneticInfo;	// 12 = 0xc
	bool mDoNotModify;	// 16 = 0x10
}
@property(retain) id phoneticInfo;	// G=0x34ba8985; S=0x34ba8995; converted property
@property(retain) id runs;	// G=0x34a99439; S=0x34a9f649; converted property
@property(retain) id string;	// G=0x34a731ad; S=0x34a6e4e5; converted property
+ (id)edStringWithString:(id)string;	// 0x34a6e425
+ (id)edStringWithString:(id)string runs:(id)runs;	// 0x34c099e1
+ (id)string;	// 0x34c09999
- (id)init;	// 0x34a6e4a5
- (id)initWithString:(id)string;	// 0x34a6e471
- (id)initWithString:(id)string runs:(id)runs;	// 0x34c09965
- (bool)areThereRuns;	// 0x34b4ff59
- (id)copyWithZone:(NSZone *)zone;	// 0x34ba88c5
- (void)dealloc;	// 0x34a7fac5
- (id)firstRunFont;	// 0x34bd0d0d
- (unsigned)hash;	// 0x34c09a31
- (bool)isEmpty;	// 0x34b540b1
- (BOOL)isEqual:(id)equal;	// 0x34a73329
- (BOOL)isEqualToEDString:(id)edstring;	// 0x34a733bd
- (BOOL)isEqualToString:(id)string;	// 0x34b7a4ad
// converted property getter: - (id)phoneticInfo;	// 0x34ba8985
// converted property getter: - (id)runs;	// 0x34a99439
- (void)setDoNotModify:(bool)modify;	// 0x34a7d28d
// converted property setter: - (void)setPhoneticInfo:(id)info;	// 0x34ba8995
// converted property setter: - (void)setRuns:(id)runs;	// 0x34a9f649
// converted property setter: - (void)setString:(id)string;	// 0x34a6e4e5
// converted property getter: - (id)string;	// 0x34a731ad
@end

