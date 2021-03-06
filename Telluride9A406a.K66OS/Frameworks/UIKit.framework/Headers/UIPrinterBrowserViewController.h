/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "PKPrinterBrowserDelegate.h"
#import "UITableViewController.h"

@class PKPrinter, PKPrinterBrowser, NSMutableArray, UIPrintPanelViewController, UIPrinterSearchingView;

__attribute__((visibility("hidden")))
@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate> {
@private
	UIPrintPanelViewController *_printPanelViewController;	// 176 = 0xb0
	PKPrinterBrowser *_printerBrowser;	// 180 = 0xb4
	NSMutableArray *_printers;	// 184 = 0xb8
	PKPrinter *_lockedPrinter;	// 188 = 0xbc
	BOOL _loaded;	// 192 = 0xc0
	UIPrinterSearchingView *_searchingView;	// 196 = 0xc4
	double _displayTime;	// 200 = 0xc8
	BOOL _clearCurrentPrinter;	// 208 = 0xd0
}
- (id)initWithPrintPanelViewController:(id)printPanelViewController;	// 0x359ccaad
- (void)addPrinter:(id)printer moreComing:(BOOL)coming;	// 0x359cd95d
- (void)adjustPopoverSize;	// 0x359ccc9d
- (void)dealloc;	// 0x359ccbe9
- (void)loadView;	// 0x359cce89
- (void)removePrinter:(id)printer moreGoing:(BOOL)going;	// 0x359cdc75
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x359cd261
- (void)startPrinterBrowser;	// 0x359ccef1
- (void)stopPrinterBrowser;	// 0x359ccf51
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x359cd2a5
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x359cd6e5
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x359cd285
- (void)updateSearching;	// 0x359ccfc5
- (void)viewDidDisappear:(BOOL)view;	// 0x359cd1f9
- (void)viewWillAppear:(BOOL)view;	// 0x359cd0f1
- (void)viewWillDisappear:(BOOL)view;	// 0x359cd165
- (void)willEnterForeground;	// 0x359cd0a1
@end

