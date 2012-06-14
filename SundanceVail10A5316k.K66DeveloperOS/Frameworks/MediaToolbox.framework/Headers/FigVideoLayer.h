/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <CALayer.h> // Unknown library

@class FigVideoLayerInternal;

@interface FigVideoLayer : CALayer {
@private
	FigVideoLayerInternal *_videoLayer;	// 48 = 0x30
}
- (id)init;	// 0x3322efa9
- (id)initWithLayer:(id)layer;	// 0x3322f0dd
- (void)_sendVideoLayerIsBeingServicedNotification;	// 0x3322f585
- (void)dealloc;	// 0x3322f1d9
- (void)finalize;	// 0x3322f2c1
- (BOOL)isVideoLayerBeingServiced;	// 0x3322f4b5
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x3322f361
- (void)notificationBarrier;	// 0x3322f551
@end

