/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <__objc_empty_cache.h> // Unknown library

@class FigVideoLayerInternal;

@interface FigVideoLayer : __objc_empty_cache {
	FigVideoLayerInternal *_videoLayer;	// 48 = 0x30
}
- (id)init;	// 0x335eac49
- (id)initWithLayer:(id)layer;	// 0x335ead29
- (void)_sendVideoLayerIsBeingServicedNotification;	// 0x335eb0dd
- (void)dealloc;	// 0x335eae25
- (void)finalize;	// 0x335eaed5
- (BOOL)isVideoLayerBeingServiced;	// 0x335eb069
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x335eaf75
- (void)notificationBarrier;	// 0x335eb0a9
@end
