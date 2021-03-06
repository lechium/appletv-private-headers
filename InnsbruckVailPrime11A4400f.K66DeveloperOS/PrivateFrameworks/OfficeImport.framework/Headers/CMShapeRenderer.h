/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"


@interface CMShapeRenderer : NSObject {
}
+ (CGColorRef)_copyCGColorFromOADColor:(id)oadcolor andState:(id)state;	// 0x31781c71
+ (CGColorRef)_copyCGColorFromOADFill:(id)oadfill andState:(id)state;	// 0x3177b62d
+ (CGImageRef)_copyImageFromOADImagefill:(id)oadimagefill withContext:(id)context;	// 0x3184adb9
+ (void)_renderCGPath:(CGPathRef)path stroke:(id)stroke fill:(id)fill orientedBounds:(id)bounds state:(id)state drawingContext:(id)context;	// 0x3177b125
+ (void)_setupDrawingStyleInDrawingContext:(id)drawingContext dash:(id)dash state:(id)state;	// 0x31781dd1
+ (void)_setupDrawingStyleInDrawingContext:(id)drawingContext fill:(id)fill stroke:(id)stroke state:(id)state;	// 0x3177b22d
+ (void)_setupDrawingStyleInDrawingContext:(id)drawingContext stroke:(id)stroke state:(id)state;	// 0x3177b2d9
+ (void)renderCanonicalShape:(int)shape fill:(id)fill stroke:(id)stroke adjustValues:(id)values orientedBounds:(id)bounds state:(id)state drawingContext:(id)context;	// 0x3177a571
+ (void)renderDiagramPath:(id)path fill:(id)fill stroke:(id)stroke state:(id)state drawingContext:(id)context;	// 0x3189bf11
+ (void)renderFreeForm:(id)form fill:(id)fill stroke:(id)stroke orientedBounds:(id)bounds state:(id)state drawingContext:(id)context;	// 0x317d3729
+ (void)renderLine:(int)line stroke:(id)stroke adjustValues:(id)values orientedBounds:(id)bounds state:(id)state drawingContext:(id)context;	// 0x317c0305
@end

