/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VideoController.h"
#import "BRTabControlDelegate.h"
#import "Computers-Structs.h"
#import "MoviesController.h"

@class NSMutableDictionary, NSMutableArray, NSArray, NSString;

@interface MoviesController : VideoController <BRTabControlDelegate> {
	NSMutableArray *_unwatchedItems;	// 128 = 0x80
	BOOL _showUnwatchedItemsOnly;	// 132 = 0x84
	NSMutableDictionary *_genreNameToMoviesDict;	// 136 = 0x88
	NSArray *_genresSortedByName;	// 140 = 0x8c
	NSString *_genreName;	// 144 = 0x90
	BOOL _showGenreList;	// 148 = 0x94
	BOOL _showMoviesInSpecificGenre;	// 149 = 0x95
}
+ (id)moviesControllerForCollection:(ATVMediaCollectionRef)collection;	// 0x2719
+ (id)moviesControllerForGenreWithName:(id)name;	// 0x2671
- (id)init;	// 0x2849
- (id)initWithGenreName:(id)genreName;	// 0x2601
- (id)initWithMoviesCollection:(ATVMediaCollectionRef)moviesCollection;	// 0x274d
- (id)_init;	// 0x26a5
- (ATVMediaQueryRef)createDataQuery;	// 0x2b15
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x2ab5
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x2445
- (BOOL)dataQueryComplete:(ATVMediaQueryRef)complete;	// 0x23dd
- (void)dealloc;	// 0x2559
- (id)errorForNoContent;	// 0x23b9
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x33e1
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x1f61
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x20cd
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x22c5
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x22f9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2d61
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2379
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x233d
- (long)numberOfSectionsInList:(id)list;	// 0x1d59
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x1ead
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x1d5d
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x1d61
- (void)wasPopped;	// 0x24bd
@end

@interface MoviesController (MoviesControllerPrivate)
- (id)_currentItems;	// 0x1da5
- (id)_genreData;	// 0x30dd
- (void)_mediaItemPropertySet:(id)set;	// 0x3af5
- (id)_unwatchedItems;	// 0x1d65
- (void)_updateDisplayPlaylists;	// 0x1e3d
@end

