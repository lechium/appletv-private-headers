/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADFontReference, OADColor;

@interface OADTableTextStyle : NSObject {
	OADFontReference *mFontReference;	// 4 = 0x4
	OADColor *mColor;	// 8 = 0x8
	int mBold;	// 12 = 0xc
	int mItalic;	// 16 = 0x10
}
@property(assign) int bold;	// G=0x34b6f531; S=0x34b17a85; converted property
@property(retain) id color;	// G=0x34b6f521; S=0x34b1781d; converted property
@property(retain) id fontReference;	// G=0x34c2ed31; S=0x34b17479; converted property
@property(assign) int italic;	// G=0x34c2ed41; S=0x34c2ed51; converted property
+ (int)defaultBold;	// 0x34c2ee2d
+ (id)defaultColor;	// 0x34c2ed61
+ (id)defaultFontReference;	// 0x34c2eda9
+ (int)defaultItalic;	// 0x34c2ee31
+ (id)defaultStyle;	// 0x34c2ee35
- (id)init;	// 0x34b1742d
- (void)applyOverridesFrom:(id)from;	// 0x34c2eff1
// converted property getter: - (int)bold;	// 0x34b6f531
// converted property getter: - (id)color;	// 0x34b6f521
- (void)dealloc;	// 0x34b1ed59
// converted property getter: - (id)fontReference;	// 0x34c2ed31
// converted property getter: - (int)italic;	// 0x34c2ed41
// converted property setter: - (void)setBold:(int)bold;	// 0x34b17a85
// converted property setter: - (void)setColor:(id)color;	// 0x34b1781d
// converted property setter: - (void)setFontReference:(id)reference;	// 0x34b17479
// converted property setter: - (void)setItalic:(int)italic;	// 0x34c2ed51
- (id)shallowCopy;	// 0x34c2ef21
@end

