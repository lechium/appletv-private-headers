/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, DOMHTMLInputElement, DOMElement, NSMutableDictionary;

@interface UIWebFormCompletionController : NSObject {
	DOMHTMLInputElement *_element;	// 4 = 0x4
	NSString *_fieldName;	// 8 = 0x8
	DOMElement *_form;	// 12 = 0xc
	BOOL _isLoginForm;	// 16 = 0x10
	NSMutableDictionary *_items;	// 20 = 0x14
}
+ (id)_abMultiValuesForPerson:(void *)person property:(id)property property:(int)property3 key:(id)key label:(id)label;	// 0x304dc65d
+ (id)_abValuesForPerson:(void *)person property:(id)property propertyID:(int)anId key:(id)key label:(id)label;	// 0x304dc8a5
+ (id)_abValuesForProperty:(id)property key:(id)key label:(id)label forPerson:(void *)person;	// 0x304dca15
+ (void)_addABMatchesToArray:(id)array forString:(id)string atABPointer:(id)abpointer forPerson:(void *)person;	// 0x304dcaa1
+ (void)_addPreviousDataMatchesToArray:(id)array forString:(id)string frame:(id)frame fieldName:(id)name;	// 0x304dce19
+ (void)_appWillTerminate:(id)_app;	// 0x304db30d
+ (BOOL)_autoFillPasswordInFrame:(id)frame autoFiller:(id)filler;	// 0x304dd701
+ (id)_credentialMatchesForString:(id)string frame:(id)frame;	// 0x304dcf7d
+ (id)_cryptData:(id)data encode:(BOOL)encode;	// 0x304daa65
+ (BOOL)_frame:(id)frame sourceFrame:(id)frame2 willSubmitLoginForm:(id)form withValues:(id)values autoFiller:(id)filler submissionListener:(id)listener;	// 0x304db4b9
+ (void)_frame:(id)frame sourceFrame:(id)frame2 willSubmitRegularForm:(id)form withValues:(id)values;	// 0x304dbcf9
+ (unsigned)_indexOfMarkerInMatches:(id)matches matchingABMatch:(id)match;	// 0x304dc50d
+ (void)_loadCompletionDB;	// 0x304dab9d
+ (id)_matchesForString:(id)string frame:(id)frame fieldName:(id)name control:(id)control forPerson:(void *)person;	// 0x304dd10d
+ (void)_pruneCompletionDB;	// 0x304daebd
+ (void)_reapABMarker:(id)marker forFrame:(id)frame fieldName:(id)name;	// 0x304db0f9
+ (void)_saveCompletionDB:(id)db;	// 0x304db18d
+ (void)_saveCompletionDBSoon;	// 0x304db291
+ (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x304dbcd9
+ (BOOL)addressBookCompletionEnabled;	// 0x304da9ed
+ (void)alertPrompt:(id)prompt clickedButtonAtIndex:(int)index;	// 0x304db9c9
+ (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x304dbce9
+ (void)autoFillInWebView:(id)webView;	// 0x304dd865
+ (void)clearAutoFillStateForFrame:(id)frame;	// 0x302ccefd
+ (void)clearPreviousDataDatabase;	// 0x304db419
+ (void)clearPreviousDataForDomain:(id)domain;	// 0x304db3b1
+ (BOOL)credentialIsNeverSaveMarker:(id)marker;	// 0x304dd975
+ (id)currentFormInFrame:(id)frame;	// 0x304dd621
+ (id)currentOrFirstFrameAndForm:(id *)form inWebView:(id)webView;	// 0x304dd6ad
+ (id)domainsWithPreviousData;	// 0x304db37d
+ (id)firstFormInFrame:(id)frame;	// 0x304dd649
+ (void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;	// 0x304dc419
+ (BOOL)passwordCompletionEnabled;	// 0x302cf975
+ (id)preFillForm:(id)form inFrame:(id)frame;	// 0x304dd911
+ (void)preFillInWebFrame:(id)webFrame;	// 0x302cf84d
+ (BOOL)previousDataCompletionEnabled;	// 0x304da971
+ (BOOL)shouldSaveFormData;	// 0x304da975
+ (BOOL)shouldSaveUsernamesAndPasswords;	// 0x304daa11
- (id)initWithDOMElement:(id)domelement webFrame:(id)frame;	// 0x304dd9a9
- (void)abortCompletion;	// 0x304de2f5
- (void)acceptedAutoFillWord:(id)word;	// 0x304de5b1
- (void)autoFillCommand:(id)command;	// 0x304ddced
- (void)autoFillWithElementValue;	// 0x304de5c1
- (id)computeListItemsAndInitiallySelectedIndex:(unsigned *)index withQueryString:(id)queryString;	// 0x304dd56d
- (BOOL)currentTextChangeIsProgrammatic;	// 0x304de2f9
- (void)dealloc;	// 0x304ddba9
- (BOOL)doSourceFieldCommandBySelector:(SEL)selector;	// 0x304ddde1
- (BOOL)hasCurrentSuggestions;	// 0x304de56d
- (BOOL)leavingFieldReflectsSelectedListItem;	// 0x304de2d9
- (id)queryString;	// 0x304dd2dd
- (void)reflectFinalSelectedListItem:(id)item;	// 0x304de051
- (void)reflectSelectedListItem:(id)item;	// 0x304ddf79
- (id)reflectedStringForActivatedListItem:(id)activatedListItem;	// 0x304de2d1
- (id)reflectedStringForHighlightedListItem:(id)highlightedListItem;	// 0x304de23d
- (BOOL)returnPerformsActionWhenShowingList;	// 0x304de2dd
- (id)selectedListItem:(id)item;	// 0x304ddccd
- (BOOL)shouldSuppressAutocomplete;	// 0x304dde21
- (BOOL)showsListForSingleListItem;	// 0x304de2e1
- (void)sourceFieldTextDidChange;	// 0x304ddc6d
- (void)sourceFieldTextDidEndEditing;	// 0x304de2e5
- (XXStruct_HeigOC)suggestionsForString:(id)string inputIndex:(unsigned)index;	// 0x304de2fd
- (id)unsortedListItemsWithQueryString:(id)queryString;	// 0x304dd2fd
- (id)webFrame;	// 0x304ddc35
@end
