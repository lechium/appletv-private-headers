/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRTextControl, BRMenuView, BRProgressBarWidget;

__attribute__((visibility("hidden")))
@interface SettingsNetworkSpeedTestView : BRControl {
	BRMenuView *_menuView;	// 84 = 0x54
	BRProgressBarWidget *_progressView;	// 88 = 0x58
	BRTextControl *_progressRateView;	// 92 = 0x5c
}
@property(readonly, retain) BRMenuView *menuView;	// G=0xa0b15; converted property
@property(readonly, retain) BRTextControl *progressRateView;	// G=0xa0b3d; converted property
@property(readonly, retain) BRProgressBarWidget *progressView;	// G=0xa0b29; converted property
- (id)init;	// 0xa075d
- (void).cxx_destruct;	// 0xa0b95
- (id)accessibilityLabel;	// 0xa0b55
- (id)accessibilitySecondaryLabel;	// 0xa0b75
- (BOOL)isAccessibilityElement;	// 0xa0b51
- (void)layoutSubcontrols;	// 0xa08d5
// converted property getter: - (id)menuView;	// 0xa0b15
// converted property getter: - (id)progressRateView;	// 0xa0b3d
// converted property getter: - (id)progressView;	// 0xa0b29
@end

