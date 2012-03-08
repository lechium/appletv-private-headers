/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "UIActionSheetDelegate.h"
#import <UIActionSheet.h> // Unknown library

@class UIWindow, UIViewController, MPAudioDeviceController;

@interface MPAudioVideoRoutingActionSheet : UIActionSheet <UIActionSheetDelegate> {
@private
	int _airPlayPasswordAlertDidAppearToken;	// 188 = 0xbc
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;	// 192 = 0xc0
	MPAudioDeviceController *_audioDeviceController;	// 196 = 0xc4
	unsigned _avItemType;	// 200 = 0xc8
	id _completionHandler;	// 204 = 0xcc
	UIViewController *_viewControllerForActionSheet;	// 208 = 0xd0
	UIWindow *_windowForActionSheet;	// 212 = 0xd4
}
- (id)initWithType:(unsigned)type;	// 0x309c28a1
- (BOOL)_isDeviceVideoRoute:(id)route;	// 0x309c3651
- (id)_routes;	// 0x309c36dd
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x309c2fc1
- (void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;	// 0x309c33d1
- (void)dealloc;	// 0x309c2d65
- (void)layoutSubviews;	// 0x309c2e25
- (void)showInPopoverFromRect:(CGRect)rect inView:(id)view backgroundStyle:(int)style animated:(BOOL)animated completionHandler:(id)handler;	// 0x309c35e1
- (void)showWithValidInterfaceOrientationsBlock:(id)validInterfaceOrientationsBlock completionHandler:(id)handler;	// 0x309c3481
@end

