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
@property(readonly, retain) UIKeyboard *keyboard;	// G=0x30224be5; converted property
@property(assign) BOOL keyboardVisible;	// G=0x30224bcd; S=0x30224c35; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x30220505
- (void)_animatePiecesOfCell:(id)cell isFirstItemInGroup:(BOOL)group isDeletion:(BOOL)deletion isDestinationRowFrame:(CGRect)frame;	// 0x30222ad5
- (BOOL)_beginEditingNextCell;	// 0x302252c5
- (int)_cellOutlineForRow:(int)row withChildCount:(int)childCount isLabelGroup:(BOOL)group;	// 0x30221241
- (id)_copyPieceOfCell:(id)cell withContentsPosition:(int)contentsPosition;	// 0x302223b1
- (id)_editingCell;	// 0x30225149
- (id)_existingPieceForCell:(id)cell;	// 0x30222349
- (void)_fadeCellOutAnimationDidStop:(id)_fadeCellOutAnimation finished:(id)finished context:(id)context;	// 0x30222541
- (void)_fadeCellOutAnimationDidStopAndFixOutlines:(id)_fadeCellOutAnimation finished:(id)finished context:(id)context;	// 0x30222689
- (void)_fadeCellSelection;	// 0x30220a55
- (id)_groupItemForTableRow:(int)tableRow andGroupIndex:(int *)index andRow:(int *)row;	// 0x30220dc9
- (id)_groupItemForTableRow:(int)tableRow andGroupIndex:(int *)index andRow:(int *)row inGroups:(id)groups;	// 0x30220d15
- (void)_keyboardRemoveAnimationCompleted:(id)completed;	// 0x30224bf5
- (int)_paddingForCenteringContent;	// 0x30221d99
- (void)_removeContextFromSuperview:(id)superview finished:(id)finished context:(id)context;	// 0x302225d1
- (void)_removePiecesFromSuperview:(id)superview;	// 0x302225e5
- (void)_removePiecesFromSuperview:(id)superview finished:(id)finished context:(id)context;	// 0x30222675
- (BOOL)_scrollsToMakeFirstResponderVisible;	// 0x30224c49
- (void)_setAlpha:(float)alpha forSubviewsOf:(id)of;	// 0x302222cd
- (void)_setEditingCell:(id)cell;	// 0x30225159
- (void)_updateContentSize;	// 0x30221fb9
- (void)_updatePaddingForCenteringContent;	// 0x30221f11
- (BOOL)_userCanDeleteRows;	// 0x30222ee9
- (id)_visibleCheckedCellInTableRowRange:(NSRange)tableRowRange;	// 0x30220959
- (void)addTableColumn:(id)column;	// 0x30220859
- (void)animateDeletionOfRowWithCell:(id)cell viaEdge:(int)edge;	// 0x30222065
- (float)animationDuration;	// 0x302224b1
- (BOOL)canDeleteRow:(int)row;	// 0x30220771
- (BOOL)canHandleSwipes;	// 0x3022076d
- (BOOL)canInsertAtRow:(int)row;	// 0x302207e5
- (BOOL)canSelectRow:(int)row;	// 0x302208c1
- (id)dataSourceCreateCellForRow:(int)row column:(int)column reusing:(id)reusing;	// 0x30221269
- (int)dataSourceGetRowCount;	// 0x3022103d
- (BOOL)dataSourceSupportsVariableRowHeights;	// 0x3022202d
- (void)dealloc;	// 0x30220459
- (void)deleteItems:(id)items;	// 0x3022251d
- (void)deleteRows:(id)rows viaEdge:(int)edge;	// 0x302222a1
- (int)editingRow;	// 0x302252b5
- (void)enableRowDeletion:(BOOL)deletion animated:(BOOL)animated;	// 0x30222881
- (BOOL)floatArray:(id)array loadValues:(float *)values count:(int)count;	// 0x30221899
- (CGRect)frameOfPreferencesCellAtRow:(int)row inGroup:(int)group;	// 0x30221849
- (BOOL)getGroup:(int *)group row:(int *)row forTableRow:(int)tableRow;	// 0x30220e91
- (BOOL)getGroup:(int *)group row:(int *)row ofPreferencesTableCell:(id)preferencesTableCell;	// 0x30220e15
- (int)groupForTableRow:(int)tableRow;	// 0x30220e6d
- (void)insertItems:(id)items;	// 0x302224fd
- (void)insertItems:(id)items deleteItems:(id)items2 andReloadIndexes:(id)indexes;	// 0x30222f6d
// converted property getter: - (id)keyboard;	// 0x30224be5
// converted property getter: - (BOOL)keyboardVisible;	// 0x30224bcd
- (void)reloadData;	// 0x302224bd
- (void)resumeWithNotification:(id)notification;	// 0x30224c4d
- (void)scrollAndCenterTableCell:(id)cell animated:(BOOL)animated;	// 0x30224ccd
- (void)selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade;	// 0x30220a79
- (void)setBottomBufferHeight:(float)height;	// 0x30224c8d
- (void)setCentersContent:(BOOL)content;	// 0x30221f61
- (void)setDataSource:(id)source;	// 0x30220ebd
- (void)setFrame:(CGRect)frame;	// 0x302206dd
// converted property setter: - (void)setKeyboardVisible:(BOOL)visible;	// 0x30224c35
- (void)setKeyboardVisible:(BOOL)visible animated:(BOOL)animated;	// 0x30224d2d
- (BOOL)shouldIndentRow:(int)row;	// 0x302221cd
- (int)tableRowForRow:(int)row inGroup:(int)group;	// 0x30220cc1
- (BOOL)validateDataSource;	// 0x30220fd5
- (id)visiblePreferencesCellForRow:(int)row inGroup:(int)group;	// 0x30222031
@end
