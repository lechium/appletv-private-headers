/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class MFGraphicsDevice;

__attribute__((visibility("hidden")))
@interface EMFPlayer : NSObject {
@private
	MFGraphicsDevice *m_gdi;	// 4 = 0x4
	BOOL m_headerDone;	// 8 = 0x8
}
+ (CGRect)boundsInLogicalUnits:(id)logicalUnits;	// 0x353ec631
+ (CGRect)boundsInPoints:(id)points;	// 0x353ec7e1
- (id)initWithGraphicsDevice:(id)graphicsDevice;	// 0x35282795
- (void)dealloc;	// 0x352847f9
- (void)done;	// 0x35284715
- (int)play:(unsigned)play :(const char *)arg2;	// 0x352828e9
- (int)playAbortPath:(unsigned)path :(const char *)arg2;	// 0x353ec5f1
- (int)playAngleArc:(unsigned)arc :(const char *)arg2 :(BOOL)arg3;	// 0x353ebcd9
- (int)playArc:(unsigned)arc :(const char *)arg2;	// 0x353ebaf9
- (int)playArcTo:(unsigned)to :(const char *)arg2;	// 0x353ebb99
- (int)playBeginPath:(unsigned)path :(const char *)arg2;	// 0x35283921
- (int)playBitBlt:(unsigned)blt :(const char *)arg2;	// 0x352dbb91
- (int)playChord:(unsigned)chord :(const char *)arg2;	// 0x353ebc39
- (int)playCloseFigure:(unsigned)figure :(const char *)arg2;	// 0x35284119
- (int)playCreateBrushIndirect:(unsigned)indirect :(const char *)arg2;	// 0x35283665
- (int)playCreateDibPatternBrushPT:(unsigned)pt :(const char *)arg2;	// 0x352fc425
- (int)playCreateMonoBrush:(unsigned)brush :(const char *)arg2;	// 0x35325a35
- (int)playCreatePalette:(unsigned)palette :(const char *)arg2;	// 0x352fca59
- (int)playCreatePen:(unsigned)pen :(const char *)arg2;	// 0x352d9e89
- (int)playDeleteObject:(unsigned)object :(const char *)arg2;	// 0x352846cd
- (int)playEllipse:(unsigned)ellipse :(const char *)arg2;	// 0x352ec399
- (int)playEndPath:(unsigned)path :(const char *)arg2;	// 0x35284251
- (int)playExcludeClipRect:(unsigned)rect :(const char *)arg2;	// 0x352dbcdd
- (int)playExtCreateFontIndirectW:(unsigned)w :(const char *)arg2;	// 0x352da201
- (int)playExtCreatePen:(unsigned)pen :(const char *)arg2;	// 0x352837a1
- (int)playExtTextOut:(unsigned)anOut :(const char *)arg2 :(BOOL)arg3;	// 0x352da845
- (int)playExtTextOutA:(unsigned)a :(const char *)arg2;	// 0x352dabf9
- (int)playExtTextOutW:(unsigned)w :(const char *)arg2;	// 0x352da821
- (int)playFillRgn:(unsigned)rgn :(const char *)arg2;	// 0x353ec8e5
- (int)playHeader:(unsigned)header :(const char *)arg2;	// 0x352831a1
- (int)playIntersectClipRect:(unsigned)rect :(const char *)arg2;	// 0x352db985
- (int)playInvertRgn:(unsigned)rgn :(const char *)arg2;	// 0x353ec9d9
- (int)playLineTo:(unsigned)to :(const char *)arg2;	// 0x352d9f65
- (int)playMaskBlt:(unsigned)blt :(const char *)arg2;	// 0x353ebda1
- (int)playModifyWorldTransform:(unsigned)transform :(const char *)arg2;	// 0x352e8c61
- (int)playMoveToEx:(unsigned)ex :(const char *)arg2;	// 0x35283a49
- (int)playPaintRgn:(unsigned)rgn :(const char *)arg2;	// 0x353ec971
- (int)playPie:(unsigned)pie :(const char *)arg2;	// 0x352e3b9d
- (int)playPlgBlt:(unsigned)blt :(const char *)arg2;	// 0x353ec0d9
- (int)playPolyBezier:(unsigned)bezier :(const char *)arg2 :(BOOL)arg3;	// 0x352fc1b9
- (int)playPolyBezierTo:(unsigned)to :(const char *)arg2 :(BOOL)arg3;	// 0x35283b15
- (int)playPolyDraw:(unsigned)draw :(const char *)arg2 :(BOOL)arg3;	// 0x353eb82d
- (int)playPolyLine:(unsigned)line :(const char *)arg2 :(BOOL)arg3;	// 0x352e426d
- (int)playPolyLineTo:(unsigned)to :(const char *)arg2 :(BOOL)arg3;	// 0x35310161
- (int)playPolyPolyLine:(unsigned)line :(const char *)arg2 :(BOOL)arg3;	// 0x35316bc5
- (int)playPolyPolygon:(unsigned)polygon :(const char *)arg2 :(BOOL)arg3;	// 0x35284459
- (int)playPolygon:(unsigned)polygon :(const char *)arg2 :(BOOL)arg3;	// 0x352dba21
- (int)playRealizePalette:(unsigned)palette :(const char *)arg2;	// 0x352fcb4d
- (int)playRectangle:(unsigned)rectangle :(const char *)arg2;	// 0x352dbe91
- (int)playResizePalette:(unsigned)palette :(const char *)arg2;	// 0x353eb7cd
- (int)playRestoreDC:(unsigned)dc :(const char *)arg2;	// 0x352db93d
- (int)playRoundRect:(unsigned)rect :(const char *)arg2;	// 0x353eba1d
- (int)playSaveDC:(unsigned)dc :(const char *)arg2;	// 0x352db90d
- (int)playScaleViewportExt:(unsigned)ext :(const char *)arg2;	// 0x353198c5
- (int)playScaleWindowExt:(unsigned)ext :(const char *)arg2;	// 0x353eb5ed
- (int)playSelectClipPath:(unsigned)path :(const char *)arg2;	// 0x352e7539
- (int)playSelectClipRegion:(unsigned)region :(const char *)arg2;	// 0x352a68f1
- (int)playSelectObject:(unsigned)object :(const char *)arg2;	// 0x35283741
- (int)playSelectPalette:(unsigned)palette :(const char *)arg2;	// 0x352a6891
- (int)playSetArcDirection:(unsigned)direction :(const char *)arg2;	// 0x353ebab1
- (int)playSetBkColour:(unsigned)colour :(const char *)arg2;	// 0x352db865
- (int)playSetBkMode:(unsigned)mode :(const char *)arg2;	// 0x3528343d
- (int)playSetBrushOrg:(unsigned)org :(const char *)arg2;	// 0x352e41a9
- (int)playSetDIBitsToDevice:(unsigned)device :(const char *)arg2;	// 0x353ec401
- (int)playSetMapMode:(unsigned)mode :(const char *)arg2;	// 0x352833e5
- (int)playSetMetaRgn:(unsigned)rgn :(const char *)arg2;	// 0x35315229
- (int)playSetMiterLimit:(unsigned)limit :(const char *)arg2;	// 0x352fb055
- (int)playSetPaletteEntries:(unsigned)entries :(const char *)arg2;	// 0x353eb6a5
- (int)playSetPolyFillMode:(unsigned)mode :(const char *)arg2;	// 0x35283615
- (int)playSetRop2:(unsigned)a2 :(const char *)arg2;	// 0x352db8c5
- (int)playSetStretchBltMode:(unsigned)mode :(const char *)arg2;	// 0x352e74e5
- (int)playSetTextAlign:(unsigned)align :(const char *)arg2;	// 0x352d9e35
- (int)playSetTextColour:(unsigned)colour :(const char *)arg2;	// 0x352db805
- (int)playSetTextJustification:(unsigned)justification :(const char *)arg2;	// 0x3530fc31
- (int)playSetViewportExt:(unsigned)ext :(const char *)arg2;	// 0x352835b5
- (int)playSetViewportOrg:(unsigned)org :(const char *)arg2;	// 0x352834f5
- (int)playSetWindowExt:(unsigned)ext :(const char *)arg2;	// 0x35283555
- (int)playSetWindowOrg:(unsigned)org :(const char *)arg2;	// 0x35283495
- (int)playSetWorldTransform:(unsigned)transform :(const char *)arg2;	// 0x3531526d
- (int)playStretchBlt:(unsigned)blt :(const char *)arg2;	// 0x352fdae5
- (int)playStretchDIBits:(unsigned)bits :(const char *)arg2;	// 0x352a5e9d
- (int)playStrokeAndFillPath:(unsigned)path :(const char *)arg2 :(BOOL)arg3 :(BOOL)arg4;	// 0x352842d9
- (int)playUnknown:(unsigned)unknown :(unsigned)arg2 :(const char *)arg3;	// 0x353eb5e9
- (int)playUnsupported:(unsigned)unsupported :(const char *)arg2 :(const char *)arg3;	// 0x352a5e99
- (int)playWidenPath:(unsigned)path :(const char *)arg2;	// 0x353ec611
@end
