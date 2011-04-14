/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class MFFont, MFBrush, MFPalette, MFPath, MFPen, MFTransform, NSColorStub;
@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFDeviceContext : NSObject <NSCopying> {
@private
	NSObject<MFDeviceDriver> *m_driver;	// 4 = 0x4
	bool m_textUpdateCP;	// 8 = 0x8
	double m_miterLimit;	// 12 = 0xc
	int m_textHorizontalAlign;	// 20 = 0x14
	int m_textVerticalAlign;	// 24 = 0x18
	int m_textDirection;	// 28 = 0x1c
	MFFont *m_font;	// 32 = 0x20
	NSColorStub *m_textColour;	// 36 = 0x24
	int m_textBreakExtra;	// 40 = 0x28
	int m_textBreakCount;	// 44 = 0x2c
	int m_textCharExtra;	// 48 = 0x30
	NSColorStub *m_bkColour;	// 52 = 0x34
	int m_bkMode;	// 56 = 0x38
	CGPoint m_brushOrg;	// 60 = 0x3c
	CGPoint m_penPos;	// 68 = 0x44
	int m_arcDirection;	// 76 = 0x4c
	int m_polyFillMode;	// 80 = 0x50
	MFTransform *m_transform;	// 84 = 0x54
	MFPen *m_pen;	// 88 = 0x58
	MFBrush *m_brush;	// 92 = 0x5c
	MFPalette *m_selectedPalette;	// 96 = 0x60
	int m_rop2;	// 100 = 0x64
	int m_stretchMode;	// 104 = 0x68
	MFPath *m_path;	// 108 = 0x6c
}
+ (id)deviceContextWithDriver:(id)driver;	// 0x31b1a231
- (id)initWithDriver:(id)driver;	// 0x31977531
- (id)copyWithZone:(NSZone *)zone;	// 0x31982de9
- (void)dealloc;	// 0x31983f01
- (int)getArcDirection;	// 0x319832a9
- (id)getBkColour;	// 0x31983239
- (int)getBkMode;	// 0x31983281
- (id)getBrush;	// 0x3197c6a1
- (CGPoint)getBrushOrg;	// 0x31983291
- (id)getCurrentTransform;	// 0x31979b45
- (id)getFont;	// 0x3197b49d
- (double)getMiterLimit;	// 0x31983199
- (id)getPath;	// 0x3197bfa1
- (id)getPen;	// 0x3197d085
- (CGPoint)getPenPosition;	// 0x3197cfbd
- (int)getPolyFillMode;	// 0x3197c755
- (int)getRop2;	// 0x3197c119
- (id)getSelectedPalette;	// 0x319836a5
- (int)getStretchBltMode;	// 0x319832d9
- (int)getTextBreakCount;	// 0x319831dd
- (int)getTextBreakExtra;	// 0x319831ed
- (int)getTextCharExtra;	// 0x31983219
- (id)getTextColour;	// 0x3197b5a9
- (int)getTextDirection;	// 0x319831cd
- (int)getTextHorizontalAlign;	// 0x319831bd
- (bool)getTextUpdateCP;	// 0x3197b789
- (int)getTextVerticalAlign;	// 0x3197b599
- (void)setArcDirection:(int)direction;	// 0x319832b9
- (void)setBkColour:(id)colour;	// 0x31983249
- (void)setBkMode:(int)mode;	// 0x3197a78d
- (void)setBrush:(id)brush;	// 0x3197ba31
- (void)setBrushOrg:(CGPoint)org;	// 0x3197b851
- (void)setCurrentTransform:(id)transform;	// 0x31983601
- (void)setFont:(id)font;	// 0x3197a6ed
- (void)setMiterLimit:(double)limit;	// 0x319831a9
- (void)setPath:(id)path;	// 0x31983ac5
- (void)setPen:(id)pen;	// 0x3197cd15
- (void)setPenPosition:(CGPoint)position;	// 0x3197cde5
- (void)setPolyFillMode:(int)mode;	// 0x319832c9
- (void)setRop2:(int)a2;	// 0x3197c129
- (void)setSelectedPalette:(id)palette;	// 0x319836b5
- (void)setStretchBltMode:(int)mode;	// 0x319832e9
- (void)setTextCharExtra:(int)extra;	// 0x31983229
- (void)setTextColour:(id)colour;	// 0x3197aec9
- (void)setTextDirection:(int)direction;	// 0x31979a95
- (void)setTextHorizontalAlign:(int)align;	// 0x31979a75
- (void)setTextJustification:(int)justification :(int)arg2;	// 0x319831fd
- (void)setTextUpdateCP:(bool)cp;	// 0x31979a65
- (void)setTextVerticalAlign:(int)align;	// 0x31979a85
@end

