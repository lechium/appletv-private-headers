/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITable.h"

@class UIPreferencesTableCell, NSMutableArray, UIKeyboard;

@interface UIPreferencesTable : UITable {
@private
	UIPreferencesTableCell *_editingCell;	// 444 = 0x1bc
	int _editingCellRow;	// 448 = 0x1c0
	NSMutableArray *_groupItems;	// 452 = 0x1c4
	UIKeyboard *_keyboard;	// 456 = 0x1c8
	float _textOffset;	// 460 = 0x1cc
	CFDictionaryRef _piecesForCell;	// 464 = 0x1d0
	unsigned _datasourceCellForGroup : 1;	// 468 = 0x1d4
	unsigned _datasourceIsRadioGroup : 1;	// 468 = 0x1d4
	unsigned _datasourceIsLabelGroup : 1;	// 468 = 0x1d4
	unsigned _datasourceIsRowCheckedInRadioGroup : 1;	// 468 = 0x1d4
	unsigned _centersContent : 1;	// 468 = 0x1d4
	unsigned _reserved : 27;	// 468 = 0x1d4
}
@property(readonly, retain) UIKeyboard *keyboard;	// G=0x330c5cd1; converted property
@property(assign) BOOL keyboardVisible;	// G=0x330c5cb9; S=0x330c5d21; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x330c15f1
- (void)_animatePiecesOfCell:(id)cell isFirstItemInGroup:(BOOL)group isDeletion:(BOOL)deletion isDestinationRowFrame:(CGRect)frame;	// 0x330c3bc1
- (BOOL)_beginEditingNextCell;	// 0x330c63b1
- (int)_cellOutlineForRow:(int)row withChildCount:(int)childCount isLabelGroup:(BOOL)group;	// 0x330c232d
- (id)_copyPieceOfCell:(id)cell withContentsPosition:(int)contentsPosition;	// 0x330c349d
- (id)_editingCell;	// 0x330c6235
- (id)_existingPieceForCell:(id)cell;	// 0x330c3435
- (void)_fadeCellOutAnimationDidStop:(id)_fadeCellOutAnimation finished:(id)finished context:(id)context;	// 0x330c362d
- (void)_fadeCellOutAnimationDidStopAndFixOutlines:(id)_fadeCellOutAnimation finished:(id)finished context:(id)context;	// 0x330c3775
- (void)_fadeCellSelection;	// 0x330c1b41
- (id)_groupItemForTableRow:(int)tableRow andGroupIndex:(int *)index andRow:(int *)row;	// 0x330c1eb5
- (id)_groupItemForTableRow:(int)tableRow andGroupIndex:(int *)index andRow:(int *)row inGroups:(id)groups;	// 0x330c1e01
- (void)_keyboardRemoveAnimationCompleted:(id)completed;	// 0x330c5ce1
- (int)_paddingForCenteringContent;	// 0x330c2e85
- (void)_removeContextFromSuperview:(id)superview finished:(id)finished context:(id)context;	// 0x330c36bd
- (void)_removePiecesFromSuperview:(id)superview;	// 0x330c36d1
- (void)_removePiecesFromSuperview:(id)superview finished:(id)finished context:(id)context;	// 0x330c3761
- (BOOL)_scrollsToMakeFirstResponderVisible;	// 0x330c5d35
- (void)_setAlpha:(float)alpha forSubviewsOf:(id)of;	// 0x330c33b9
- (void)_setEditingCell:(id)cell;	// 0x330c6245
- (void)_updateContentSize;	// 0x330c30a5
- (void)_updatePaddingForCenteringContent;	// 0x330c2ffd
- (BOOL)_userCanDeleteRows;	// 0x330c3fd5
- (id)_visibleCheckedCellInTableRowRange:(NSRange)tableRowRange;	// 0x330c1a45
- (void)addTableColumn:(id)column;	// 0x330c1945
- (void)animateDeletionOfRowWithCell:(id)cell viaEdge:(int)edge;	// 0x330c3151
- (float)animationDuration;	// 0x330c359d
- (BOOL)canDeleteRow:(int)row;	// 0x330c185d
- (BOOL)canHandleSwipes;	// 0x330c1859
- (BOOL)canInsertAtRow:(int)row;	// 0x330c18d1
- (BOOL)canSelectRow:(int)row;	// 0x330c19ad
- (id)dataSourceCreateCellForRow:(int)row column:(int)column reusing:(id)reusing;	// 0x330c2355
- (int)dataSourceGetRowCount;	// 0x330c2129
- (BOOL)dataSourceSupportsVariableRowHeights;	// 0x330c3119
- (void)dealloc;	// 0x330c1545
- (void)deleteItems:(id)items;	// 0x330c3609
- (void)deleteRows:(id)rows viaEdge:(int)edge;	// 0x330c338d
- (int)editingRow;	// 0x330c63a1
- (void)enableRowDeletion:(BOOL)deletion animated:(BOOL)animated;	// 0x330c396d
- (BOOL)floatArray:(id)array loadValues:(float *)values count:(int)count;	// 0x330c2985
- (CGRect)frameOfPreferencesCellAtRow:(int)row inGroup:(int)group;	// 0x330c2935
- (BOOL)getGroup:(int *)group row:(int *)row forTableRow:(int)tableRow;	// 0x330c1f7d
- (BOOL)getGroup:(int *)group row:(int *)row ofPreferencesTableCell:(id)preferencesTableCell;	// 0x330c1f01
- (int)groupForTableRow:(int)tableRow;	// 0x330c1f59
- (void)insertItems:(id)items;	// 0x330c35e9
- (void)insertItems:(id)items deleteItems:(id)items2 andReloadIndexes:(id)indexes;	// 0x330c4059
// converted property getter: - (id)keyboard;	// 0x330c5cd1
// converted property getter: - (BOOL)keyboardVisible;	// 0x330c5cb9
- (void)reloadData;	// 0x330c35a9
- (void)resumeWithNotification:(id)notification;	// 0x330c5d39
- (void)scrollAndCenterTableCell:(id)cell animated:(BOOL)animated;	// 0x330c5db9
- (void)selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade;	// 0x330c1b65
- (void)setBottomBufferHeight:(float)height;	// 0x330c5d79
- (void)setCentersContent:(BOOL)content;	// 0x330c304d
- (void)setDataSource:(id)source;	// 0x330c1fa9
- (void)setFrame:(CGRect)frame;	// 0x330c17c9
// converted property setter: - (void)setKeyboardVisible:(BOOL)visible;	// 0x330c5d21
- (void)setKeyboardVisible:(BOOL)visible animated:(BOOL)animated;	// 0x330c5e19
- (BOOL)shouldIndentRow:(int)row;	// 0x330c32b9
- (int)tableRowForRow:(int)row inGroup:(int)group;	// 0x330c1dad
- (BOOL)validateDataSource;	// 0x330c20c1
- (id)visiblePreferencesCellForRow:(int)row inGroup:(int)group;	// 0x330c311d
@end

