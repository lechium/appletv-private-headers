/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class UITableView, NSIndexPath;

__attribute__((visibility("hidden")))
@interface UITableViewRowData : NSObject <NSCopying> {
@private
	UITableView *_tableView;	// 4 = 0x4
	int _numSections;	// 8 = 0x8
	int _sectionRowDataCapacity;	// 12 = 0xc
	id *_sectionRowData;	// 16 = 0x10
	float _minimumRowHeight;	// 20 = 0x14
	float _tableViewWidth;	// 24 = 0x18
	BOOL _tableHeaderHeightValid;	// 28 = 0x1c
	float _tableHeaderHeight;	// 32 = 0x20
	BOOL _tableFooterHeightValid;	// 36 = 0x24
	float _tableFooterHeight;	// 40 = 0x28
	float _heightForTableHeaderViewHiding;	// 44 = 0x2c
	float _tableTopPadding;	// 48 = 0x30
	float _tableBottomPadding;	// 52 = 0x34
	BOOL _tableSidePaddingValid;	// 56 = 0x38
	float _tableSidePadding;	// 60 = 0x3c
	NSIndexPath *_reorderedIndexPath;	// 64 = 0x40
	NSIndexPath *_gapIndexPath;	// 68 = 0x44
	float _reorderedRowHeight;	// 72 = 0x48
}
@property(readonly, assign, nonatomic) float heightForAutohidingTableHeaderView;	// G=0x300b19a9; 
@property(readonly, assign, nonatomic) float heightForTableHeaderViewHiding;	// G=0x300da2bd; 
@property(assign, nonatomic) float minimumRowHeight;	// G=0x300d9f19; S=0x300d9f29; @synthesize=_minimumRowHeight
@property(retain) NSIndexPath *reorderedIndexPath;	// G=0x3013ca11; S=0x301575d9; converted property
@property(assign, nonatomic) float tableBottomPadding;	// G=0x302c8909; S=0x30217079; @synthesize=_tableBottomPadding
@property(assign, nonatomic) float tableSidePadding;	// G=0x300f2fa1; S=0x302c87ed; 
@property(assign, nonatomic) float tableTopPadding;	// G=0x302c88f9; S=0x3014eca9; @synthesize=_tableTopPadding
- (id)initWithTableView:(id)tableView;	// 0x300d77c1
- (void)_ensureSectionOffsetIsValidForSection:(int)section;	// 0x300d9f79
- (int)_sectionForPoint:(CGPoint)point beginningWithSection:(int)section numberOfSections:(int)sections;	// 0x300f1411
- (int)_sectionRowForGlobalRow:(int)globalRow inSection:(int *)section;	// 0x300e6799
- (void)_updateNumSections;	// 0x300d7a3d
- (void)_updateSectionRowDataArrayForNumSections:(int)numSections;	// 0x300d7acd
- (void)_updateTopAndBottomPadding;	// 0x302c8535
- (void)addReorderGapFromIndexPath:(id)indexPath;	// 0x301bc195
- (id)copyWithZone:(NSZone *)zone;	// 0x30138bc1
- (void)dealloc;	// 0x301429d1
- (void)ensureAllSectionsAreValid;	// 0x30138edd
- (CGRect)floatingRectForFooterInSection:(int)section visibleRect:(CGRect)rect;	// 0x3014bbb5
- (CGRect)floatingRectForHeaderInSection:(int)section visibleRect:(CGRect)rect;	// 0x301207cd
- (int)footerAlignmentForSection:(int)section;	// 0x30217295
- (int)globalRowForRowAtIndexPath:(id)indexPath;	// 0x300b70a1
- (NSRange)globalRowsInRect:(CGRect)rect;	// 0x300e64c5
- (BOOL)hasFooterForSection:(int)section;	// 0x3014bd51
- (BOOL)hasHeaderForSection:(int)section;	// 0x30120965
- (int)headerAlignmentForSection:(int)section;	// 0x30135e59
// declared property getter: - (float)heightForAutohidingTableHeaderView;	// 0x300b19a9
- (float)heightForFooterInSection:(int)section;	// 0x301aa401
- (float)heightForHeaderInSection:(int)section;	// 0x301aa379
- (float)heightForRow:(int)row inSection:(int)section;	// 0x301bf089
- (float)heightForSection:(int)section;	// 0x301aa2f1
- (float)heightForTable;	// 0x300d8281
- (float)heightForTableFooterView;	// 0x300da1ad
- (float)heightForTableHeaderView;	// 0x300b19f5
// declared property getter: - (float)heightForTableHeaderViewHiding;	// 0x300da2bd
- (id)indexPathForRowAtGlobalRow:(int)globalRow;	// 0x300e6be5
- (id)indexPathsForRowsInRect:(CGRect)rect;	// 0x301a2ebd
- (void)invalidateAllSectionOffsetsAndUpdatePadding;	// 0x302c86f5
- (void)invalidateAllSections;	// 0x300d7991
- (void)invalidateSection:(int)section;	// 0x302c8775
- (float)maxFooterTitleWidthForSection:(int)section;	// 0x302171fd
- (float)maxHeaderTitleWidthForSection:(int)section;	// 0x30135dc1
// declared property getter: - (float)minimumRowHeight;	// 0x300d9f19
- (void)moveRowAtIndexPathFrom:(id)from toIndexPath:(id)indexPath;	// 0x301beef9
- (int)numberOfRows;	// 0x300d9e0d
- (int)numberOfRowsBeforeSection:(int)rowsBeforeSection;	// 0x301a79a5
- (int)numberOfRowsInSection:(int)section;	// 0x300b7139
- (int)numberOfSections;	// 0x301397d9
- (CGRect)rectForFooterInSection:(int)section;	// 0x300d832d
- (CGRect)rectForGlobalRow:(int)globalRow;	// 0x300e66e5
- (CGRect)rectForHeaderInSection:(int)section;	// 0x300f1521
- (CGRect)rectForRow:(int)row inSection:(int)section;	// 0x300e6885
- (CGRect)rectForSection:(int)section;	// 0x300f11ed
- (CGRect)rectForTable;	// 0x3013b6ad
- (CGRect)rectForTableFooterView;	// 0x30140615
- (CGRect)rectForTableHeaderView;	// 0x300d7e99
- (void)removeReorderGapFromIndexPath:(id)indexPath;	// 0x301be4c5
// converted property getter: - (id)reorderedIndexPath;	// 0x3013ca11
- (int)sectionForPoint:(CGPoint)point;	// 0x300f13dd
- (int)sectionLocationForReorderedRow:(int)reorderedRow inSection:(int)section;	// 0x301be5ad
- (int)sectionLocationForRow:(int)row inSection:(int)section;	// 0x300eeb2d
- (NSRange)sectionsInRect:(CGRect)rect;	// 0x300f0fc9
- (void)setHeightForTableHeaderViewHiding:(float)tableHeaderViewHiding;	// 0x30135c61
// declared property setter: - (void)setMinimumRowHeight:(float)height;	// 0x300d9f29
// converted property setter: - (void)setReorderedIndexPath:(id)path;	// 0x301575d9
// declared property setter: - (void)setTableBottomPadding:(float)padding;	// 0x30217079
// declared property setter: - (void)setTableSidePadding:(float)padding;	// 0x302c87ed
// declared property setter: - (void)setTableTopPadding:(float)padding;	// 0x3014eca9
// declared property getter: - (float)tableBottomPadding;	// 0x302c8909
- (void)tableFooterHeightDidChangeToHeight:(float)tableFooterHeight;	// 0x301a7959
- (void)tableHeaderHeightDidChangeToHeight:(float)tableHeaderHeight;	// 0x300d7cf1
// declared property getter: - (float)tableSidePadding;	// 0x300f2fa1
// declared property getter: - (float)tableTopPadding;	// 0x302c88f9
- (void)tableViewWidthDidChangeToWidth:(float)tableViewWidth;	// 0x30151051
- (id)targetIndexPathForPoint:(CGPoint)point;	// 0x301bd709
@end

