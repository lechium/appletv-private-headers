/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVAssetWriterInputWritingHelper;
@protocol OS_dispatch_queue;

@interface AVAssetWriterInputMediaDataRequester : NSObject {
@private
	AVAssetWriterInputWritingHelper *_writingHelper;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_requestQueue;	// 8 = 0x8
	id _requestBlock;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) id requestBlock;	// G=0x3673ab05; @synthesize=_requestBlock
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;	// G=0x3673aaf5; @synthesize=_requestQueue
- (id)init;	// 0x3673a559
- (id)initWithAssetWriterInputWritingHelper:(id)assetWriterInputWritingHelper requestQueue:(id)queue requestBlock:(id)block;	// 0x3673a3e5
- (void)_requestMediaDataIfReady;	// 0x3673a861
- (void)dealloc;	// 0x3673a57d
- (void)finalize;	// 0x3673a5c1
- (void)invalidate;	// 0x3673a681
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3673a771
// declared property getter: - (id)requestBlock;	// 0x3673ab05
// declared property getter: - (id)requestQueue;	// 0x3673aaf5
- (void)startRequestingMediaData;	// 0x3673a605
@end

