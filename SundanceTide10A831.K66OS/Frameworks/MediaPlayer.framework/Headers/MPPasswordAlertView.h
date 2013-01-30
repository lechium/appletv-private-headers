/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIAlertView.h> // Unknown library
#import "UIAlertViewDelegate.h"

@class UITextField;

@interface MPPasswordAlertView : UIAlertView <UIAlertViewDelegate> {
	id _completionHandler;	// 192 = 0xc0
	int _style;	// 196 = 0xc4
	UITextField *_passwordTextField;	// 200 = 0xc8
}
@property(readonly, assign, nonatomic) int style;	// G=0x36f5110d; @synthesize=_style
- (id)initWithStyle:(int)style routeName:(id)name completionHandler:(id)handler;	// 0x36f50d9d
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate cancelButtonTitle:(id)title4 otherButtonTitles:(id)titles;	// 0x36f50fb5
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x36f51069
- (void)dealloc;	// 0x36f51005
// declared property getter: - (int)style;	// 0x36f5110d
@end
