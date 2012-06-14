/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASParsingWithSubItems.h"
#import "ASParsingFrontingBasicType.h"
#import "ASItem.h"

@class NSMutableArray, NSDictionary;

@interface ASArray : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType> {
	NSMutableArray *_items;	// 40 = 0x28
	NSDictionary *_subclassRuleSet;	// 44 = 0x2c
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x3096566d
+ (BOOL)frontingBasicTypes;	// 0x30965769
+ (BOOL)notifyOfUnknownTokens;	// 0x309657bd
+ (BOOL)parsingLeafNode;	// 0x309656c1
+ (BOOL)parsingWithSubItems;	// 0x30965715
- (id)initWithSubclassRuleSet:(id)subclassRuleSet;	// 0x30965811
- (void)addItem:(id)item;	// 0x30965935
- (id)asParseRules;	// 0x30965925
- (id)commonValue;	// 0x309659a1
- (void)dealloc;	// 0x30965865
- (id)description;	// 0x309658c9
@end

