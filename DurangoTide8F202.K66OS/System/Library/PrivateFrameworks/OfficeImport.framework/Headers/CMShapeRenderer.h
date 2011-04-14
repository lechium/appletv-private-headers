/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CMShapeRenderer : NSObject {
}
+ (CGColorRef)_createCGColorFromOADColor:(id)oadcolor andState:(id)state;	// 0x3197d8a5
+ (CGColorRef)_createCGColorFromOADFill:(id)oadfill andState:(id)state;	// 0x318f75f1
+ (CGImageRef)_createImageFromOADImagefill:(id)oadimagefill withContext:(id)context;	// 0x31a64ca9
+ (void)_renderCGPath:(CGPathRef)path stroke:(id)stroke fill:(id)fill orientedBounds:(id)bounds state:(id)state drawingContext:(id)context;	// 0x318f717d
+ (void)_setupDrawingStyleInDrawingContext:(id)drawingContext dash:(id)dash state:(id)state;	// 0x3197d9ad
+ (void)_setupDrawingStyleInDrawingContext:(id)drawingContext fill:(id)fill stroke:(id)stroke state:(id)state;	// 0x318f726d
+ (void)_setupDrawingStyleInDrawingContext:(id)drawingContext stroke:(id)stroke state:(id)state;	// 0x318f72e1
+ (void)renderCanonicalShape:(int)shape fill:(id)fill stroke:(id)stroke adjustValues:(id)values orientedBounds:(id)bounds state:(id)state drawingContext:(id)context;	// 0x318f607d
+ (void)renderDiagramPath:(id)path fill:(id)fill stroke:(id)stroke state:(id)state drawingContext:(id)context;	// 0x31a9eedd
+ (void)renderFreeForm:(id)form fill:(id)fill stroke:(id)stroke orientedBounds:(id)bounds state:(id)state drawingContext:(id)context;	// 0x31981735
+ (void)renderLine:(int)line stroke:(id)stroke adjustValues:(id)values orientedBounds:(id)bounds state:(id)state drawingContext:(id)context;	// 0x3197ffa5
@end

