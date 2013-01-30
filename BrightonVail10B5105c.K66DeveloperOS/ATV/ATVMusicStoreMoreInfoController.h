/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCatalogApplianceController.h"

@class NSDictionary, BRMediaShelfView, BRListControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreMoreInfoController : ATVCatalogApplianceController {
	NSDictionary *_catalogItem;	// 140 = 0x8c
	BRListControl *_list;	// 144 = 0x90
	BOOL _localListContentSelected;	// 148 = 0x94
	BRMediaShelfView *_actionShelfControl;	// 152 = 0x98
	long _lastSelectedIndex;	// 156 = 0x9c
}
- (id)initWithCatalogItem:(id)catalogItem;	// 0x1f6a61
- (id)_coverArtControl;	// 0x1f7ca1
- (void)_focusedActionChanged:(id)changed;	// 0x1f75dd
- (id)_grid;	// 0x1f7e8d
- (void)_handleWindowMaxBoundsChanged;	// 0x1f6ef9
- (void)_listSelectionChanged:(id)changed;	// 0x1f7351
- (void)_loadList;	// 0x1f6f39
- (void)_loadMoreInfoItemContentFromURL:(id)url;	// 0x1f7fc1
- (void)_loadMoreInfoItemContentFromURLString:(id)urlstring;	// 0x1f7f81
- (void)_moreInfoItemContentFeedReceived:(id)received;	// 0x1f8141
- (BOOL)_selectionIsTopmostSelectable;	// 0x1f7219
- (id)_summaryControl;	// 0x1f76c9
- (id)_summaryControlForItem:(id)item;	// 0x1f76e1
- (id)accessibilityScreenContent;	// 0x1f6ecd
- (void)addControls;	// 0x1f8479
- (BOOL)brEventAction:(id)action;	// 0x1f6cc9
- (void)controlWasActivated;	// 0x1f6b71
- (void)controlWasDeactivated;	// 0x1f6c2d
- (void)dealloc;	// 0x1f6acd
- (void)layoutSubcontrols;	// 0x1f6de5
- (void)refreshDirtyPage;	// 0x1f8561
- (BOOL)shouldAllowControllerContent;	// 0x1f8475
- (id)transitionType;	// 0x1f6dd5
- (void)updateContent:(id)content;	// 0x1f851d
- (void)willEnterCompleteState;	// 0x1f8449
@end
