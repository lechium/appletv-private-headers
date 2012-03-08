/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber, NSMutableArray;

@interface ASResolveRecipientsResponse : ASItem {
	NSMutableArray *_responses;	// 40 = 0x28
	NSNumber *_easStatus;	// 44 = 0x2c
}
@property(retain) NSNumber *easStatus;	// G=0x34435435; @synthesize=_easStatus
@property(retain) NSArray *responses;	// G=0x3443546d; S=0x34435481; @synthesize=_responses
+ (BOOL)acceptsTopLevelLeaves;	// 0x34434fdd
+ (BOOL)frontingBasicTypes;	// 0x344350d9
+ (BOOL)notifyOfUnknownTokens;	// 0x3443512d
+ (BOOL)parsingLeafNode;	// 0x34435031
+ (BOOL)parsingWithSubItems;	// 0x34435085
- (void)addResponse:(id)response;	// 0x34435181
- (id)asParseRules;	// 0x344351e5
- (void)dealloc;	// 0x344353d5
- (id)description;	// 0x3443535d
// declared property getter: - (id)easStatus;	// 0x34435435
// declared property getter: - (id)responses;	// 0x3443546d
- (void)setEASStatus:(id)status;	// 0x34435449
// declared property setter: - (void)setResponses:(id)responses;	// 0x34435481
@end

