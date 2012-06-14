/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRWindow, NSString, BRControl;

@interface BRDialog : NSObject {
@private
	BRWindow *_window;	// 4 = 0x4
	BRControl *_control;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
}
@property(readonly, retain) BRControl *control;	// G=0x33102475; converted property
@property(readonly, retain) NSString *identifier;	// G=0x331024ad; converted property
+ (void)dismissDialogWithIdentifier:(id)identifier;	// 0x33102ce5
+ (void)initialize;	// 0x331021f1
+ (BOOL)isDialogCurrentlyPosted;	// 0x33102865
+ (BOOL)isDialogPostedWithIdentifier:(id)identifier;	// 0x331027fd
+ (void)postDialogWithControl:(id)control identifier:(id)identifier;	// 0x33102891
+ (void)postDialogWithControl:(id)control identifier:(id)identifier style:(int)style opaque:(BOOL)opaque;	// 0x33102669
+ (void)postModalDialog:(id)dialog;	// 0x331028fd
+ (void)postModalDialogWithControl:(id)control identifier:(id)identifier;	// 0x331028b5
+ (void)postModalDialogWithControl:(id)control identifier:(id)identifier style:(int)style opaque:(BOOL)opaque;	// 0x33102b59
+ (void)postModalDialogWithController:(id)controller identifier:(id)identifier;	// 0x331028d9
+ (void)postModalDialogWithController:(id)controller identifier:(id)identifier style:(int)style opaque:(BOOL)opaque;	// 0x33102bc9
- (id)initWithControl:(id)control identifier:(id)identifier style:(int)style opaque:(BOOL)opaque;	// 0x33102255
- (void)_dialogStackBankrupt:(id)bankrupt;	// 0x33102fa5
- (void)_transitionCompleted:(id)completed;	// 0x33102fdd
// converted property getter: - (id)control;	// 0x33102475
- (void)dealloc;	// 0x331023bd
// converted property getter: - (id)identifier;	// 0x331024ad
- (void)transitionIn;	// 0x331024e5
- (void)transitionOut;	// 0x33102569
@end
