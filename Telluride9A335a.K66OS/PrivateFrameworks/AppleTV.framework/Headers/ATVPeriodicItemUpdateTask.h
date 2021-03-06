/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBackgroundTask.h"

@class NSURL, BRMerchant, NSOperationQueue, BRURLDocument;
@protocol ATVUpdatable;

@interface ATVPeriodicItemUpdateTask : BRBackgroundTask {
@private
	NSURL *_url;	// 44 = 0x2c
	BRMerchant *_merchant;	// 48 = 0x30
	id<ATVUpdatable> _updatableItem;	// 52 = 0x34
	NSOperationQueue *_callersQueue;	// 56 = 0x38
	BRURLDocument *_currentDocument;	// 60 = 0x3c
}
@property(retain) BRMerchant *merchant;	// G=0x34144c8d; S=0x34144ca1; @synthesize=_merchant
@property(assign) id<ATVUpdatable> updatableItem;	// G=0x3414470d; S=0x341446fd; 
@property(retain) NSURL *url;	// G=0x34144c55; S=0x34144c69; @synthesize=_url
- (id)initWithInterval:(double)interval delay:(double)delay userInfo:(id)info taskType:(int)type;	// 0x341445dd
- (void)_urlDocReady:(id)ready;	// 0x341448ad
- (void)dealloc;	// 0x34144659
// declared property getter: - (id)merchant;	// 0x34144c8d
- (BOOL)perform:(id)perform;	// 0x3414471d
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x34144ca1
// declared property setter: - (void)setUpdatableItem:(id)item;	// 0x341446fd
// declared property setter: - (void)setUrl:(id)url;	// 0x34144c69
// declared property getter: - (id)updatableItem;	// 0x3414470d
// declared property getter: - (id)url;	// 0x34144c55
@end

