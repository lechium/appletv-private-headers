/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicCloudAdView.h"
#import "AppleTV-Structs.h"

@class BRProgressBarWidget, BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface MusicCloudProgressView : MusicCloudAdView {
	BRProgressBarWidget *_progressBar;	// 84 = 0x54
	BRWaitSpinnerControl *_loadingSpinner;	// 88 = 0x58
}
- (id)init;	// 0x7c175
- (void).cxx_destruct;	// 0x7c705
- (void)_connectionProgressHandler:(id)handler;	// 0x7c4e9
- (id)accessibilityLabel;	// 0x7c61d
- (void)dealloc;	// 0x7c35d
- (BOOL)isAccessibilityElement;	// 0x7c619
- (void)layoutSubcontrols;	// 0x7c3c9
@end

