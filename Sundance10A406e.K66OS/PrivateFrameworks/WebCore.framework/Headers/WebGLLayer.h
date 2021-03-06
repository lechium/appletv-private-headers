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
@property(assign) GraphicsLayer *layerOwner;	// G=0x322dc581; S=0x322dc571; converted property
- (id)initWithGraphicsContext3D:(GraphicsContext3D *)graphicsContext3D;	// 0x322dc4f5
- (CGImageRef)copyImageSnapshotWithColorSpace:(CGColorSpaceRef)colorSpace;	// 0x322dc531
- (void)display;	// 0x322dc535
// converted property getter: - (GraphicsLayer *)layerOwner;	// 0x322dc581
// converted property setter: - (void)setLayerOwner:(GraphicsLayer *)owner;	// 0x322dc571
@end

