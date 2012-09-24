/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "SKLayer.h"

@class SKScrollBar, CAScrollLayer;

@interface SKScrollLayer : SKLayer {
	CAScrollLayer *_scrollContent;	// 56 = 0x38
	SKScrollBar *_scrollBarH;	// 60 = 0x3c
	SKScrollBar *_scrollBarV;	// 64 = 0x40
	CGRect _contentRect;	// 68 = 0x44
	CGPoint _origin;	// 84 = 0x54
	CGPoint _mouseDownPoint;	// 92 = 0x5c
	BOOL _enableDrag;	// 100 = 0x64
}
@property(readonly, retain) CAScrollLayer *scrollContent;	// G=0x34f328f5; converted property
- (id)init;	// 0x34f327e1
- (void)addSublayer:(id)sublayer;	// 0x34f32bf9
- (CGRect)contentBounds;	// 0x34f32905
- (BOOL)drags;	// 0x34f32d2d
- (BOOL)handleEvent:(GSEventRef)event inLayer:(id)layer;	// 0x34f32d75
// converted property getter: - (id)scrollContent;	// 0x34f328f5
- (void)setBounds:(CGRect)bounds;	// 0x34f32991
- (void)setEnableDrag:(BOOL)drag;	// 0x34f32d3d
- (void)setOrigin:(CGPoint)origin;	// 0x34f32c71
- (void)setXOrigin:(float)origin;	// 0x34f32d0d
- (void)setYOrigin:(float)origin;	// 0x34f32ced
- (void)updateContentSize;	// 0x34f32a69
- (CGRect)viewableBounds;	// 0x34f32939
@end
