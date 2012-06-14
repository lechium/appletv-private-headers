/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITableViewCell, UITableView;

__attribute__((visibility("hidden")))
@interface _UITableViewSeparatorView : UIView {
@private
	UITableViewCell *_tableCell;	// 48 = 0x30
	UITableView *_table;	// 52 = 0x34
}
- (id)initWithFrame:(CGRect)frame withTable:(id)table;	// 0x300e5fa9
- (id)initWithTableCell:(id)tableCell;	// 0x302b437d
- (void)drawRect:(CGRect)rect;	// 0x300e6009
@end
