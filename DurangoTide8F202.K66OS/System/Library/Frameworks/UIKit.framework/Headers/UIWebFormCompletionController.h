/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, DOMElement, DOMHTMLInputElement, NSMutableDictionary;

@interface UIWebFormCompletionController : NSObject {
	DOMHTMLInputElement *_element;	// 4 = 0x4
	NSString *_fieldName;	// 8 = 0x8
	DOMElement *_form;	// 12 = 0xc
	BOOL _isLoginForm;	// 16 = 0x10
	NSMutableDictionary *_items;	// 20 = 0x14
}
+ (id)_abMultiValuesForPerson:(void *)person property:(id)property property:(int)property3 key:(id)key label:(id)label;	// 0x307d5d09
+ (id)_abValuesForPerson:(void *)person property:(id)property propertyID:(int)anId key:(id)key label:(id)label;	// 0x307d5ee9
+ (id)_abValuesForProperty:(id)property key:(id)key label:(id)label;	// 0x307d5c6d
+ (void)_addABMatchesToArray:(id)array forString:(id)string atABPointer:(id)abpointer;	// 0x307d29f5
+ (void)_addPreviousDataMatchesToArray:(id)array forString:(id)string frame:(id)frame fieldName:(id)name;	// 0x307d4371
+ (void)_appWillTerminate:(id)_app;	// 0x307d2fb5
+ (BOOL)_autoFillPasswordInFrame:(id)frame autoFiller:(id)filler;	// 0x307d2359
+ (id)_credentialMatchesForString:(id)string frame:(id)frame;	// 0x307d41d5
+ (id)_cryptData:(id)data encode:(BOOL)encode;	// 0x307d535d
+ (BOOL)_frame:(id)frame sourceFrame:(id)frame2 willSubmitLoginForm:(id)form withValues:(id)values autoFiller:(id)filler submissionListener:(id)listener;	// 0x307d4f55
+ (void)_frame:(id)frame sourceFrame:(id)frame2 willSubmitRegularForm:(id)form withValues:(id)values;	// 0x307d44bd
+ (unsigned)_indexOfMarkerInMatches:(id)matches matchingABMatch:(id)match;	// 0x307d2ce9
+ (void)_loadCompletionDB;	// 0x307d5421
+ (id)_matchesForString:(id)string frame:(id)frame fieldName:(id)name control:(id)control;	// 0x307d3f51
+ (void)_pruneCompletionDB;	// 0x307d5689
+ (void)_reapABMarker:(id)marker forFrame:(id)frame fieldName:(id)name;	// 0x307d48ad
+ (void)_saveCompletionDB:(id)db;	// 0x307d585d
+ (void)_saveCompletionDBSoon;	// 0x307d3011
+ (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x307d2f1d
+ (BOOL)addressBookCompletionEnabled;	// 0x307d4f35
+ (void)alertPrompt:(id)prompt clickedButtonAtIndex:(int)index;	// 0x307d5a05
+ (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x307d2f09
+ (BOOL)autoFillInWebView:(id)webView;	// 0x307d22b5
+ (void)clearAutoFillStateForFrame:(id)frame;	// 0x3069793d
+ (void)clearPreviousDataDatabase;	// 0x307d595d
+ (void)clearPreviousDataForDomain:(id)domain;	// 0x307d2f31
+ (BOOL)credentialIsNeverSaveMarker:(id)marker;	// 0x307d3401
+ (id)currentFormInFrame:(id)frame;	// 0x307d3f35
+ (id)currentOrFirstFrameAndForm:(id *)form inWebView:(id)webView;	// 0x307d24a1
+ (id)domainsWithPreviousData;	// 0x307d2f89
+ (id)firstFormInFrame:(id)frame;	// 0x307d24f1
+ (void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;	// 0x307d2e29
+ (BOOL)passwordCompletionEnabled;	// 0x306163b9
+ (id)preFillForm:(id)form inFrame:(id)frame;	// 0x307d2259
+ (void)preFillInWebFrame:(id)webFrame;	// 0x30616299
+ (BOOL)previousDataCompletionEnabled;	// 0x307d0701
+ (BOOL)shouldSaveFormData;	// 0x307d30a9
+ (BOOL)shouldSaveUsernamesAndPasswords;	// 0x307d3089
- (id)initWithDOMElement:(id)domelement webFrame:(id)frame;	// 0x307d3d5d
- (void)abortCompletion;	// 0x307d0729
- (void)acceptedAutoFillWord:(id)word;	// 0x307d1c29
- (void)autoFillCommand:(id)command;	// 0x307d2049
- (void)autoFillWithElementValue;	// 0x307d1bfd
- (id)computeListItemsAndInitiallySelectedIndex:(unsigned *)index withQueryString:(id)queryString;	// 0x307d2541
- (BOOL)currentTextChangeIsProgrammatic;	// 0x307d072d
- (void)dealloc;	// 0x307d21d9
- (BOOL)doSourceFieldCommandBySelector:(SEL)selector;	// 0x307d2011
- (BOOL)hasCurrentSuggestions;	// 0x307d1c3d
- (BOOL)leavingFieldReflectsSelectedListItem;	// 0x307d071d
- (id)queryString;	// 0x307d2659
- (void)reflectFinalSelectedListItem:(id)item;	// 0x307d1c91
- (void)reflectSelectedListItem:(id)item;	// 0x307d1e45
- (id)reflectedStringForActivatedListItem:(id)activatedListItem;	// 0x307d29b5
- (id)reflectedStringForHighlightedListItem:(id)highlightedListItem;	// 0x307d29c1
- (BOOL)returnPerformsActionWhenShowingList;	// 0x307d0721
- (id)selectedListItem:(id)item;	// 0x307d2125
- (BOOL)shouldSuppressAutocomplete;	// 0x307d4d99
- (BOOL)showsListForSingleListItem;	// 0x307d0725
- (void)sourceFieldTextDidChange;	// 0x307d2145
- (void)sourceFieldTextDidEndEditing;	// 0x307d1c7d
- (XXStruct_HeigOC)suggestionsForString:(id)string inputIndex:(unsigned)index;	// 0x307d4de5
- (id)unsortedListItemsWithQueryString:(id)queryString;	// 0x307d25b5
- (id)webFrame;	// 0x307d21a9
@end

