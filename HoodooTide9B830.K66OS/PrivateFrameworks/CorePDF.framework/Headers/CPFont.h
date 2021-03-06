/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library
#import "CPDisposable.h"

@class NSString;

@interface CPFont : NSObject <CPDisposable> {
	CGPDFFontRef cgPDFFont;	// 4 = 0x4
	CGFontRef cgFont;	// 8 = 0x8
	NSString *fontName;	// 12 = 0xc
	BOOL exactMatch;	// 16 = 0x10
	XXStruct_FvSZlC descriptor;	// 20 = 0x14
	CFDictionaryRef kernDictionary;	// 104 = 0x68
	double kernUnitsPerEm;	// 108 = 0x6c
	BOOL disposed;	// 116 = 0x74
}
@property(readonly, assign) CGFontRef cgFont;	// G=0x3108f5bd; converted property
@property(readonly, assign) CGPDFFontRef cgPDFFont;	// G=0x3108e6e5; converted property
@property(readonly, retain) NSString *fontName;	// G=0x3108e6f5; converted property
- (id)initWith:(CGPDFDictionaryRef)with;	// 0x3108f69d
- (float)ascent;	// 0x3108e771
- (float)avgWidth;	// 0x3108e7fd
- (float)capHeight;	// 0x3108e7ad
// converted property getter: - (CGFontRef)cgFont;	// 0x3108f5bd
// converted property getter: - (CGPDFFontRef)cgPDFFont;	// 0x3108e6e5
- (void)dealloc;	// 0x3108f5f1
- (float)descent;	// 0x3108e785
- (void)dispose;	// 0x3108f64d
- (void)finalize;	// 0x3108f339
- (unsigned)flags;	// 0x3108e729
- (CGRect)fontBBox;	// 0x3108e73d
// converted property getter: - (id)fontName;	// 0x3108e6f5
- (float)fontStretch;	// 0x3108e705
- (float)fontWeight;	// 0x3108e715
- (void)getFontName;	// 0x3108ebc5
- (BOOL)getGlyphs:(unsigned short *)glyphs forCodes:(const unsigned short *)codes count:(unsigned)count;	// 0x3108f409
- (BOOL)isSameFontAs:(id)as;	// 0x3108e875
- (float)italicAngle;	// 0x3108e75d
- (double)kernBetweenUnicode:(unsigned short)unicode andUnicode:(unsigned short)unicode2;	// 0x3108f529
- (float)leading;	// 0x3108e799
- (void)loadEmbeddedFontInfo;	// 0x3108ee2d
- (void)loadExternalFontInfoFor:(id)aFor;	// 0x3108ece5
- (id)matchingFontName;	// 0x3108e8ad
- (float)maxWidth;	// 0x3108e811
- (float)missingWidth;	// 0x3108e825
- (float)spaceWidth;	// 0x3108e839
- (float)stemH;	// 0x3108e7e9
- (float)stemV;	// 0x3108e7d5
- (float)underlinePosition;	// 0x3108e84d
- (float)underlineThickness;	// 0x3108e861
- (void)uniCharsFor:(unsigned long)aFor count:(unsigned *)count toArray:(unsigned short *)array maxChars:(unsigned)chars;	// 0x3108f379
- (float)xHeight;	// 0x3108e7c1
@end

