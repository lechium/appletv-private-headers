/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class NSArray, UIPrintingMessageView;

__attribute__((visibility("hidden")))
@interface UIPrintStatusJobsViewController : UITableViewController {
@private
	NSArray *_jobs;	// 172 = 0xac
	BOOL _autoPush;	// 176 = 0xb0
	UIPrintingMessageView *_noJobsView;	// 180 = 0xb4
}
- (id)init;	// 0x3038d4c9
- (CGSize)contentSizeForViewInPopover;	// 0x3038d63d
- (void)dealloc;	// 0x3038d53d
- (void)handleJobListDidChange;	// 0x3038e059
- (void)loadView;	// 0x3038d5cd
- (void)pushJob:(id)job animated:(BOOL)animated;	// 0x3038d651
- (void)pushSingleJobAnimated:(BOOL)animated;	// 0x3038d719
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3038e355
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x3038e3e5
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;	// 0x3038e515
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3038e4c1
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3038e3c5
- (void)updateForJobCountChange;	// 0x3038d75d
- (void)updateJobInfo:(id)info;	// 0x3038db69
- (void)updateTableViewCell:(id)cell withJob:(id)job;	// 0x3038d9bd
- (void)viewWillAppear:(BOOL)view;	// 0x3038e1e9
- (void)viewWillDisappear:(BOOL)view;	// 0x3038e2e5
- (id)visibleJobs;	// 0x3038d8c1
- (void)willReappear;	// 0x3038e181
@end
