/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class UIPrintingProgress, UIPrintingMessageView, UINavigationController, UIWindow;

__attribute__((visibility("hidden")))
@interface UIPrintingProgressViewController : UITableViewController {
@private
	UIPrintingProgress *_printingProgress;	// 176 = 0xb0
	UIPrintingMessageView *_messageView;	// 180 = 0xb4
	UINavigationController *_navController;	// 184 = 0xb8
	UIWindow *_window;	// 188 = 0xbc
	double _rotationDelay;	// 192 = 0xc0
}
@property(readonly, assign) double rotationDelay;	// G=0x33225cdd; converted property
- (id)initWithTitle:(id)title message:(id)message printingProgress:(id)progress;	// 0x33225459
- (void)cancelProgress;	// 0x332258b9
- (void)cleanupAfterDismiss;	// 0x33225a09
- (void)dealloc;	// 0x3322567d
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x3322584d
- (void)dismissAnimated:(BOOL)animated;	// 0x33225a91
- (void)doneProgress;	// 0x33225865
// converted property getter: - (double)rotationDelay;	// 0x33225cdd
- (void)setDonePrinting:(BOOL)printing;	// 0x3322593d
- (void)setMessage:(id)message;	// 0x3322591d
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x332256f1
- (void)show;	// 0x332259e9
- (BOOL)visible;	// 0x33225cad
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x33225835
@end

