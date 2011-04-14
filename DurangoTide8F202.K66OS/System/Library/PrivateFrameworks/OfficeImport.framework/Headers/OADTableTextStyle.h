/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADColor, OADFontReference;

__attribute__((visibility("hidden")))
@interface OADTableTextStyle : NSObject {
@private
	OADFontReference *mFontReference;	// 4 = 0x4
	OADColor *mColor;	// 8 = 0x8
	int mBold;	// 12 = 0xc
	int mItalic;	// 16 = 0x10
}
@property(assign) int bold;	// G=0x31a77851; S=0x31a54dd9; converted property
@property(retain) id color;	// G=0x31a77841; S=0x31a54bb9; converted property
@property(retain) id fontReference;	// G=0x31ab7bad; S=0x31a54841; converted property
@property(assign) int italic;	// G=0x31ab7bbd; S=0x31ab7bcd; converted property
+ (int)defaultBold;	// 0x31ab7bdd
+ (id)defaultColor;	// 0x31ab8411
+ (id)defaultFontReference;	// 0x31ab8395
+ (int)defaultItalic;	// 0x31ab7be1
+ (id)defaultStyle;	// 0x31ab82a5
- (id)init;	// 0x31a547f9
- (void)applyOverridesFrom:(id)from;	// 0x31ab8109
// converted property getter: - (int)bold;	// 0x31a77851
// converted property getter: - (id)color;	// 0x31a77841
- (void)dealloc;	// 0x31a55c89
// converted property getter: - (id)fontReference;	// 0x31ab7bad
// converted property getter: - (int)italic;	// 0x31ab7bbd
// converted property setter: - (void)setBold:(int)bold;	// 0x31a54dd9
// converted property setter: - (void)setColor:(id)color;	// 0x31a54bb9
// converted property setter: - (void)setFontReference:(id)reference;	// 0x31a54841
// converted property setter: - (void)setItalic:(int)italic;	// 0x31ab7bcd
- (id)shallowCopy;	// 0x31ab81e1
@end

