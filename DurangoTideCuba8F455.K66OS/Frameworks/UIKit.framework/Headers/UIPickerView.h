/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray;
@protocol UIPickerViewDelegate, UIPickerViewDataSource;

@interface UIPickerView : UIView <NSCoding> {
@private
	NSMutableArray *_tables;	// 44 = 0x2c
	UIView *_topFrame;	// 48 = 0x30
	NSMutableArray *_dividers;	// 52 = 0x34
	id<UIPickerViewDataSource> _dataSource;	// 56 = 0x38
	id<UIPickerViewDelegate> _delegate;	// 60 = 0x3c
	UIView *_backgroundView;	// 64 = 0x40
	int _numberOfComponents;	// 68 = 0x44
	struct {
		unsigned needsLayout : 1;
		unsigned delegateRespondsToNumberOfComponentsInPickerView : 1;
		unsigned delegateRespondsToNumberOfRowsInComponent : 1;
		unsigned delegateRespondsToDidSelectRow : 1;
		unsigned delegateRespondsToViewForRow : 1;
		unsigned delegateRespondsToTitleForRow : 1;
		unsigned delegateRespondsToWidthForComponent : 1;
		unsigned delegateRespondsToRowHeightForComponent : 1;
		unsigned showsSelectionBar : 1;
		unsigned allowsMultipleSelection : 1;
		unsigned allowSelectingCells : 1;
		unsigned soundsDisabled : 1;
	} _pickerViewFlags;	// 72 = 0x48
}
@property(assign) BOOL allowsMultipleSelection;	// G=0x301ccc3d; S=0x301cccd9; converted property
@property(assign, nonatomic) id<UIPickerViewDataSource> dataSource;	// G=0x301ccc65; S=0x3012ffad; @synthesize=_dataSource
@property(assign, nonatomic) id<UIPickerViewDelegate> delegate;	// G=0x301ccc55; S=0x3012fe55; @synthesize=_delegate
@property(readonly, assign, nonatomic) int numberOfComponents;	// G=0x30130d19; @synthesize=_numberOfComponents
@property(assign, nonatomic) BOOL showsSelectionIndicator;	// G=0x301ccc29; S=0x301ccd4d; 
+ (CGSize)defaultSizeForCurrentOrientation;	// 0x3012f389
- (id)initWithCoder:(id)coder;	// 0x301cd0c9
- (id)initWithFrame:(CGRect)frame;	// 0x3012f75d
- (id)_createTableWithFrame:(CGRect)frame forComponent:(int)component;	// 0x3013346d
- (id)_createViewForPickerPiece:(int)pickerPiece;	// 0x30131b2d
- (int)_delegateNumberOfComponents;	// 0x30130759
- (int)_delegateNumberOfRowsInComponent:(int)component;	// 0x301373cd
- (float)_delegateRowHeightForComponent:(int)component;	// 0x30135551
- (id)_delegateTitleForRow:(int)row forComponent:(int)component;	// 0x301cce9d
- (float)_delegateWidthForComponent:(int)component ofCount:(int)count withSizeLeft:(float)sizeLeft;	// 0x30132181
- (BOOL)_isLandscapeOrientation;	// 0x30131f21
- (id)_orientationImageSuffix;	// 0x30131e29
- (id)_popoverSuffix;	// 0x30132005
- (void)_populateArchivedSubviews:(id)subviews;	// 0x301cd769
- (void)_selectRow:(int)row inComponent:(int)component animated:(BOOL)animated notify:(BOOL)notify;	// 0x30130d59
- (CGRect)_selectionBarRectForHeight:(float)height;	// 0x301355a1
- (id)_selectionBarSuffix;	// 0x30131fdd
- (void)_sendCheckedRow:(int)row inTable:(id)table checked:(BOOL)checked;	// 0x301cd3f9
- (void)_sendSelectionChangedForComponent:(int)component;	// 0x30146d01
- (void)_sendSelectionChangedFromTable:(id)table;	// 0x30146c65
- (CGSize)_sizeThatFits:(CGSize)fits;	// 0x30139919
- (float)_tableRowHeight;	// 0x301cd189
- (void)_updateSound;	// 0x30138db9
- (float)_wheelShift;	// 0x30133141
// converted property getter: - (BOOL)allowsMultipleSelection;	// 0x301ccc3d
- (id)cellForRow:(int)row column:(int)column;	// 0x30143ce5
- (int)columnForTable:(id)table;	// 0x30138015
- (id)createDividerWithFrame:(CGRect)frame;	// 0x30133179
// declared property getter: - (id)dataSource;	// 0x301ccc65
- (void)dealloc;	// 0x3014c145
- (CGSize)defaultSize;	// 0x301cd971
// declared property getter: - (id)delegate;	// 0x301ccc55
- (void)didMoveToWindow;	// 0x30138d7d
- (void)encodeWithCoder:(id)coder;	// 0x301cd011
- (id)imageForPickerPiece:(int)pickerPiece;	// 0x30131c09
- (BOOL)isAccessibilityElementByDefault;	// 0x3028f3d9
- (void)layoutSubviews;	// 0x30130f1d
- (int)numberOfColumns;	// 0x301cce75
// declared property getter: - (int)numberOfComponents;	// 0x30130d19
- (int)numberOfRowsInColumn:(int)column;	// 0x301cce89
- (int)numberOfRowsInComponent:(int)component;	// 0x30138945
- (int)numberOfRowsInTable:(id)table;	// 0x30137319
- (id)pickerImageNamePrefix;	// 0x30131e1d
- (void)reload;	// 0x301306a9
- (void)reloadAllComponents;	// 0x301306bd
- (void)reloadAllPickerPieces;	// 0x30148fb1
- (void)reloadComponent:(int)component;	// 0x301ccf29
- (void)reloadData;	// 0x301ccf81
- (void)reloadDataForColumn:(int)column;	// 0x301ccf6d
- (CGSize)rowSizeForComponent:(int)component;	// 0x301cd525
- (double)scrollAnimationDuration;	// 0x30136141
- (CGPoint)scroller:(id)scroller adjustSmoothScrollEnd:(CGPoint)end velocity:(CGSize)velocity;	// 0x3014693d
- (BOOL)scroller:(id)scroller shouldAdjustSmoothScrollEndForVelocity:(CGSize)velocity;	// 0x301455b5
- (void)scrollerDidEndAnimatedScrolling:(id)scroller;	// 0x30148215
- (void)scrollerDidEndDragging:(id)scroller willSmoothScroll:(BOOL)scroll;	// 0x30144cd1
- (void)scrollerDidEndSmoothScrolling:(id)scroller;	// 0x30146b89
- (void)scrollerDidScroll:(id)scroller;	// 0x30138035
- (void)selectRow:(int)row inColumn:(int)column animated:(BOOL)animated;	// 0x301ccc75
- (void)selectRow:(int)row inComponent:(int)component animated:(BOOL)animated;	// 0x301ccc99
- (int)selectedRowForColumn:(int)column;	// 0x301cccc5
- (int)selectedRowInComponent:(int)component;	// 0x301388b9
- (id)selectedTableCellForColumn:(int)column;	// 0x3014745d
// converted property setter: - (void)setAllowsMultipleSelection:(BOOL)selection;	// 0x301cccd9
- (void)setAlpha:(float)alpha;	// 0x301ccf95
- (void)setBounds:(CGRect)bounds;	// 0x301cd889
// declared property setter: - (void)setDataSource:(id)source;	// 0x3012ffad
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3012fe55
- (void)setFrame:(CGRect)frame;	// 0x3012f929
- (void)setHidden:(BOOL)hidden;	// 0x301ccfd1
- (void)setNeedsLayout;	// 0x3012fba5
// declared property setter: - (void)setShowsSelectionIndicator:(BOOL)indicator;	// 0x301ccd4d
- (void)setSoundsEnabled:(BOOL)enabled;	// 0x301ccc05
// declared property getter: - (BOOL)showsSelectionIndicator;	// 0x301ccc29
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x301cd5c5
- (BOOL)table:(id)table canReuseCell:(id)cell;	// 0x301441f1
- (id)table:(id)table cellForRow:(int)row column:(id)column;	// 0x301ccd8d
- (id)table:(id)table cellForRow:(int)row column:(id)column reusing:(id)reusing;	// 0x3013c5ed
- (id)tableForColumn:(int)column;	// 0x30138ae1
- (id)viewForRow:(int)row forComponent:(int)component;	// 0x301ccdb9
- (NSRange)visibleRowsForColumn:(int)column;	// 0x30143c7d
@end
