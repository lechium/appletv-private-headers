/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, MFObjectTable, NSDictionary, MFDeviceContext;
@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFGraphicsDevice : NSObject {
@private
	MFDeviceContext *m_currentDC;	// 4 = 0x4
	NSMutableArray *m_savedDC;	// 8 = 0x8
	NSObject<MFDeviceDriver> *m_deviceDriver;	// 12 = 0xc
	MFObjectTable *m_objectTable;	// 16 = 0x10
	MFObjectTable *m_stockObjects;	// 20 = 0x14
	NSDictionary *m_colorMap;	// 24 = 0x18
	NSDictionary *m_fillMap;	// 28 = 0x1c
}
- (id)initWithCanvas:(CGRect)canvas;	// 0x328b2e91
- (int)abortPath;	// 0x32ae4a21
- (int)angleArc:(int)arc :(int)arg2 :(unsigned long)arg3 :(double)arg4 :(double)arg5;	// 0x32ae476d
- (int)arc:(int)arc :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;	// 0x32a06d85
- (int)arcTo:(int)to :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;	// 0x32ae47c1
- (int)beginPath;	// 0x3297a941
- (int)bezier:(int)bezier :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;	// 0x329f32e9
- (int)bezierTo:(int)to :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6;	// 0x3297ac59
- (int)bitBlt:(int)blt :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(unsigned long)arg8 :(CGAffineTransform *)arg9 :(unsigned long)arg10;	// 0x329d2be5
- (int)chord:(int)chord :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;	// 0x32ae4821
- (int)closeCurrentPath:(bool)path;	// 0x3297b139
- (int)comment:(id)comment;	// 0x32ae4765
- (id)createBitmap:(unsigned)bitmap :(unsigned)arg2 :(unsigned)arg3 :(unsigned)arg4 :(const char *)arg5 :(unsigned)arg6;	// 0x32ae4e65
- (int)createBrush:(int)brush :(id)arg2 :(int)arg3 :(unsigned)arg4;	// 0x328b6d81
- (id)createColorWithRGBBytes:(unsigned char)rgbbytes :(unsigned char)arg2 :(unsigned char)arg3 :(unsigned char)arg4;	// 0x328b6d19
- (id)createDIBitmap:(const char *)bitmap :(unsigned)arg2 :(int)arg3;	// 0x32968a1d
- (id)createDIBitmap:(const char *)bitmap :(unsigned)arg2 :(const char *)arg3 :(unsigned)arg4 :(int)arg5;	// 0x3299d07d
- (int)createFontIndirect:(long)indirect :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15;	// 0x328b5c7d
- (int)createFontIndirectW:(long)w :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned)arg18 :(unsigned)arg19 :(unsigned)arg20 :(unsigned)arg21 :(unsigned)arg22 :(unsigned)arg23;	// 0x329d1605
- (int)createPalette:(id)palette :(unsigned)arg2;	// 0x3299838d
- (int)createPatternBrush:(id)brush :(unsigned)arg2 usePaletteForBilevel:(BOOL)bilevel;	// 0x329dd4b5
- (int)createPen:(int)pen :(long)arg2 :(id)arg3 :(double *)arg4 :(unsigned)arg5;	// 0x328b6f59
- (int)createRegion:(id)region;	// 0x329dda39
- (void)createStockObjects;	// 0x3299d301
- (void)dealloc;	// 0x328af0e1
- (int)deleteObject:(int)object;	// 0x328b8715
- (int)description:(id)description;	// 0x3297a3e1
- (void)done;	// 0x328ba609
- (int)ellipse:(int)ellipse :(int)arg2 :(int)arg3 :(int)arg4;	// 0x328b70b1
- (int)endPath;	// 0x3297b271
- (int)excludeClipRect:(CGRect)rect;	// 0x329d2d69
- (int)extTextOut:(int)anOut :(int)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int *)arg9 :(int)arg10;	// 0x328b6775
- (int)extTextOutEncoded:(int)encoded :(int)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int *)arg9 :(int)arg10;	// 0x328b6645
- (int)fillRgn:(unsigned)rgn :(unsigned)arg2;	// 0x32ae4c91
- (int)fillRgnWithRects:(id)rects :(unsigned)arg2;	// 0x32ae4c09
- (int)frameRegion:(unsigned)region :(unsigned)arg2 :(int)arg3 :(int)arg4;	// 0x32ae4df1
- (int)frameRegionWithRects:(id)rects :(unsigned)arg2 :(int)arg3 :(int)arg4;	// 0x32ae4d69
- (int)getStockObject:(unsigned)object;	// 0x3299d279
- (int)intersectClipRect:(CGRect)rect;	// 0x328b9c2d
- (int)invertRgn:(unsigned)rgn;	// 0x32ae4bbd
- (int)invertRgnWithRects:(id)rects;	// 0x32ae4b69
- (int)lineTo:(double)to :(double)arg2;	// 0x329d0fc5
- (int)maskBlt:(int)blt :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(id)arg8 :(int)arg9 :(int)arg10 :(unsigned long)arg11 :(CGAffineTransform *)arg12 :(unsigned long)arg13;	// 0x32ae4eb9
- (int)modifyWorldTransform:(const CGAffineTransform *)transform :(int)arg2;	// 0x329dfd35
- (int)moveTo:(double)to :(double)arg2;	// 0x32970a55
- (int)offsetViewportOrg:(int)org :(int)arg2;	// 0x32ae49a1
- (int)offsetWindowOrg:(int)org :(int)arg2;	// 0x32ae4961
- (int)paintRgn:(unsigned)rgn;	// 0x32ae4b01
- (int)paintRgnWithRects:(id)rects;	// 0x32ae4a95
- (int)patBlt:(int)blt :(int)arg2 :(int)arg3 :(int)arg4 :(unsigned long)arg5;	// 0x328b8929
- (int)pie:(int)pie :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;	// 0x329dac3d
- (int)plgBlt:(CGPoint *)blt :(id)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(id)arg7 :(int)arg8 :(int)arg9 :(CGAffineTransform *)arg10 :(unsigned long)arg11;	// 0x32ae4f61
- (int)polyPolygon:(CGPoint *)polygon :(int *)arg2 :(int)arg3;	// 0x32970be5
- (int)polyPolyline:(CGPoint *)polyline :(int *)arg2 :(int)arg3;	// 0x32a0de39
- (int)polygon:(CGPoint *)polygon :(int)arg2;	// 0x328ba2b5
- (int)polyline:(CGPoint *)polyline :(int)arg2;	// 0x328ba521
- (int)realizePalette;	// 0x32998561
- (id)recolor:(unsigned char)recolor :(unsigned char)arg2 :(unsigned char)arg3 fill:(BOOL)fill;	// 0x3299d7cd
- (id)recolor:(id)recolor fill:(BOOL)fill;	// 0x328b63f9
- (int)rectangle:(int)rectangle :(int)arg2 :(int)arg3 :(int)arg4;	// 0x328ba0d1
- (int)resizePalette:(unsigned)palette :(unsigned)arg2;	// 0x32ae48fd
- (int)restoreDC:(int)dc;	// 0x328b9ccd
- (int)roundRect:(int)rect :(int)arg2 :(int)arg3 :(int)arg4 :(double)arg5 :(double)arg6;	// 0x32a1a169
- (int)saveDC;	// 0x328b8d31
- (int)scaleViewportExt:(int)ext :(int)arg2 :(int)arg3 :(int)arg4;	// 0x329687a1
- (int)scaleWindowExt:(int)ext :(int)arg2 :(int)arg3 :(int)arg4;	// 0x32ae49e1
- (int)selectClipPath:(int)path;	// 0x329de581
- (int)selectClipRegion:(unsigned)region :(int)arg2;	// 0x329d3135
- (int)selectClipRegionWithRects:(id)rects :(int)arg2;	// 0x3299db05
- (int)selectObject:(int)object;	// 0x328b60fd
- (int)setArcDirection:(int)direction;	// 0x32ae4769
- (int)setBkColour:(id)colour;	// 0x329686a1
- (int)setBkMode:(int)mode;	// 0x328b6319
- (int)setBrushOrg:(double)org :(double)arg2;	// 0x329db229
- (void)setColorMap:(id)map fillMap:(id)map2;	// 0x328b412d
- (int)setMapMode:(int)mode;	// 0x328b471d
- (int)setMetaRgn;	// 0x32a0c249
- (int)setMiterLimit:(double)limit;	// 0x329f20b9
- (int)setPaletteEntries:(unsigned)entries :(id)arg2 :(unsigned)arg3;	// 0x32ae4881
- (int)setPolyFillMode:(int)mode;	// 0x328bd861
- (int)setRop2:(int)a2;	// 0x32968535
- (int)setStretchBltMode:(int)mode;	// 0x329688d1
- (int)setTextAlign:(bool)align :(int)arg2 :(int)arg3 :(int)arg4;	// 0x3296858d
- (int)setTextCharExtra:(int)extra;	// 0x329e1839
- (int)setTextColour:(const id)colour;	// 0x328b63b5
- (int)setTextJustification:(int)justification :(int)arg2;	// 0x3296863d
- (int)setViewBox:(double)box :(double)arg2 :(double)arg3 :(double)arg4;	// 0x328b4db5
- (int)setViewportExt:(int)ext :(int)arg2;	// 0x328b4d05
- (int)setViewportOrg:(int)org :(int)arg2;	// 0x328b4c89
- (int)setWindowExt:(int)ext :(int)arg2;	// 0x328b4bd9
- (int)setWindowOrg:(int)org :(int)arg2;	// 0x328b4855
- (int)setWorldTransform:(const CGAffineTransform *)transform;	// 0x32a0c325
- (int)stretchBlt:(int)blt :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(unsigned long)arg10 :(CGAffineTransform *)arg11 :(unsigned long)arg12;	// 0x329690f1
- (int)stretchBlt:(int)blt :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(unsigned long)arg10 :(CGAffineTransform *)arg11 :(unsigned long)arg12 usePaletteForBilevel:(BOOL)bilevel;	// 0x3299d209
- (int)strokeAndFillPath:(bool)path :(bool)arg2;	// 0x3297b31d
- (int)textOut:(int)anOut :(int)arg2 :(id)arg3;	// 0x329ddc75
- (int)textOutEncoded:(int)encoded :(int)arg2 :(id)arg3;	// 0x329ddb4d
- (int)widenPath;	// 0x32ae4a59
@end

