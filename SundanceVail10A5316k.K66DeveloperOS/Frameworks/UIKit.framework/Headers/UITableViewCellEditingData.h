/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UITableViewCellDeleteConfirmationControl, UIView, UITableViewCell, UITableViewCellReorderControl, UITableViewCellEditControl;

__attribute__((visibility("hidden")))
@interface UITableViewCellEditingData : NSObject {
@private
	UITableViewCell *_cell;	// 4 = 0x4
	int _editingStyle;	// 8 = 0x8
	UITableViewCellEditControl *_editControl;	// 12 = 0xc
	UITableViewCellReorderControl *_reorderControl;	// 16 = 0x10
	UITableViewCellDeleteConfirmationControl *_deleteConfirmationControl;	// 20 = 0x14
	UIView *_reorderSeparatorView;	// 24 = 0x18
}
@property(readonly, assign, nonatomic, getter=isDataRequired) BOOL dataRequired;	// G=0x30318acd; 
- (id)initWithTableViewCell:(id)tableViewCell editingStyle:(int)style;	// 0x301a8515
- (void)dealloc;	// 0x301a9471
- (id)deleteConfirmationControl:(BOOL)control;	// 0x301a9079
- (id)editControl:(BOOL)control;	// 0x301a862d
// declared property getter: - (BOOL)isDataRequired;	// 0x30318acd
- (id)reorderControl:(BOOL)control;	// 0x301a8ded
- (id)reorderSeparatorView:(BOOL)view;	// 0x301a8e6d
@end
