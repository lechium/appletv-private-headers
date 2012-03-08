/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMShapeBuilder.h"
#import "OfficeImport-Structs.h"

@class OADStroke;

__attribute__((visibility("hidden")))
@interface CMLineShapeBuilder : CMShapeBuilder {
@private
	OADStroke *_stroke;	// 20 = 0x14
}
- (float)_adjustedCoefAtIndex:(int)index;	// 0x329f00f1
- (CGRect)_boundingBoxForLineEnd:(id)lineEnd;	// 0x3292616d
- (float)_getRotationFromPoint:(CGPoint)point toPoint:(CGPoint)point2 withBounds:(id)bounds;	// 0x32925c31
- (void)_renderBentConnector2InPath:(CGPathRef)path withTransform:(CGAffineTransform)transform andOrientedBounds:(id)bounds headSrc:(CGPoint *)src headDst:(CGPoint *)dst tailSrc:(CGPoint *)src6 tailDst:(CGPoint *)dst7;	// 0x329f96a5
- (void)_renderBentConnector3InPath:(CGPathRef)path withTransform:(CGAffineTransform)transform andOrientedBounds:(id)bounds headSrc:(CGPoint *)src headDst:(CGPoint *)dst tailSrc:(CGPoint *)src6 tailDst:(CGPoint *)dst7;	// 0x329eff7d
- (void)_renderLineEnd:(id)end atPoint:(CGPoint)point withOrientation:(float)orientation inPath:(CGPathRef)path;	// 0x32925cb9
- (void)_renderStraightConnector1InPath:(CGPathRef)path withTransform:(CGAffineTransform)transform andOrientedBounds:(id)bounds headSrc:(CGPoint *)src headDst:(CGPoint *)dst tailSrc:(CGPoint *)src6 tailDst:(CGPoint *)dst7;	// 0x32925b19
- (CGPathRef)createShapeWithTransform:(CGAffineTransform)transform;	// 0x3292584d
- (void)dealloc;	// 0x32926371
- (void)setStroke:(id)stroke;	// 0x32925471
@end

