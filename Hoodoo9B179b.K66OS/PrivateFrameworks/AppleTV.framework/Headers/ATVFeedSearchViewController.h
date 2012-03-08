/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVSearchViewController.h"

@class ATVFeedSearchResultsLoader, ATVMerchant, NSDictionary, NSString, NSMutableDictionary, ATVFeedDocument;

__attribute__((visibility("hidden")))
@interface ATVFeedSearchViewController : ATVSearchViewController {
@private
	ATVMerchant *_merchant;	// 108 = 0x6c
	ATVFeedSearchResultsLoader *_searchResultsLoader;	// 112 = 0x70
	NSString *_baseURLString;	// 116 = 0x74
	NSDictionary *_results;	// 120 = 0x78
	NSMutableDictionary *_headerCache;	// 124 = 0x7c
	ATVFeedDocument *_resultsFeedDocument;	// 128 = 0x80
}
@property(retain, nonatomic) ATVFeedDocument *resultsFeedDocument;	// G=0x30385f91; S=0x30385fa1; @synthesize=_resultsFeedDocument
- (id)initWithDictionary:(id)dictionary;	// 0x30385341
- (id)initWithFeedElement:(id)feedElement;	// 0x3038501d
- (id)_elementAtIndexPath:(id)indexPath;	// 0x303860b1
- (id)_indexPathForFirstItem;	// 0x30386489
- (id)_itemAtIndexPath:(id)indexPath;	// 0x303861d1
- (long)_numberOfRowsInSection:(long)section;	// 0x30386375
- (long)_numberOfSections;	// 0x303862c5
- (BOOL)_search:(id)search;	// 0x3038580d
- (void)_searchResultsReady:(id)ready;	// 0x30385fc5
- (void)_updateSearchResults:(id)results searchString:(id)string;	// 0x30385925
- (void)dealloc;	// 0x303856d9
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x30385e65
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x30385dc1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x30385b25
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x30385be5
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x30385bf9
- (long)numberOfSectionsInList:(id)list;	// 0x30385bd5
// declared property getter: - (id)resultsFeedDocument;	// 0x30385f91
// declared property setter: - (void)setResultsFeedDocument:(id)document;	// 0x30385fa1
@end

