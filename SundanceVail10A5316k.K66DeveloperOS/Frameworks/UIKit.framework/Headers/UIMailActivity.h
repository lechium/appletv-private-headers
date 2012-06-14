/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIActivity.h"

@class MFMailComposeViewController;

@interface UIMailActivity : UIActivity {
@private
	MFMailComposeViewController *_mailComposeViewController;	// 8 = 0x8
}
@property(retain, nonatomic) MFMailComposeViewController *mailComposeViewController;	// G=0x304badc1; S=0x304bae05; @synthesize=_mailComposeViewController
- (id)_activityImage;	// 0x304ba3e5
- (void)_cleanup;	// 0x304badf1
- (id)activityTitle;	// 0x304ba459
- (id)activityType;	// 0x304ba3d5
- (id)activityViewController;	// 0x304badb1
- (BOOL)canPerformWithActivityItems:(id)activityItems;	// 0x304ba475
- (void)dealloc;	// 0x304ba389
- (void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;	// 0x304badd1
// declared property getter: - (id)mailComposeViewController;	// 0x304badc1
- (void)prepareWithActivityItems:(id)activityItems;	// 0x304ba489
// declared property setter: - (void)setMailComposeViewController:(id)controller;	// 0x304bae05
@end

