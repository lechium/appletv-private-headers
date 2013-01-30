/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class MFGraphicsDevice;

@interface WMFPlayer : NSObject {
	MFGraphicsDevice *m_gdi;	// 4 = 0x4
	long m_records;	// 8 = 0x8
	unsigned short m_windowsVersion;	// 12 = 0xc
	BOOL m_boundsSet;	// 14 = 0xe
	BOOL m_ignoreSetWindowOrg;	// 15 = 0xf
}
@property(readonly, assign) long records;	// G=0x36c2c281; converted property
+ (CGRect)boundsInLogicalUnits:(id)logicalUnits;	// 0x36c2cbe5
+ (CGRect)boundsInPoints:(id)points;	// 0x36c2cced
+ (CGRect)placeableBounds:(const char *)bounds;	// 0x36b6cecd
+ (CGRect)windowBounds:(id)bounds;	// 0x36c2ca55
- (id)initWithGraphicsDevice:(id)graphicsDevice;	// 0x36b19c39
- (void)dealloc;	// 0x36b1ba05
- (void)done;	// 0x36b1b965
- (id)parseRegion:(unsigned)region :(const char *)arg2;	// 0x36b9ce91
- (int)play:(unsigned)play :(const char *)arg2;	// 0x36b1a2b1
- (int)playArc:(unsigned)arc :(const char *)arg2;	// 0x36c2c3d1
- (int)playBitBlt:(unsigned)blt :(const char *)arg2;	// 0x36c2c295
- (int)playChord:(unsigned)chord :(const char *)arg2;	// 0x36c2c489
- (int)playCreateBrushIndirect:(unsigned)indirect :(const char *)arg2;	// 0x36b1ab41
- (int)playCreateDIBPatternBrush:(unsigned)brush :(const char *)arg2;	// 0x36b88afd
- (int)playCreateFontIndirect:(unsigned)indirect :(const char *)arg2;	// 0x36b1ba59
- (int)playCreatePalette:(unsigned)palette :(const char *)arg2;	// 0x36b7cab9
- (int)playCreatePatternBrush:(unsigned)brush :(const char *)arg2;	// 0x36c2c8a9
- (int)playCreatePenIndirect:(unsigned)indirect :(const char *)arg2;	// 0x36b1ae35
- (int)playCreateRegion:(unsigned)region :(const char *)arg2;	// 0x36b9ce45
- (int)playDeleteObject:(unsigned)object :(const char *)arg2;	// 0x36b1b571
- (int)playDibBitBlt:(unsigned)blt :(const char *)arg2;	// 0x36b889bd
- (int)playDibStretchBlt:(unsigned)blt :(const char *)arg2;	// 0x36b1ce8d
- (int)playEllipse:(unsigned)ellipse :(const char *)arg2;	// 0x36b89a8d
- (int)playExcludeClipRect:(unsigned)rect :(const char *)arg2;	// 0x36b7c439
- (int)playExtTextOut:(unsigned)anOut :(const char *)arg2;	// 0x36b7c619
- (int)playFillRegion:(unsigned)region :(const char *)arg2;	// 0x36c2c945
- (int)playFrameRegion:(unsigned)region :(const char *)arg2;	// 0x36c2c98d
- (int)playHeader:(unsigned)header :(const char *)arg2;	// 0x36b19ed1
- (int)playIntersectClipRect:(unsigned)rect :(const char *)arg2;	// 0x36b73f45
- (int)playInvertRegion:(unsigned)region :(const char *)arg2;	// 0x36c2c9ed
- (int)playLineTo:(unsigned)to :(const char *)arg2;	// 0x36b7c541
- (int)playMoveTo:(unsigned)to :(const char *)arg2;	// 0x36b7c4d9
- (int)playOffsetViewportOrg:(unsigned)org :(const char *)arg2;	// 0x36c2c6a5
- (int)playOffsetWindowOrg:(unsigned)org :(const char *)arg2;	// 0x36c2c659
- (int)playPaintRegion:(unsigned)region :(const char *)arg2;	// 0x36c2ca21
- (int)playPatBlt:(unsigned)blt :(const char *)arg2;	// 0x36b88799
- (int)playPie:(unsigned)pie :(const char *)arg2;	// 0x36b9cd11
- (int)playPolyPolygon:(unsigned)polygon :(const char *)arg2;	// 0x36b73d65
- (int)playPolygon:(unsigned)polygon :(const char *)arg2;	// 0x36b1afe9
- (int)playPolyline:(unsigned)polyline :(const char *)arg2;	// 0x36b1b71d
- (int)playRealizePalette:(unsigned)palette :(const char *)arg2;	// 0x36b88869
- (int)playRectangle:(unsigned)rectangle :(const char *)arg2;	// 0x36b7c5ad
- (int)playResizePalette:(unsigned)palette :(const char *)arg2;	// 0x36c2c871
- (int)playRestoreDC:(unsigned)dc :(const char *)arg2;	// 0x36b1d3bd
- (int)playRoundRect:(unsigned)rect :(const char *)arg2;	// 0x36c2c541
- (int)playSaveDC:(unsigned)dc :(const char *)arg2;	// 0x36b1befd
- (int)playScaleViewportExt:(unsigned)ext :(const char *)arg2;	// 0x36b89b91
- (int)playScaleWindowExt:(unsigned)ext :(const char *)arg2;	// 0x36c2c5f1
- (int)playSelectClipRegion:(unsigned)region :(const char *)arg2;	// 0x36b8ddad
- (int)playSelectObject:(unsigned)object :(const char *)arg2;	// 0x36b1add1
- (int)playSelectPalette:(unsigned)palette :(const char *)arg2;	// 0x36b7ccbd
- (int)playSetBkColour:(unsigned)colour :(const char *)arg2;	// 0x36b1cda9
- (int)playSetBkMode:(unsigned)mode :(const char *)arg2;	// 0x36b1be85
- (int)playSetMapMode:(unsigned)mode :(const char *)arg2;	// 0x36b1ce4d
- (int)playSetPaletteEntries:(unsigned)entries :(const char *)arg2;	// 0x36c2c78d
- (int)playSetPolyFillMode:(unsigned)mode :(const char *)arg2;	// 0x36b1af79
- (int)playSetROP2:(unsigned)a2 :(const char *)arg2;	// 0x36b1af41
- (int)playSetStretchBltMode:(unsigned)mode :(const char *)arg2;	// 0x36b1d74d
- (int)playSetTextAlign:(unsigned)align :(const char *)arg2;	// 0x36b1cbfd
- (int)playSetTextCharExtra:(unsigned)extra :(const char *)arg2;	// 0x36b89af9
- (int)playSetTextColour:(unsigned)colour :(const char *)arg2;	// 0x36b1cd05
- (int)playSetTextJustification:(unsigned)justification :(const char *)arg2;	// 0x36b1ccb9
- (int)playSetViewportExt:(unsigned)ext :(const char *)arg2;	// 0x36c2c6f1
- (int)playSetViewportOrg:(unsigned)org :(const char *)arg2;	// 0x36c2c73d
- (int)playSetWindowExt:(unsigned)ext :(const char *)arg2;	// 0x36b1a9b9
- (int)playSetWindowOrg:(unsigned)org :(const char *)arg2;	// 0x36b1a959
- (int)playStretchDib:(unsigned)dib :(const char *)arg2;	// 0x36b1d78d
- (int)playTextOut:(unsigned)anOut :(const char *)arg2;	// 0x36b82065
- (int)playUnknown:(unsigned)unknown :(unsigned)arg2 :(const char *)arg3;	// 0x36c2c291
- (int)playUnsupported:(unsigned)unsupported :(const char *)arg2 :(const char *)arg3;	// 0x36b1ba55
// converted property getter: - (long)records;	// 0x36c2c281
@end
