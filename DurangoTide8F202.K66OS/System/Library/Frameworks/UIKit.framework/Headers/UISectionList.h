/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray, UISectionIndex, NSSet, UISectionTable;

@interface UISectionList : UIView {
	UISectionTable *_table;	// 44 = 0x2c
	UISectionIndex *_index;	// 48 = 0x30
	NSMutableArray *_titles;	// 52 = 0x34
	NSSet *_indexTitlesAsSet;	// 56 = 0x38
	int _sectionCount;	// 60 = 0x3c
	float _listWidth;	// 64 = 0x40
	struct {
		unsigned isTranslucent : 1;
	} _sectionListFlags;	// 68 = 0x44
}
@property(readonly, retain) UISectionTable *table;	// G=0x3070dda5; converted property
+ (float)defaultIndexWidth;	// 0x3070e0e5
- (id)initWithFrame:(CGRect)frame;	// 0x3070e1c5
- (id)initWithFrame:(CGRect)frame showSectionIndex:(BOOL)index;	// 0x3070e209
- (id)_indexTitlesAsSet;	// 0x3070de51
- (void)_languageChanged;	// 0x3070dfe1
- (void)_setIndexVisible:(BOOL)visible;	// 0x3070ddb5
- (id)allTitles;	// 0x3070e005
- (int)closestSectionForTitle:(id)title;	// 0x3070e5a5
- (void)dealloc;	// 0x3070e105
- (id)indexTitles;	// 0x3070dfcd
- (float)marginForIndexControl:(BOOL)indexControl;	// 0x3070e09d
- (void)noteIndexTitlesDidChange;	// 0x3070df1d
- (int)numberOfSections;	// 0x3070dd95
- (void)reloadData;	// 0x3070e41d
- (void)setAllowsScrollIndicators:(BOOL)indicators;	// 0x3070dfa9
- (void)setDataSource:(id)source;	// 0x3070e399
- (void)setNonIndexedTitlesShownLast:(BOOL)last;	// 0x3070dd71
- (void)setSectionListStyle:(int)style;	// 0x3070df41
- (void)setShouldHideHeaderInShortLists:(BOOL)hideHeaderInShortLists;	// 0x3070df85
- (BOOL)showsSectionHeaders;	// 0x3070df61
- (BOOL)showsSectionIndex;	// 0x3070dd5d
// converted property getter: - (id)table;	// 0x3070dda5
- (id)titleForSection:(int)section;	// 0x3070dec9
@end

