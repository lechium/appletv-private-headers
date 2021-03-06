/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIActivity.h"

@class MFMessageComposeViewController;

@interface UIMessageActivity : UIActivity {
	MFMessageComposeViewController *_messageComposeViewController;	// 8 = 0x8
}
@property(retain, nonatomic) MFMessageComposeViewController *messageComposeViewController;	// G=0x330dc82d; S=0x330dc895; @synthesize=_messageComposeViewController
- (id)_activityImage;	// 0x32e1f6e1
- (void)_cleanup;	// 0x330dc855
- (id)activityTitle;	// 0x32e1f70d
- (id)activityType;	// 0x32e1dc9d
- (id)activityViewController;	// 0x330dc81d
- (BOOL)canPerformWithActivityItems:(id)activityItems;	// 0x330dc66d
- (void)dealloc;	// 0x32e2fa11
// declared property getter: - (id)messageComposeViewController;	// 0x330dc82d
- (void)messageComposeViewController:(id)controller didFinishWithResult:(int)result;	// 0x330dc83d
- (void)prepareWithActivityItems:(id)activityItems;	// 0x330dc6a9
// declared property setter: - (void)setMessageComposeViewController:(id)controller;	// 0x330dc895
@end

