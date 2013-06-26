/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <UIKit/UINavigationController.h>

@class UIBarButtonItem;

@interface PTSettingsController : UINavigationController {
	UIBarButtonItem *_dismissButton;	// 424 = 0x1a8
}
@property(retain, nonatomic) UIBarButtonItem *dismissButton;	// G=0x325a83c5; S=0x325a818d; @synthesize=_dismissButton
- (id)initWithRootModuleController:(id)rootModuleController;	// 0x325a8129
- (id)initWithRootSettings:(id)rootSettings;	// 0x325a80b9
- (void).cxx_destruct;	// 0x325a83d5
- (id)_defaultDismissButton;	// 0x325a8339
- (void)_dismiss;	// 0x325a8389
// declared property getter: - (id)dismissButton;	// 0x325a83c5
- (void)pushViewController:(id)controller animated:(BOOL)animated;	// 0x325a82a9
// declared property setter: - (void)setDismissButton:(id)button;	// 0x325a818d
@end
