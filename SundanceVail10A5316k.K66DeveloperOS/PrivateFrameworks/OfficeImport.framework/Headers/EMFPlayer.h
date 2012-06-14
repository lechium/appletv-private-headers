/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class MFGraphicsDevice, EMFPlusPlayer;

__attribute__((visibility("hidden")))
@interface EMFPlayer : NSObject {
@private
	MFGraphicsDevice *m_gdi;	// 4 = 0x4
	BOOL m_headerDone;	// 8 = 0x8
	EMFPlusPlayer *m_emfPlusPlayer;	// 12 = 0xc
	BOOL m_ignoreEMFRecords;	// 16 = 0x10
	BOOL m_ignoreEMFPlusRecords;	// 17 = 0x11
}
+ (CGRect)boundsInLogicalUnits:(id)logicalUnits;	// 0x312f7171
+ (CGRect)boundsInPoints:(id)points;	// 0x312f7331
- (id)initWithGraphicsDevice:(id)graphicsDevice;	// 0x310cde41
- (void)dealloc;	// 0x310d1a91
- (void)done;	// 0x310d17f1
- (id)getGdi;	// 0x312f5e2d
- (int)play:(unsigned)play :(const char *)arg2;	// 0x310ce3fd
- (int)playAbortPath:(unsigned)path :(const char *)arg2;	// 0x312f6ff9
- (int)playAngleArc:(unsigned)arc :(const char *)arg2 :(BOOL)arg3;	// 0x312f66f5
- (int)playArc:(unsigned)arc :(const char *)arg2;	// 0x312f652d
- (int)playArcTo:(unsigned)to :(const char *)arg2;	// 0x312f65c5
- (int)playBeginPath:(unsigned)path :(const char *)arg2;	// 0x311a8159
- (int)playBitBlt:(unsigned)blt :(const char *)arg2;	// 0x311906e5
- (int)playChord:(unsigned)chord :(const char *)arg2;	// 0x312f665d
- (int)playCloseFigure:(unsigned)figure :(const char *)arg2;	// 0x311a8be1
- (int)playCreateBrushIndirect:(unsigned)indirect :(const char *)arg2;	// 0x3115b091
- (int)playCreateDibPatternBrushPT:(unsigned)pt :(const char *)arg2;	// 0x311a9309
- (int)playCreateMonoBrush:(unsigned)brush :(const char *)arg2;	// 0x312f6115
- (int)playCreatePalette:(unsigned)palette :(const char *)arg2;	// 0x311b8dd5
- (int)playCreatePen:(unsigned)pen :(const char *)arg2;	// 0x3115b311
- (int)playDeleteObject:(unsigned)object :(const char *)arg2;	// 0x3115b2c5
- (int)playEllipse:(unsigned)ellipse :(const char *)arg2;	// 0x3119205d
- (int)playEndPath:(unsigned)path :(const char *)arg2;	// 0x311a8cf9
- (int)playExcludeClipRect:(unsigned)rect :(const char *)arg2;	// 0x3115c909
- (int)playExtCreateFontIndirectW:(unsigned)w :(const char *)arg2;	// 0x3115a97d
- (int)playExtCreatePen:(unsigned)pen :(const char *)arg2;	// 0x3118ff4d
- (int)playExtTextOut:(unsigned)anOut :(const char *)arg2 :(BOOL)arg3;	// 0x3115b80d
- (int)playExtTextOutA:(unsigned)a :(const char *)arg2;	// 0x311caa5d
- (int)playExtTextOutW:(unsigned)w :(const char *)arg2;	// 0x3115b7e9
- (int)playFillRgn:(unsigned)rgn :(const char *)arg2;	// 0x312f7039
- (int)playHeader:(unsigned)header :(const char *)arg2;	// 0x310ced41
- (int)playIntersectClipRect:(unsigned)rect :(const char *)arg2;	// 0x3115af75
- (int)playInvertRgn:(unsigned)rgn :(const char *)arg2;	// 0x312f7115
- (int)playLineTo:(unsigned)to :(const char *)arg2;	// 0x3115b481
- (int)playMaskBlt:(unsigned)blt :(const char *)arg2;	// 0x312f67c1
- (int)playModifyWorldTransform:(unsigned)transform :(const char *)arg2;	// 0x3118cc11
- (int)playMoveToEx:(unsigned)ex :(const char *)arg2;	// 0x3115b3e1
- (int)playPaintRgn:(unsigned)rgn :(const char *)arg2;	// 0x312f70b9
- (int)playPie:(unsigned)pie :(const char *)arg2;	// 0x311caaa5
- (int)playPlgBlt:(unsigned)blt :(const char *)arg2;	// 0x312f6ad5
- (int)playPolyBezier:(unsigned)bezier :(const char *)arg2 :(BOOL)arg3;	// 0x311a8f59
- (int)playPolyBezierTo:(unsigned)to :(const char *)arg2 :(BOOL)arg3;	// 0x311a81f9
- (int)playPolyDraw:(unsigned)draw :(const char *)arg2 :(BOOL)arg3;	// 0x312f6285
- (int)playPolyLine:(unsigned)line :(const char *)arg2 :(BOOL)arg3;	// 0x3115cd05
- (int)playPolyLineTo:(unsigned)to :(const char *)arg2 :(BOOL)arg3;	// 0x311b674d
- (int)playPolyPolyLine:(unsigned)line :(const char *)arg2 :(BOOL)arg3;	// 0x311b6801
- (int)playPolyPolygon:(unsigned)polygon :(const char *)arg2 :(BOOL)arg3;	// 0x31190105
- (int)playPolygon:(unsigned)polygon :(const char *)arg2 :(BOOL)arg3;	// 0x3115b165
- (int)playRealizePalette:(unsigned)palette :(const char *)arg2;	// 0x311b8ecd
- (int)playRectangle:(unsigned)rectangle :(const char *)arg2;	// 0x3115ca71
- (int)playResizePalette:(unsigned)palette :(const char *)arg2;	// 0x312f60b1
- (int)playRestoreDC:(unsigned)dc :(const char *)arg2;	// 0x3115a92d
- (int)playRoundRect:(unsigned)rect :(const char *)arg2;	// 0x312f6455
- (int)playSaveDC:(unsigned)dc :(const char *)arg2;	// 0x3115a905
- (int)playScaleViewportExt:(unsigned)ext :(const char *)arg2;	// 0x312f5ef1
- (int)playScaleWindowExt:(unsigned)ext :(const char *)arg2;	// 0x312f5e49
- (int)playSelectClipPath:(unsigned)path :(const char *)arg2;	// 0x311a8d8d
- (int)playSelectClipRegion:(unsigned)region :(const char *)arg2;	// 0x310d14b9
- (int)playSelectObject:(unsigned)object :(const char *)arg2;	// 0x310d0a25
- (int)playSelectPalette:(unsigned)palette :(const char *)arg2;	// 0x310d13ad
- (int)playSetArcDirection:(unsigned)direction :(const char *)arg2;	// 0x312f64e1
- (int)playSetBkColour:(unsigned)colour :(const char *)arg2;	// 0x3115a7f9
- (int)playSetBkMode:(unsigned)mode :(const char *)arg2;	// 0x3115a8ad
- (int)playSetBrushOrg:(unsigned)org :(const char *)arg2;	// 0x3118c945
- (int)playSetDIBitsToDevice:(unsigned)device :(const char *)arg2;	// 0x312f6dfd
- (int)playSetMapMode:(unsigned)mode :(const char *)arg2;	// 0x310cf2bd
- (int)playSetMetaRgn:(unsigned)rgn :(const char *)arg2;	// 0x3118c861
- (int)playSetMiterLimit:(unsigned)limit :(const char *)arg2;	// 0x3118ca0d
- (int)playSetPaletteEntries:(unsigned)entries :(const char *)arg2;	// 0x312f5f99
- (int)playSetPolyFillMode:(unsigned)mode :(const char *)arg2;	// 0x3118c8ad
- (int)playSetRop2:(unsigned)a2 :(const char *)arg2;	// 0x3115a85d
- (int)playSetStretchBltMode:(unsigned)mode :(const char *)arg2;	// 0x3118c901
- (int)playSetTextAlign:(unsigned)align :(const char *)arg2;	// 0x3115cc2d
- (int)playSetTextColour:(unsigned)colour :(const char *)arg2;	// 0x3115a791
- (int)playSetTextJustification:(unsigned)justification :(const char *)arg2;	// 0x312f621d
- (int)playSetViewportExt:(unsigned)ext :(const char *)arg2;	// 0x310cf429
- (int)playSetViewportOrg:(unsigned)org :(const char *)arg2;	// 0x311c7c6d
- (int)playSetWindowExt:(unsigned)ext :(const char *)arg2;	// 0x310cf6b1
- (int)playSetWindowOrg:(unsigned)org :(const char *)arg2;	// 0x310cf7bd
- (int)playSetWorldTransform:(unsigned)transform :(const char *)arg2;	// 0x3118ca9d
- (int)playStretchBlt:(unsigned)blt :(const char *)arg2;	// 0x3115ce1d
- (int)playStretchDIBits:(unsigned)bits :(const char *)arg2;	// 0x310cf89d
- (int)playStrokeAndFillPath:(unsigned)path :(const char *)arg2 :(BOOL)arg3 :(BOOL)arg4;	// 0x311a9191
- (int)playUnknown:(unsigned)unknown :(unsigned)arg2 :(const char *)arg3;	// 0x312f5e41
- (int)playUnsupported:(unsigned)unsupported :(const char *)arg2 :(const char *)arg3;	// 0x310cf2b5
- (int)playWidenPath:(unsigned)path :(const char *)arg2;	// 0x312f7019
- (void)setIgnoreEMFPlusRecords:(BOOL)records;	// 0x3118ff0d
- (void)setIgnoreEMFRecords:(BOOL)records;	// 0x3118ff1d
@end

