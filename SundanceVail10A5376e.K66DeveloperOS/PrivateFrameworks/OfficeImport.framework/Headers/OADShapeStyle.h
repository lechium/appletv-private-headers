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
@property(retain) id effectReference;	// G=0x3714d46d; S=0x37038f29; converted property
@property(retain) id fillReference;	// G=0x37060ab9; S=0x37038eed; converted property
@property(retain) id fontReference;	// G=0x3709303d; S=0x37038f65; converted property
@property(retain) id lineReference;	// G=0x37060ad9; S=0x37038e85; converted property
- (void)applyToGraphicProperties:(id)graphicProperties styleMatrix:(id)matrix;	// 0x37038fa1
- (void)applyToGraphicProperties:(id)graphicProperties styleMatrix:(id)matrix useNull:(BOOL)null strokeWidthMultiplier:(float)multiplier;	// 0x37038fc5
- (void)applyToParagraphProperties:(id)paragraphProperties;	// 0x3703c309
- (void)applyToTextBody:(id)textBody;	// 0x3703c259
- (void)applyToTextListStyle:(id)textListStyle;	// 0x37056925
- (id)copyWithZone:(NSZone *)zone;	// 0x370606d5
- (void)dealloc;	// 0x37039941
// converted property getter: - (id)effectReference;	// 0x3714d46d
// converted property getter: - (id)fillReference;	// 0x37060ab9
// converted property getter: - (id)fontReference;	// 0x3709303d
// converted property getter: - (id)lineReference;	// 0x37060ad9
- (void)setEffectMatrixIndex:(unsigned long)index color:(id)color;	// 0x370c8f71
// converted property setter: - (void)setEffectReference:(id)reference;	// 0x37038f29
- (void)setFillMatrixIndex:(unsigned long)index color:(id)color;	// 0x37097efd
// converted property setter: - (void)setFillReference:(id)reference;	// 0x37038eed
// converted property setter: - (void)setFontReference:(id)reference;	// 0x37038f65
- (void)setLineMatrixIndex:(unsigned long)index color:(id)color;	// 0x370980d1
// converted property setter: - (void)setLineReference:(id)reference;	// 0x37038e85
@end

