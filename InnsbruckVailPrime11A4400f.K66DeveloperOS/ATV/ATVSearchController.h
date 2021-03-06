/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextFieldDelegate.h"
#import "BRMenuController.h"

@class NSString, BRMediatorProvider, NSArray, BRTextEntryControl, BRControl, BRImageControl, ATVSearchAgent;

__attribute__((visibility("hidden")))
@interface ATVSearchController : BRMenuController <BRTextFieldDelegate> {
	BRTextEntryControl *_editor;	// 144 = 0x90
	BRImageControl *_verticalDividerImage;	// 148 = 0x94
	ATVSearchAgent *_agent;	// 152 = 0x98
	BRMediatorProvider *_recentSearchesProvider;	// 156 = 0x9c
	NSString *_activeSearchRequest;	// 160 = 0xa0
	NSString *_textEntryHistoryClient;	// 164 = 0xa4
	NSString *_textEntryHistoryBehavior;	// 168 = 0xa8
	BRControl *_alertControl;	// 172 = 0xac
	NSArray *_resultsProviderPresentationOrder;	// 176 = 0xb0
}
@property(retain, nonatomic) BRControl *alertControl;	// G=0x225a65; S=0x225a75; @synthesize=_alertControl
@property(copy, nonatomic) NSArray *resultsProviderPresentationOrder;	// G=0x225a85; S=0x225a19; @synthesize=_resultsProviderPresentationOrder
- (id)initWithSearchAgent:(id)searchAgent;	// 0x2247f1
- (void)_handleContextMenuSelection:(id)selection;	// 0x225ef5
- (void)_networkStateChanged;	// 0x225a99
- (void)_performSearchWithString:(id)string;	// 0x225d65
- (void)_recentSearchTermSelected:(id)selected;	// 0x22663d
- (void)_searchComplete:(id)complete;	// 0x226085
- (BOOL)_shouldSetFocusToListForEvent:(id)event;	// 0x225fb1
// declared property getter: - (id)alertControl;	// 0x225a65
- (BOOL)brEventAction:(id)action;	// 0x2251d5
- (id)controlToDim;	// 0x225a15
- (void)dealloc;	// 0x224c61
- (long)defaultIndex;	// 0x22576d
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x225121
- (BOOL)isNetworkDependent;	// 0x225089
- (BOOL)isValidAfterDataUpdate;	// 0x2250ad
- (void)layoutSubcontrols;	// 0x224d41
- (id)providersForContextMenu;	// 0x225925
// declared property getter: - (id)resultsProviderPresentationOrder;	// 0x225a85
- (id)searchAgent;	// 0x2250b1
- (void)searchWithString:(id)string;	// 0x2250c1
// declared property setter: - (void)setAlertControl:(id)control;	// 0x225a75
- (void)setHeaderTitle:(id)title;	// 0x2256f5
- (void)setKeyboardTextEntryStyle:(int)style;	// 0x225101
// declared property setter: - (void)setResultsProviderPresentationOrder:(id)order;	// 0x225a19
- (void)setSearchFieldLabel:(id)label;	// 0x2256d5
- (void)setTextEntryHistoryClient:(id)client textEntryBehavior:(id)behavior;	// 0x225141
- (void)textDidChange:(id)text;	// 0x2257c9
- (void)textDidEndEditing:(id)text;	// 0x2257f9
@end

