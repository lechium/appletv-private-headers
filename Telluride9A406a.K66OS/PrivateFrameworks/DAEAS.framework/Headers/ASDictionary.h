/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASParsingAcceptingTopLevelLeaves.h"
#import "ASItem.h"
#import "ASParsingWithSubItems.h"
#import "ASParsingFrontingBasicType.h"

@class NSMutableDictionary, NSDictionary;

@interface ASDictionary : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType, ASParsingAcceptingTopLevelLeaves> {
	NSMutableDictionary *_items;	// 40 = 0x28
	NSDictionary *_subclassRuleSet;	// 44 = 0x2c
	NSMutableDictionary *_placeHolder;	// 48 = 0x30
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x34401d65
+ (BOOL)frontingBasicTypes;	// 0x34401e61
+ (BOOL)notifyOfUnknownTokens;	// 0x34401eb5
+ (BOOL)parsingLeafNode;	// 0x34401db9
+ (BOOL)parsingWithSubItems;	// 0x34401e0d
- (id)initWithSubclassRuleSet:(id)subclassRuleSet;	// 0x34401f09
- (void)_setItems:(id)items;	// 0x3440206d
- (void)applyPlaceHolder;	// 0x344020b1
- (id)asParseRules;	// 0x3440205d
- (void)clearPlaceHolder;	// 0x344020d1
- (id)commonValue;	// 0x3440211d
- (void)dealloc;	// 0x34401f8d
- (id)description;	// 0x34402001
- (void)setObject:(id)object forDCCPT:(int)dccpt;	// 0x344020fd
@end

