/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITableViewController.h"
#import "UIKit-Structs.h"

@class UIPrintPanelViewController, UIButton;

__attribute__((visibility("hidden")))
@interface UIPrintPanelTableViewController : UITableViewController {
@private
	UIPrintPanelViewController *_printPanelViewController;	// 144 = 0x90
	UIButton *_printButton;	// 148 = 0x94
	BOOL _waitingForPrinterLookup;	// 152 = 0x98
}
- (id)initWithPrintPanelViewController:(id)printPanelViewController;	// 0x306aeb91
- (void)_setupPrintButtons;	// 0x306aed01
- (void)_update;	// 0x306aec09
- (void)dealloc;	// 0x306b1b21
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x306af1fd
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x306af585
- (void)showCancelButton;	// 0x306af361
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x306afcdd
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x30864cb5
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x306af201
- (void)updateCopies:(id)copies;	// 0x30864f09
- (void)updateDuplex:(id)duplex;	// 0x30864de5
- (void)updatePageRange:(NSRange)range;	// 0x30864e1d
- (void)viewDidDisappear:(BOOL)view;	// 0x30864e5d
- (void)viewDidLoad;	// 0x306af179
- (void)viewDidUnload;	// 0x30864ebd
- (void)viewWillAppear:(BOOL)view;	// 0x306afc9d
@end

