/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class OADStyleMatrixReference, OADFontReference;

@interface OADShapeStyle : NSObject <NSCopying> {
	OADStyleMatrixReference *mLineReference;	// 4 = 0x4
	OADStyleMatrixReference *mFillReference;	// 8 = 0x8
	OADStyleMatrixReference *mEffectReference;	// 12 = 0xc
	OADFontReference *mFontReference;	// 16 = 0x10
}
@property(retain) id effectReference;	// G=0x34a5046d; S=0x3493bf29; converted property
@property(retain) id fillReference;	// G=0x34963ab9; S=0x3493beed; converted property
@property(retain) id fontReference;	// G=0x3499603d; S=0x3493bf65; converted property
@property(retain) id lineReference;	// G=0x34963ad9; S=0x3493be85; converted property
- (void)applyToGraphicProperties:(id)graphicProperties styleMatrix:(id)matrix;	// 0x3493bfa1
- (void)applyToGraphicProperties:(id)graphicProperties styleMatrix:(id)matrix useNull:(BOOL)null strokeWidthMultiplier:(float)multiplier;	// 0x3493bfc5
- (void)applyToParagraphProperties:(id)paragraphProperties;	// 0x3493f309
- (void)applyToTextBody:(id)textBody;	// 0x3493f259
- (void)applyToTextListStyle:(id)textListStyle;	// 0x34959925
- (id)copyWithZone:(NSZone *)zone;	// 0x349636d5
- (void)dealloc;	// 0x3493c941
// converted property getter: - (id)effectReference;	// 0x34a5046d
// converted property getter: - (id)fillReference;	// 0x34963ab9
// converted property getter: - (id)fontReference;	// 0x3499603d
// converted property getter: - (id)lineReference;	// 0x34963ad9
- (void)setEffectMatrixIndex:(unsigned long)index color:(id)color;	// 0x349cbf71
// converted property setter: - (void)setEffectReference:(id)reference;	// 0x3493bf29
- (void)setFillMatrixIndex:(unsigned long)index color:(id)color;	// 0x3499aefd
// converted property setter: - (void)setFillReference:(id)reference;	// 0x3493beed
// converted property setter: - (void)setFontReference:(id)reference;	// 0x3493bf65
- (void)setLineMatrixIndex:(unsigned long)index color:(id)color;	// 0x3499b0d1
// converted property setter: - (void)setLineReference:(id)reference;	// 0x3493be85
@end

