/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASParsingAcceptingTopLevelLeaves.h"
#import "ASParsingWithSubItems.h"
#import "ASItem.h"
#import "ASParsingFrontingBasicType.h"

@class NSDictionary, NSMutableDictionary;

@interface ASDictionary : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType, ASParsingAcceptingTopLevelLeaves> {
	NSMutableDictionary *_items;	// 40 = 0x28
	NSDictionary *_subclassRuleSet;	// 44 = 0x2c
	NSMutableDictionary *_placeHolder;	// 48 = 0x30
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x33be7539
+ (BOOL)frontingBasicTypes;	// 0x33be7635
+ (BOOL)notifyOfUnknownTokens;	// 0x33be7689
+ (BOOL)parsingLeafNode;	// 0x33be758d
+ (BOOL)parsingWithSubItems;	// 0x33be75e1
- (id)initWithSubclassRuleSet:(id)subclassRuleSet;	// 0x33be76dd
- (void)_setItems:(id)items;	// 0x33be7849
- (void)applyPlaceHolder;	// 0x33be788d
- (id)asParseRules;	// 0x33be7839
- (void)clearPlaceHolder;	// 0x33be78ad
- (id)commonValue;	// 0x33be7901
- (void)dealloc;	// 0x33be7765
- (id)description;	// 0x33be77dd
- (void)setObject:(id)object forDCCPT:(int)dccpt;	// 0x33be78d9
@end
