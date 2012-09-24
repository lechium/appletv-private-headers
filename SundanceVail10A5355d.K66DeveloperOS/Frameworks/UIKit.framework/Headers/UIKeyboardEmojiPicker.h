/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UIKBKeyView.h"

@class UIImageView, UITableView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiPicker : UIKBKeyView <UITableViewDelegate, UITableViewDataSource> {
	UIImageView *_container;	// 112 = 0x70
	UITableView *_picker;	// 116 = 0x74
	UIImageView *_innerShadow;	// 120 = 0x78
}
@property(readonly, retain) UIImageView *container;	// G=0x33e1fdf9; converted property
@property(readonly, assign) UITableView *picker;	// G=0x33e1fefd; @synthesize=_picker
- (id)initWithFrame:(CGRect)frame;	// 0x33e1fba5
// converted property getter: - (id)container;	// 0x33e1fdf9
- (id)containerView;	// 0x33e1faa9
- (void)dealloc;	// 0x33e1fe09
- (id)defaultIndexPath;	// 0x33e1fa89
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x33e1fe85
// declared property getter: - (id)picker;	// 0x33e1fefd
- (BOOL)shouldCache;	// 0x33e1fe81
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x33e1fea5
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x33e1fea9
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x33e1fe89
@end
