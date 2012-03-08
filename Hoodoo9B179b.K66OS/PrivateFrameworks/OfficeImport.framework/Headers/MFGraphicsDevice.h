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
- (id)initWithCanvas:(CGRect)canvas;	// 0x327c9e91
- (int)abortPath;	// 0x329fba21
- (int)angleArc:(int)arc :(int)arg2 :(unsigned long)arg3 :(double)arg4 :(double)arg5;	// 0x329fb76d
- (int)arc:(int)arc :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;	// 0x3291dd85
- (int)arcTo:(int)to :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;	// 0x329fb7c1
- (int)beginPath;	// 0x32891941
- (int)bezier:(int)bezier :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;	// 0x3290a2e9
- (int)bezierTo:(int)to :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6;	// 0x32891c59
- (int)bitBlt:(int)blt :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(unsigned long)arg8 :(CGAffineTransform *)arg9 :(unsigned long)arg10;	// 0x328e9be5
- (int)chord:(int)chord :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;	// 0x329fb821
- (int)closeCurrentPath:(bool)path;	// 0x32892139
- (int)comment:(id)comment;	// 0x329fb765
- (id)createBitmap:(unsigned)bitmap :(unsigned)arg2 :(unsigned)arg3 :(unsigned)arg4 :(const char *)arg5 :(unsigned)arg6;	// 0x329fbe65
- (int)createBrush:(int)brush :(id)arg2 :(int)arg3 :(unsigned)arg4;	// 0x327cdd81
- (id)createColorWithRGBBytes:(unsigned char)rgbbytes :(unsigned char)arg2 :(unsigned char)arg3 :(unsigned char)arg4;	// 0x327cdd19
- (id)createDIBitmap:(const char *)bitmap :(unsigned)arg2 :(int)arg3;	// 0x3287fa1d
- (id)createDIBitmap:(const char *)bitmap :(unsigned)arg2 :(const char *)arg3 :(unsigned)arg4 :(int)arg5;	// 0x328b407d
- (int)createFontIndirect:(long)indirect :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15;	// 0x327ccc7d
- (int)createFontIndirectW:(long)w :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned)arg18 :(unsigned)arg19 :(unsigned)arg20 :(unsigned)arg21 :(unsigned)arg22 :(unsigned)arg23;	// 0x328e8605
- (int)createPalette:(id)palette :(unsigned)arg2;	// 0x328af38d
- (int)createPatternBrush:(id)brush :(unsigned)arg2 usePaletteForBilevel:(BOOL)bilevel;	// 0x328f44b5
- (int)createPen:(int)pen :(long)arg2 :(id)arg3 :(double *)arg4 :(unsigned)arg5;	// 0x327cdf59
- (int)createRegion:(id)region;	// 0x328f4a39
- (void)createStockObjects;	// 0x328b4301
- (void)dealloc;	// 0x327c60e1
- (int)deleteObject:(int)object;	// 0x327cf715
- (int)description:(id)description;	// 0x328913e1
- (void)done;	// 0x327d1609
- (int)ellipse:(int)ellipse :(int)arg2 :(int)arg3 :(int)arg4;	// 0x327ce0b1
- (int)endPath;	// 0x32892271
- (int)excludeClipRect:(CGRect)rect;	// 0x328e9d69
- (int)extTextOut:(int)anOut :(int)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int *)arg9 :(int)arg10;	// 0x327cd775
- (int)extTextOutEncoded:(int)encoded :(int)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int *)arg9 :(int)arg10;	// 0x327cd645
- (int)fillRgn:(unsigned)rgn :(unsigned)arg2;	// 0x329fbc91
- (int)fillRgnWithRects:(id)rects :(unsigned)arg2;	// 0x329fbc09
- (int)frameRegion:(unsigned)region :(unsigned)arg2 :(int)arg3 :(int)arg4;	// 0x329fbdf1
- (int)frameRegionWithRects:(id)rects :(unsigned)arg2 :(int)arg3 :(int)arg4;	// 0x329fbd69
- (int)getStockObject:(unsigned)object;	// 0x328b4279
- (int)intersectClipRect:(CGRect)rect;	// 0x327d0c2d
- (int)invertRgn:(unsigned)rgn;	// 0x329fbbbd
- (int)invertRgnWithRects:(id)rects;	// 0x329fbb69
- (int)lineTo:(double)to :(double)arg2;	// 0x328e7fc5
- (int)maskBlt:(int)blt :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(id)arg8 :(int)arg9 :(int)arg10 :(unsigned long)arg11 :(CGAffineTransform *)arg12 :(unsigned long)arg13;	// 0x329fbeb9
- (int)modifyWorldTransform:(const CGAffineTransform *)transform :(int)arg2;	// 0x328f6d35
- (int)moveTo:(double)to :(double)arg2;	// 0x32887a55
- (int)offsetViewportOrg:(int)org :(int)arg2;	// 0x329fb9a1
- (int)offsetWindowOrg:(int)org :(int)arg2;	// 0x329fb961
- (int)paintRgn:(unsigned)rgn;	// 0x329fbb01
- (int)paintRgnWithRects:(id)rects;	// 0x329fba95
- (int)patBlt:(int)blt :(int)arg2 :(int)arg3 :(int)arg4 :(unsigned long)arg5;	// 0x327cf929
- (int)pie:(int)pie :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;	// 0x328f1c3d
- (int)plgBlt:(CGPoint *)blt :(id)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(id)arg7 :(int)arg8 :(int)arg9 :(CGAffineTransform *)arg10 :(unsigned long)arg11;	// 0x329fbf61
- (int)polyPolygon:(CGPoint *)polygon :(int *)arg2 :(int)arg3;	// 0x32887be5
- (int)polyPolyline:(CGPoint *)polyline :(int *)arg2 :(int)arg3;	// 0x32924e39
- (int)polygon:(CGPoint *)polygon :(int)arg2;	// 0x327d12b5
- (int)polyline:(CGPoint *)polyline :(int)arg2;	// 0x327d1521
- (int)realizePalette;	// 0x328af561
- (id)recolor:(unsigned char)recolor :(unsigned char)arg2 :(unsigned char)arg3 fill:(BOOL)fill;	// 0x328b47cd
- (id)recolor:(id)recolor fill:(BOOL)fill;	// 0x327cd3f9
- (int)rectangle:(int)rectangle :(int)arg2 :(int)arg3 :(int)arg4;	// 0x327d10d1
- (int)resizePalette:(unsigned)palette :(unsigned)arg2;	// 0x329fb8fd
- (int)restoreDC:(int)dc;	// 0x327d0ccd
- (int)roundRect:(int)rect :(int)arg2 :(int)arg3 :(int)arg4 :(double)arg5 :(double)arg6;	// 0x32931169
- (int)saveDC;	// 0x327cfd31
- (int)scaleViewportExt:(int)ext :(int)arg2 :(int)arg3 :(int)arg4;	// 0x3287f7a1
- (int)scaleWindowExt:(int)ext :(int)arg2 :(int)arg3 :(int)arg4;	// 0x329fb9e1
- (int)selectClipPath:(int)path;	// 0x328f5581
- (int)selectClipRegion:(unsigned)region :(int)arg2;	// 0x328ea135
- (int)selectClipRegionWithRects:(id)rects :(int)arg2;	// 0x328b4b05
- (int)selectObject:(int)object;	// 0x327cd0fd
- (int)setArcDirection:(int)direction;	// 0x329fb769
- (int)setBkColour:(id)colour;	// 0x3287f6a1
- (int)setBkMode:(int)mode;	// 0x327cd319
- (int)setBrushOrg:(double)org :(double)arg2;	// 0x328f2229
- (void)setColorMap:(id)map fillMap:(id)map2;	// 0x327cb12d
- (int)setMapMode:(int)mode;	// 0x327cb71d
- (int)setMetaRgn;	// 0x32923249
- (int)setMiterLimit:(double)limit;	// 0x329090b9
- (int)setPaletteEntries:(unsigned)entries :(id)arg2 :(unsigned)arg3;	// 0x329fb881
- (int)setPolyFillMode:(int)mode;	// 0x327d4861
- (int)setRop2:(int)a2;	// 0x3287f535
- (int)setStretchBltMode:(int)mode;	// 0x3287f8d1
- (int)setTextAlign:(bool)align :(int)arg2 :(int)arg3 :(int)arg4;	// 0x3287f58d
- (int)setTextCharExtra:(int)extra;	// 0x328f8839
- (int)setTextColour:(const id)colour;	// 0x327cd3b5
- (int)setTextJustification:(int)justification :(int)arg2;	// 0x3287f63d
- (int)setViewBox:(double)box :(double)arg2 :(double)arg3 :(double)arg4;	// 0x327cbdb5
- (int)setViewportExt:(int)ext :(int)arg2;	// 0x327cbd05
- (int)setViewportOrg:(int)org :(int)arg2;	// 0x327cbc89
- (int)setWindowExt:(int)ext :(int)arg2;	// 0x327cbbd9
- (int)setWindowOrg:(int)org :(int)arg2;	// 0x327cb855
- (int)setWorldTransform:(const CGAffineTransform *)transform;	// 0x32923325
- (int)stretchBlt:(int)blt :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(unsigned long)arg10 :(CGAffineTransform *)arg11 :(unsigned long)arg12;	// 0x328800f1
- (int)stretchBlt:(int)blt :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(unsigned long)arg10 :(CGAffineTransform *)arg11 :(unsigned long)arg12 usePaletteForBilevel:(BOOL)bilevel;	// 0x328b4209
- (int)strokeAndFillPath:(bool)path :(bool)arg2;	// 0x3289231d
- (int)textOut:(int)anOut :(int)arg2 :(id)arg3;	// 0x328f4c75
- (int)textOutEncoded:(int)encoded :(int)arg2 :(id)arg3;	// 0x328f4b4d
- (int)widenPath;	// 0x329fba59
@end

