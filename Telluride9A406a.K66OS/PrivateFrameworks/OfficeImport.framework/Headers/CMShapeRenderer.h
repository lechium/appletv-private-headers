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
+ (CGColorRef)_createCGColorFromOADColor:(id)oadcolor andState:(id)state;	// 0x328ec97d
+ (CGColorRef)_createCGColorFromOADFill:(id)oadfill andState:(id)state;	// 0x328e69e1
+ (CGImageRef)_createImageFromOADImagefill:(id)oadimagefill withContext:(id)context;	// 0x329ddd4d
+ (void)_renderCGPath:(CGPathRef)path stroke:(id)stroke fill:(id)fill orientedBounds:(id)bounds state:(id)state drawingContext:(id)context;	// 0x328e64f5
+ (void)_setupDrawingStyleInDrawingContext:(id)drawingContext dash:(id)dash state:(id)state;	// 0x328ecab5
+ (void)_setupDrawingStyleInDrawingContext:(id)drawingContext fill:(id)fill stroke:(id)stroke state:(id)state;	// 0x328e65f5
+ (void)_setupDrawingStyleInDrawingContext:(id)drawingContext stroke:(id)stroke state:(id)state;	// 0x328e667d
+ (void)renderCanonicalShape:(int)shape fill:(id)fill stroke:(id)stroke adjustValues:(id)values orientedBounds:(id)bounds state:(id)state drawingContext:(id)context;	// 0x328e5a21
+ (void)renderDiagramPath:(id)path fill:(id)fill stroke:(id)stroke state:(id)state drawingContext:(id)context;	// 0x32a2346d
+ (void)renderFreeForm:(id)form fill:(id)fill stroke:(id)stroke orientedBounds:(id)bounds state:(id)state drawingContext:(id)context;	// 0x3296716d
+ (void)renderLine:(int)line stroke:(id)stroke adjustValues:(id)values orientedBounds:(id)bounds state:(id)state drawingContext:(id)context;	// 0x329252dd
@end

