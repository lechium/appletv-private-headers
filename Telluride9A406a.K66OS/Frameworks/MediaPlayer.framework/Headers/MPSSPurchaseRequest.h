/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <SSPurchaseRequest.h> // Unknown library

@class MPMediaItem, NSMutableArray, SSPurchase, NSError, SSDownload;

@interface MPSSPurchaseRequest : SSPurchaseRequest {
@private
	BOOL _completed;	// 61 = 0x3d
	NSMutableArray *_completionHandlers;	// 64 = 0x40
	SSDownload *_purchaseDownload;	// 68 = 0x44
	MPMediaItem *_mediaItem;	// 72 = 0x48
	NSError *_purchaseError;	// 76 = 0x4c
	int _purchaseReason;	// 80 = 0x50
}
@property(readonly, assign, nonatomic) BOOL completed;	// G=0x31a7bf89; @synthesize=_completed
@property(readonly, assign, nonatomic) MPMediaItem *mediaItem;	// G=0x31a7bfa9; @synthesize=_mediaItem
@property(readonly, assign, nonatomic) SSPurchase *purchase;	// G=0x31a7bb59; 
@property(assign, nonatomic) int purchaseReason;	// G=0x31a7bf99; S=0x31a7bc7d; @synthesize=_purchaseReason
+ (id)purchaseForMediaItem:(id)mediaItem purchaseReason:(int)reason;	// 0x31a7b821
- (id)initWithMediaItem:(id)mediaItem purchaseReason:(int)reason;	// 0x31a7ba69
- (void)addCompletionHandler:(id)handler;	// 0x31a7bd09
// declared property getter: - (BOOL)completed;	// 0x31a7bf89
- (void)dealloc;	// 0x31a7bb85
- (id)description;	// 0x31a7bc0d
- (void)invokeAndClearAllCompletionHandlers;	// 0x31a7be5d
- (void)invokeCompletionHandler:(id)handler;	// 0x31a7bf61
// declared property getter: - (id)mediaItem;	// 0x31a7bfa9
// declared property getter: - (id)purchase;	// 0x31a7bb59
// declared property getter: - (int)purchaseReason;	// 0x31a7bf99
- (void)setCompletedWithDownload:(id)download error:(id)error;	// 0x31a7bd81
// declared property setter: - (void)setPurchaseReason:(int)reason;	// 0x31a7bc7d
@end
