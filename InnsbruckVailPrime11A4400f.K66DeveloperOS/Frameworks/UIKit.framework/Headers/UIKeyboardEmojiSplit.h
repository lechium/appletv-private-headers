/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardEmojiPressIndicationDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UIKBKeyView.h"

@class UITableView, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplit : UIKBKeyView <UITableViewDelegate, UITableViewDataSource, UIKeyboardEmojiPressIndicationDelegate> {
	UITableView *_picker;	// 148 = 0x94
	UIView *_pressIndicator;	// 152 = 0x98
}
@property(readonly, assign) UITableView *picker;	// G=0x2f703449; @synthesize=_picker
@property(retain, nonatomic) UIView *pressIndicator;	// G=0x2f70345d; S=0x2f70346d; @synthesize=_pressIndicator
- (id)initWithFrame:(CGRect)frame;	// 0x2f703095
- (void)dealloc;	// 0x2f7031d1
- (id)defaultIndexPath;	// 0x2f703075
- (void)installPressIndicatorAtPoint:(CGPoint)point;	// 0x2f703239
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x2f703381
// declared property getter: - (id)picker;	// 0x2f703449
// declared property getter: - (id)pressIndicator;	// 0x2f70345d
- (void)removePressIndicator;	// 0x2f703359
// declared property setter: - (void)setPressIndicator:(id)indicator;	// 0x2f70346d
- (BOOL)shouldCache;	// 0x2f703235
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x2f7033a1
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x2f7033a5
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x2f703385
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x2f7033f9
@end
