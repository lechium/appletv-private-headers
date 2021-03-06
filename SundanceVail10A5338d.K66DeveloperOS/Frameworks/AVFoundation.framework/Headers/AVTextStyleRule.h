/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVTextStyleRuleInternal, NSDictionary, NSString;

@interface AVTextStyleRule : NSObject <NSCopying> {
	AVTextStyleRuleInternal *_textStyleRule;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSDictionary *textMarkupAttributes;	// G=0x317eef2d; 
@property(readonly, assign, nonatomic) NSString *textSelector;	// G=0x317eef4d; 
+ (id)propertyListForTextStyleRules:(id)textStyleRules;	// 0x317ee805
+ (id)textStyleRuleWithTextMarkupAttributes:(id)textMarkupAttributes;	// 0x317eebd1
+ (id)textStyleRuleWithTextMarkupAttributes:(id)textMarkupAttributes textSelector:(id)selector;	// 0x317eebe5
+ (id)textStyleRulesFromPropertyList:(id)propertyList;	// 0x317ee905
- (id)initWithTextMarkupAttributes:(id)textMarkupAttributes;	// 0x317eec31
- (id)initWithTextMarkupAttributes:(id)textMarkupAttributes textSelector:(id)selector;	// 0x317eec45
- (id)_dictionaryPlistRepresentation;	// 0x317eef6d
- (id)copyWithZone:(NSZone *)zone;	// 0x317eeddd
- (void)dealloc;	// 0x317eed15
- (void)finalize;	// 0x317eed99
- (unsigned)hash;	// 0x317eeed1
- (BOOL)isEqual:(id)equal;	// 0x317eeded
// declared property getter: - (id)textMarkupAttributes;	// 0x317eef2d
// declared property getter: - (id)textSelector;	// 0x317eef4d
@end

