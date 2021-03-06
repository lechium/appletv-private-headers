/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <CAEAGLLayer.h> // Unknown library


@interface WebGLLayer : CAEAGLLayer {
	GraphicsLayer *m_layerOwner;	// 52 = 0x34
	GraphicsContext3D *m_context;	// 56 = 0x38
}
@property(assign) GraphicsLayer *layerOwner;	// G=0x3666d0a9; S=0x3666d099; converted property
- (id)initWithGraphicsContext3D:(GraphicsContext3D *)graphicsContext3D;	// 0x3666d01d
- (CGImageRef)copyImageSnapshotWithColorSpace:(CGColorSpaceRef)colorSpace;	// 0x3666d059
- (void)display;	// 0x3666d05d
// converted property getter: - (GraphicsLayer *)layerOwner;	// 0x3666d0a9
// converted property setter: - (void)setLayerOwner:(GraphicsLayer *)owner;	// 0x3666d099
@end

