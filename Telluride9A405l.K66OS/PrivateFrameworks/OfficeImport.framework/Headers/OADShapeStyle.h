/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class OADFontReference, OADStyleMatrixReference;

__attribute__((visibility("hidden")))
@interface OADShapeStyle : NSObject <NSCopying> {
@private
	OADStyleMatrixReference *mLineReference;	// 4 = 0x4
	OADStyleMatrixReference *mFillReference;	// 8 = 0x8
	OADStyleMatrixReference *mEffectReference;	// 12 = 0xc
	OADFontReference *mFontReference;	// 16 = 0x10
}
@property(retain) id effectReference;	// G=0x30e88311; S=0x30d9b715; converted property
@property(retain) id fillReference;	// G=0x30db0c1d; S=0x30d9b6d5; converted property
@property(retain) id fontReference;	// G=0x30dd4a11; S=0x30d9b755; converted property
@property(retain) id lineReference;	// G=0x30db0c3d; S=0x30d9b669; converted property
- (void)applyToGraphicProperties:(id)graphicProperties styleMatrix:(id)matrix;	// 0x30d9b795
- (void)applyToGraphicProperties:(id)graphicProperties styleMatrix:(id)matrix useNull:(BOOL)null strokeWidthMultiplier:(float)multiplier;	// 0x30d9b7b9
- (void)applyToParagraphProperties:(id)paragraphProperties;	// 0x30d9cf4d
- (void)applyToTextBody:(id)textBody;	// 0x30d9cead
- (void)applyToTextListStyle:(id)textListStyle;	// 0x30da7591
- (id)copyWithZone:(NSZone *)zone;	// 0x30db0819
- (void)dealloc;	// 0x30d9d131
// converted property getter: - (id)effectReference;	// 0x30e88311
// converted property getter: - (id)fillReference;	// 0x30db0c1d
// converted property getter: - (id)fontReference;	// 0x30dd4a11
// converted property getter: - (id)lineReference;	// 0x30db0c3d
- (void)setEffectMatrixIndex:(unsigned long)index color:(id)color;	// 0x30de8809
// converted property setter: - (void)setEffectReference:(id)reference;	// 0x30d9b715
- (void)setFillMatrixIndex:(unsigned long)index color:(id)color;	// 0x30dc33c1
// converted property setter: - (void)setFillReference:(id)reference;	// 0x30d9b6d5
// converted property setter: - (void)setFontReference:(id)reference;	// 0x30d9b755
- (void)setLineMatrixIndex:(unsigned long)index color:(id)color;	// 0x30dc359d
// converted property setter: - (void)setLineReference:(id)reference;	// 0x30d9b669
@end

