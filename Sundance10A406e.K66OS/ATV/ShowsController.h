/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTabControlDelegate.h"
#import "VideoController.h"

@class NSString, NSArray, ATVDataType, NSMutableArray, NSNumber;

__attribute__((visibility("hidden")))
@interface ShowsController : VideoController <BRTabControlDelegate> {
	ATVDataType *_mediaType;	// 172 = 0xac
	NSArray *_tvShowsSortedByShowName;	// 176 = 0xb0
	unsigned long _currentTab;	// 180 = 0xb4
	NSMutableArray *_unwatchedItemsByShow;	// 184 = 0xb8
	NSMutableArray *_itemsByShow;	// 188 = 0xbc
	NSNumber *_showID;	// 192 = 0xc0
	NSString *_showName;	// 196 = 0xc4
	BOOL _unwatchedShows;	// 200 = 0xc8
	NSMutableArray *_showItems;	// 204 = 0xcc
	BOOL _playAllItems;	// 208 = 0xd0
}
+ (id)controllerForATVMediaType:(id)atvmediaType collection:(id)collection dataClient:(id)client dataClientType:(unsigned long)type playAllItems:(BOOL)items;	// 0x84245
+ (id)showsControllerForCollection:(id)collection mediaType:(id)type playAllItems:(BOOL)items dataClient:(id)client dataClientType:(unsigned long)type5;	// 0x843c5
+ (id)showsControllerForShowWithID:(id)anId name:(id)name unwatched:(BOOL)unwatched mediaType:(id)type dataClient:(id)client dataClientType:(unsigned long)type6;	// 0x84581
- (id)initWithMediaType:(id)mediaType dataClient:(id)client dataClientType:(unsigned long)type;	// 0x84705
- (id)initWithShowID:(id)showID name:(id)name unwatched:(BOOL)unwatched mediaType:(id)type dataClient:(id)client dataClientType:(unsigned long)type6;	// 0x8460d
- (id)initWithShowsCollection:(id)showsCollection mediaType:(id)type playAllItems:(BOOL)items dataClient:(id)client dataClientType:(unsigned long)type5;	// 0x84441
- (void).cxx_destruct;	// 0x852f9
- (id)_currentItems;	// 0x87a21
- (id)_getDictionary:(id)dictionary showID:(id)anId;	// 0x878ed
- (id)_getUnwatchedItemsByShow:(BOOL)show;	// 0x87ca9
- (id)_initWithMediaType:(id)mediaType dataClient:(id)client dataClientType:(unsigned long)type;	// 0x842e1
- (BOOL)_isValidTab:(int)tab;	// 0x878dd
- (long)_lastUnwatchedMediaItemRowIndex;	// 0x86599
- (void)_mediaItemPropertySet:(id)set;	// 0x88111
- (id)_menuItemForEpisode:(id)episode;	// 0x870ad
- (id)_menuItemForShow:(id)show;	// 0x874b9
- (id)_tabItemPreferenceKey;	// 0x876f9
- (id)_titleKey;	// 0x87775
- (void)_updateDisplayPlaylists;	// 0x86ffd
- (void)_updatePreviewForRow:(int)row inData:(id)data;	// 0x866a1
- (id)currentItems;	// 0x84bcd
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x877f1
- (BOOL)dataQueryComplete:(id)complete;	// 0x84d91
- (void)dealloc;	// 0x84aa5
- (id)defaultIndexPathToSelect;	// 0x84eb1
- (id)errorForNoContent;	// 0x84f15
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x85719
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x85e05
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x8582d
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x856e5
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x85685
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x8543d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x85395
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x853ed
- (id)newDataQuery;	// 0x84ccd
- (id)newDataQueryWithoutSort;	// 0x861b5
- (id)newPreDataQuery;	// 0x84bdd
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x84fd5
- (long)numberOfSectionsInList:(id)list;	// 0x85391
- (BOOL)preDataQueryComplete:(id)complete;	// 0x84c9d
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x850cd
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x8529d
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x852f5
- (void)wasPopped;	// 0x84b11
@end
