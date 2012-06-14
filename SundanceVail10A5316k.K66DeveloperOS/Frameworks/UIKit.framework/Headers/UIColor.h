/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "NSCopying.h"

@class NSString, CIColor;

@interface UIColor : NSObject <NSCoding, NSCopying> {
@private
	NSString *_systemColorName;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CGColorRef CGColor;	// G=0x302af18d; 
@property(readonly, assign, nonatomic) CIColor *CIColor;	// G=0x302af1dd; 
@property(retain, nonatomic, getter=_systemColorName, setter=_setSystemColorName:) NSString *systemColorName;	// G=0x300d1975; S=0x300bee1d; 
+ (id)_dimmingViewColor;	// 0x302af8ed
+ (id)_systemColorForColor:(id)color withName:(id)name;	// 0x30150e95
+ (id)_systemColorWithName:(id)name;	// 0x300d2151
+ (id)_translucentPaperTextureColor;	// 0x302af835
+ (id)allocWithZone:(NSZone *)zone;	// 0x30095b0d
+ (id)blackColor;	// 0x300b60a9
+ (id)blueColor;	// 0x302ae651
+ (id)brownColor;	// 0x302ae9d9
+ (id)classFallbacksForKeyedArchiver;	// 0x302ae009
+ (id)clearColor;	// 0x300ee1cd
+ (id)colorWithCGColor:(CGColorRef)cgcolor;	// 0x300f985d
+ (id)colorWithCIColor:(id)cicolor;	// 0x302adba5
+ (id)colorWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x302adb3d
+ (id)colorWithPatternImage:(id)patternImage;	// 0x3014dfd9
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x300df82d
+ (id)colorWithWhite:(float)white alpha:(float)alpha;	// 0x30095abd
+ (id)cyanColor;	// 0x302ae701
+ (id)darkGrayColor;	// 0x301adca5
+ (id)darkTextColor;	// 0x302af401
+ (id)grayColor;	// 0x300e86e5
+ (id)greenColor;	// 0x302ae59d
+ (id)groupTableViewBackgroundColor;	// 0x30150ba5
+ (id)infoTextOverPinStripeTextColor;	// 0x3021732d
+ (void)initialize;	// 0x300beda9
+ (id)insertionPointColor;	// 0x300d37b9
+ (id)lightGrayColor;	// 0x3012c009
+ (id)lightTextColor;	// 0x302af351
+ (id)magentaColor;	// 0x302ae86d
+ (id)noContentDarkGradientBackgroundColor;	// 0x302af711
+ (id)noContentLightGradientBackgroundColor;	// 0x302af699
+ (id)orangeColor;	// 0x301527b1
+ (id)pinStripeColor;	// 0x30150dd9
+ (id)purpleColor;	// 0x302ae921
+ (id)redColor;	// 0x302ae4e9
+ (id)scrollViewTexturedBackgroundColor;	// 0x302af621
+ (id)sectionHeaderBackgroundColor;	// 0x302aee51
+ (id)sectionHeaderBorderColor;	// 0x302aefdd
+ (id)sectionHeaderOpaqueBackgroundColor;	// 0x302aef19
+ (id)sectionListBorderColor;	// 0x301a1ea9
+ (id)selectionHighlightColor;	// 0x300d38a1
+ (id)tableBackgroundColor;	// 0x300d135d
+ (id)tableCellBlueTextColor;	// 0x301a7131
+ (id)tableCellGrayTextColor;	// 0x3014ad55
+ (id)tableCellGroupedBackgroundColor;	// 0x30152a5d
+ (id)tableCellGroupedBackgroundColorLegacyWhite;	// 0x302aea9d
+ (id)tableCellPlainBackgroundColor;	// 0x300ea0e1
+ (id)tableCellValue1BlueColor;	// 0x30151195
+ (id)tableCellValue2BlueColor;	// 0x30208d05
+ (id)tableGroupedSeparatorLightColor;	// 0x30150f25
+ (id)tableGroupedTopShadowColor;	// 0x302aed99
+ (id)tableSelectionColor;	// 0x301ace51
+ (id)tableSelectionGradientEndColor;	// 0x302aec19
+ (id)tableSelectionGradientStartColor;	// 0x302aeb55
+ (id)tableSeparatorDarkColor;	// 0x30154bb5
+ (id)tableSeparatorLightColor;	// 0x300d2175
+ (id)tableShadowColor;	// 0x302aecdd
+ (id)textFieldAtomBlueColor;	// 0x301efef1
+ (id)textFieldAtomPurpleColor;	// 0x301f0031
+ (id)underPageBackgroundColor;	// 0x302af569
+ (id)viewFlipsideBackgroundColor;	// 0x302af4b1
+ (id)whiteColor;	// 0x3009c155
+ (id)yellowColor;	// 0x302ae7b5
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x3014e05d
- (id)initWithCIColor:(id)cicolor;	// 0x302adc49
- (id)initWithCoder:(id)coder;	// 0x302adcb5
- (id)initWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x302adbf5
- (id)initWithPatternImage:(id)patternImage;	// 0x3014e029
- (id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x300f97b5
- (id)initWithWhite:(float)white alpha:(float)alpha;	// 0x300d51ad
// declared property getter: - (CGColorRef)CGColor;	// 0x302af18d
// declared property getter: - (id)CIColor;	// 0x302af1dd
- (BOOL)_getWhite:(float *)white alpha:(float *)alpha;	// 0x302af329
// declared property setter: - (void)_setSystemColorName:(id)name;	// 0x300bee1d
// declared property getter: - (id)_systemColorName;	// 0x300d1975
- (float)alphaComponent;	// 0x302af341
- (CGColorRef)cgColor;	// 0x3014e1b9
- (Class)classForCoder;	// 0x302adc99
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x302af189
- (id)copyWithZone:(NSZone *)zone;	// 0x302af27d
- (void)dealloc;	// 0x3009801d
- (void)encodeWithCoder:(id)coder;	// 0x302ae041
- (BOOL)getHue:(float *)hue saturation:(float *)saturation brightness:(float *)brightness alpha:(float *)alpha;	// 0x302af321
- (BOOL)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x302af325
- (BOOL)getWhite:(float *)white alpha:(float *)alpha;	// 0x302af31d
- (unsigned)hash;	// 0x302af2cd
- (BOOL)isEqual:(id)equal;	// 0x302af22d
- (BOOL)isPatternColor;	// 0x302af349
- (void)set;	// 0x302af0a5
- (void)setFill;	// 0x302af0f1
- (void)setStroke;	// 0x302af13d
- (id)styleString;	// 0x3014e49d
@end

