/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class ODDFillColorList;

__attribute__((visibility("hidden")))
@interface ODDColorTransformStyleLabel : NSObject {
@private
	ODDFillColorList *mFillColors;	// 4 = 0x4
	ODDFillColorList *mLineColors;	// 8 = 0x8
	ODDFillColorList *mEffectColors;	// 12 = 0xc
	ODDFillColorList *mTextLineColors;	// 16 = 0x10
	ODDFillColorList *mTextFillColors;	// 20 = 0x14
	ODDFillColorList *mTextEffectColors;	// 24 = 0x18
}
@property(retain) id effectColors;	// G=0x32902c4d; S=0x328fc6f9; converted property
@property(retain) id fillColors;	// G=0x32902b35; S=0x328fc679; converted property
@property(retain) id lineColors;	// G=0x32902c2d; S=0x328fc6b9; converted property
@property(retain) id textEffectColors;	// G=0x329e33f1; S=0x328fc7b9; converted property
@property(retain) id textFillColors;	// G=0x32902c5d; S=0x328fc779; converted property
@property(retain) id textLineColors;	// G=0x329e33e1; S=0x328fc739; converted property
- (void)applyToShapeStyle:(id)shapeStyle index:(unsigned)index count:(unsigned)count state:(id)state;	// 0x329029e9
- (void)dealloc;	// 0x329047f9
// converted property getter: - (id)effectColors;	// 0x32902c4d
// converted property getter: - (id)fillColors;	// 0x32902b35
// converted property getter: - (id)lineColors;	// 0x32902c2d
// converted property setter: - (void)setEffectColors:(id)colors;	// 0x328fc6f9
// converted property setter: - (void)setFillColors:(id)colors;	// 0x328fc679
// converted property setter: - (void)setLineColors:(id)colors;	// 0x328fc6b9
// converted property setter: - (void)setTextEffectColors:(id)colors;	// 0x328fc7b9
// converted property setter: - (void)setTextFillColors:(id)colors;	// 0x328fc779
// converted property setter: - (void)setTextLineColors:(id)colors;	// 0x328fc739
// converted property getter: - (id)textEffectColors;	// 0x329e33f1
// converted property getter: - (id)textFillColors;	// 0x32902c5d
// converted property getter: - (id)textLineColors;	// 0x329e33e1
@end

