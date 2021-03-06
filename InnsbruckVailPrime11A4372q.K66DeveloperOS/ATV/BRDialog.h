/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRControl, NSString, BRWindow;

__attribute__((visibility("hidden")))
@interface BRDialog : XXUnknownSuperclass {
	BRWindow *_window;	// 4 = 0x4
	BRControl *_control;	// 8 = 0x8
	BRControl *_dialogControl;	// 12 = 0xc
	NSString *_identifier;	// 16 = 0x10
}
@property(readonly, retain) BRControl *control;	// G=0x3ebea9; converted property
@property(readonly, retain) NSString *identifier;	// G=0x3ebee1; converted property
+ (BOOL)_autodismissIfPossible:(id)possible;	// 0x3ece0d
+ (void)autoDismissAllDialogs;	// 0x3ecb91
+ (void)dismissDialogWithIdentifier:(id)identifier;	// 0x3ec8b9
+ (void)initialize;	// 0x3ebbed
+ (BOOL)isDialogCurrentlyPosted;	// 0x3ec2bd
+ (BOOL)isDialogPostedWithIdentifier:(id)identifier;	// 0x3ec259
+ (BOOL)isInModalLoop;	// 0x3ec239
+ (void)postDialogWithControl:(id)control identifier:(id)identifier;	// 0x3ec2e5
+ (void)postDialogWithControl:(id)control identifier:(id)identifier style:(int)style opaque:(BOOL)opaque;	// 0x3ec0a1
+ (void)postModalDialog:(id)dialog;	// 0x3ec379
+ (void)postModalDialogWithControl:(id)control identifier:(id)identifier;	// 0x3ec315
+ (void)postModalDialogWithControl:(id)control identifier:(id)identifier style:(int)style opaque:(BOOL)opaque;	// 0x3ec6a9
+ (void)postModalDialogWithController:(id)controller identifier:(id)identifier;	// 0x3ec345
+ (void)postModalDialogWithController:(id)controller identifier:(id)identifier style:(int)style opaque:(BOOL)opaque;	// 0x3ec719
+ (void)postModalDialogWithControllerStack:(id)controllerStack identifier:(id)identifier style:(int)style opaque:(BOOL)opaque;	// 0x3ec7c5
+ (void)setIsInModalLoop:(BOOL)modalLoop;	// 0x3ec249
- (id)initWithControl:(id)control identifier:(id)identifier style:(int)style opaque:(BOOL)opaque;	// 0x3ebc51
- (id)_dialogControl;	// 0x3ecdfd
- (void)_dialogStackBankrupt:(id)bankrupt;	// 0x3ecd35
- (void)_transitionCompleted:(id)completed;	// 0x3ecd6d
// converted property getter: - (id)control;	// 0x3ebea9
- (void)dealloc;	// 0x3ebddd
- (id)description;	// 0x3ebdcd
// converted property getter: - (id)identifier;	// 0x3ebee1
- (void)transitionIn;	// 0x3ebf19
- (void)transitionOut;	// 0x3ebf9d
@end

