/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBackgroundTask.h"

@class BRMerchant, NSURL, BRURLDocument, NSOperationQueue;
@protocol ATVUpdatable;

@interface ATVPeriodicItemUpdateTask : BRBackgroundTask {
@private
	NSURL *_url;	// 44 = 0x2c
	BRMerchant *_merchant;	// 48 = 0x30
	id<ATVUpdatable> _updatableItem;	// 52 = 0x34
	NSOperationQueue *_callersQueue;	// 56 = 0x38
	BRURLDocument *_currentDocument;	// 60 = 0x3c
}
@property(retain) BRMerchant *merchant;	// G=0x301f332d; S=0x301f3341; @synthesize=_merchant
@property(assign) id<ATVUpdatable> updatableItem;	// G=0x301f2db1; S=0x301f2da1; 
@property(retain) NSURL *url;	// G=0x301f32f5; S=0x301f3309; @synthesize=_url
- (id)initWithInterval:(double)interval delay:(double)delay userInfo:(id)info taskType:(int)type;	// 0x301f2c81
- (void)_urlDocReady:(id)ready;	// 0x301f2f4d
- (void)dealloc;	// 0x301f2cfd
// declared property getter: - (id)merchant;	// 0x301f332d
- (BOOL)perform:(id)perform;	// 0x301f2dc1
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x301f3341
// declared property setter: - (void)setUpdatableItem:(id)item;	// 0x301f2da1
// declared property setter: - (void)setUrl:(id)url;	// 0x301f3309
// declared property getter: - (id)updatableItem;	// 0x301f2db1
// declared property getter: - (id)url;	// 0x301f32f5
@end

