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
@property(assign) int bold;	// G=0x32c99851; S=0x32c76dd9; converted property
@property(retain) id color;	// G=0x32c99841; S=0x32c76bb9; converted property
@property(retain) id fontReference;	// G=0x32cd9bad; S=0x32c76841; converted property
@property(assign) int italic;	// G=0x32cd9bbd; S=0x32cd9bcd; converted property
+ (int)defaultBold;	// 0x32cd9bdd
+ (id)defaultColor;	// 0x32cda411
+ (id)defaultFontReference;	// 0x32cda395
+ (int)defaultItalic;	// 0x32cd9be1
+ (id)defaultStyle;	// 0x32cda2a5
- (id)init;	// 0x32c767f9
- (void)applyOverridesFrom:(id)from;	// 0x32cda109
// converted property getter: - (int)bold;	// 0x32c99851
// converted property getter: - (id)color;	// 0x32c99841
- (void)dealloc;	// 0x32c77c89
// converted property getter: - (id)fontReference;	// 0x32cd9bad
// converted property getter: - (int)italic;	// 0x32cd9bbd
// converted property setter: - (void)setBold:(int)bold;	// 0x32c76dd9
// converted property setter: - (void)setColor:(id)color;	// 0x32c76bb9
// converted property setter: - (void)setFontReference:(id)reference;	// 0x32c76841
// converted property setter: - (void)setItalic:(int)italic;	// 0x32cd9bcd
- (id)shallowCopy;	// 0x32cda1e1
@end

