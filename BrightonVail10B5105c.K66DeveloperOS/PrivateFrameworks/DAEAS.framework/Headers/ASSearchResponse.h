/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber;

@interface ASSearchResponse : ASItem {
	NSArray *_stores;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	int _expectedResultType;	// 48 = 0x30
}
@property(assign) int expectedResultType;	// G=0x33653771; S=0x33653785; @synthesize=_expectedResultType
@property(copy) NSNumber *status;	// G=0x3365374d; S=0x33653761; @synthesize=_status
@property(retain) NSArray *stores;	// G=0x33653729; S=0x3365373d; @synthesize=_stores
+ (BOOL)acceptsTopLevelLeaves;	// 0x33653251
+ (id)asParseRules;	// 0x336534c1
+ (BOOL)frontingBasicTypes;	// 0x3365334d
+ (BOOL)notifyOfUnknownTokens;	// 0x336533a1
+ (BOOL)parsingLeafNode;	// 0x336532a5
+ (BOOL)parsingWithSubItems;	// 0x336532f9
- (void)dealloc;	// 0x336533f5
- (id)description;	// 0x33653459
// declared property getter: - (int)expectedResultType;	// 0x33653771
// declared property setter: - (void)setExpectedResultType:(int)type;	// 0x33653785
// declared property setter: - (void)setStatus:(id)status;	// 0x33653761
// declared property setter: - (void)setStores:(id)stores;	// 0x3365373d
// declared property getter: - (id)status;	// 0x3365374d
// declared property getter: - (id)stores;	// 0x33653729
@end

