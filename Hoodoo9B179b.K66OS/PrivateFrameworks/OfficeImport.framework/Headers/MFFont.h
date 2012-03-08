/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFObject.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface MFFont : NSObject <MFObject> {
@private
	int m_lfHeight;	// 4 = 0x4
	int m_lfWidth;	// 8 = 0x8
	int m_lfEscapement;	// 12 = 0xc
	int m_lfOrientation;	// 16 = 0x10
	int m_lfWeight;	// 20 = 0x14
	bool m_lfItalic;	// 24 = 0x18
	bool m_lfUnderline;	// 25 = 0x19
	bool m_lfStrikeOut;	// 26 = 0x1a
	int m_lfCharSet;	// 28 = 0x1c
	int m_lfOutPrecision;	// 32 = 0x20
	unsigned char m_lfClipPrecision;	// 36 = 0x24
	int m_lfQuality;	// 40 = 0x28
	int m_pitch;	// 44 = 0x2c
	int m_family;	// 48 = 0x30
	NSString *m_lfFaceName;	// 52 = 0x34
	NSString *m_elfFullName;	// 56 = 0x38
	NSString *m_elfStyle;	// 60 = 0x3c
	unsigned m_elfVersion;	// 64 = 0x40
	unsigned m_elfStyleSize;	// 68 = 0x44
	unsigned m_elfMatch;	// 72 = 0x48
	unsigned m_elfVendorId;	// 76 = 0x4c
	unsigned m_elfCulture;	// 80 = 0x50
}
+ (id)fontWithExtendedFeatures:(long)extendedFeatures :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned)arg18 :(unsigned)arg19 :(unsigned)arg20 :(unsigned)arg21 :(unsigned)arg22;	// 0x328e8769
+ (id)fontWithFeatures:(long)features :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15;	// 0x327ccd95
+ (id)fontWithStockFont:(int)stockFont;	// 0x327ca529
- (id)initWithAllFeatures:(long)allFeatures :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned)arg18 :(unsigned)arg19 :(unsigned)arg20 :(unsigned)arg21 :(unsigned)arg22;	// 0x327ca811
- (id)initWithFeatures:(long)features :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15;	// 0x327ca789
- (id)initWithStockFont:(int)stockFont;	// 0x327ca565
- (void)dealloc;	// 0x327c5f35
- (double)escapement;	// 0x329fb6e9
- (id)faceName;	// 0x329fb749
- (double)fontHeight;	// 0x327cda89
- (int)getCharset;	// 0x327cd765
- (int)selectInto:(id)into;	// 0x327cd271
- (BOOL)strikeout;	// 0x329fb739
- (CGRect)textExtent:(id)extent :(int)arg2 :(int *)arg3 :(int)arg4;	// 0x329fb759
- (BOOL)underline;	// 0x329fb729
@end

