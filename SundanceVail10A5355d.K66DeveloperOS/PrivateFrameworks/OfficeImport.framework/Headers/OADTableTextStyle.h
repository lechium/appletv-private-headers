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
@property(assign) int bold;	// G=0x31d16511; S=0x31cbea3d; converted property
@property(retain) id color;	// G=0x31d16501; S=0x31cbe7d5; converted property
@property(retain) id fontReference;	// G=0x31dd5c81; S=0x31cbe431; converted property
@property(assign) int italic;	// G=0x31dd5c91; S=0x31dd5ca1; converted property
+ (int)defaultBold;	// 0x31dd5d7d
+ (id)defaultColor;	// 0x31dd5cb1
+ (id)defaultFontReference;	// 0x31dd5cf9
+ (int)defaultItalic;	// 0x31dd5d81
+ (id)defaultStyle;	// 0x31dd5d85
- (id)init;	// 0x31cbe3e5
- (void)applyOverridesFrom:(id)from;	// 0x31dd5f41
// converted property getter: - (int)bold;	// 0x31d16511
// converted property getter: - (id)color;	// 0x31d16501
- (void)dealloc;	// 0x31cc5d11
// converted property getter: - (id)fontReference;	// 0x31dd5c81
// converted property getter: - (int)italic;	// 0x31dd5c91
// converted property setter: - (void)setBold:(int)bold;	// 0x31cbea3d
// converted property setter: - (void)setColor:(id)color;	// 0x31cbe7d5
// converted property setter: - (void)setFontReference:(id)reference;	// 0x31cbe431
// converted property setter: - (void)setItalic:(int)italic;	// 0x31dd5ca1
- (id)shallowCopy;	// 0x31dd5e71
@end
