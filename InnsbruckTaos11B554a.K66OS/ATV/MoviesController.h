/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTabControlDelegate.h"
#import "VideoController.h"

@class ATVDataType, NSString, NSMutableDictionary, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MoviesController : VideoController <BRTabControlDelegate> {
	NSMutableArray *_unwatchedItems;	// 172 = 0xac
	NSMutableDictionary *_genreNameToMoviesDict;	// 176 = 0xb0
	NSArray *_movies;	// 180 = 0xb4
	NSArray *_genresSortedByName;	// 184 = 0xb8
	NSString *_genreName;	// 188 = 0xbc
	BOOL _showGenreList;	// 192 = 0xc0
	BOOL _showMoviesInSpecificGenre;	// 193 = 0xc1
	BOOL _showUnwatchedItemsOnly;	// 194 = 0xc2
	ATVDataType *_mediaType;	// 196 = 0xc4
	NSString *_tabControlItemPreferenceKey;	// 200 = 0xc8
	NSString *_listTitleLocalizationKey;	// 204 = 0xcc
	NSString *_numberOfMoviesInGenreLocalizationKey;	// 208 = 0xd0
	NSString *_oneMovieInGenreLocalizationKey;	// 212 = 0xd4
}
@property(retain, nonatomic) NSString *listTitleLocalizationKey;	// G=0x2b9559; S=0x2b9569; @synthesize=_listTitleLocalizationKey
@property(retain, nonatomic) ATVDataType *mediaType;	// G=0x2b94e9; S=0x2b94f9; @synthesize=_mediaType
@property(retain, nonatomic) NSString *numberOfMoviesInGenreLocalizationKey;	// G=0x2b9591; S=0x2b95a1; @synthesize=_numberOfMoviesInGenreLocalizationKey
@property(retain, nonatomic) NSString *oneMovieInGenreLocalizationKey;	// G=0x2b95c9; S=0x2b95d9; @synthesize=_oneMovieInGenreLocalizationKey
@property(retain, nonatomic) NSString *tabControlItemPreferenceKey;	// G=0x2b9521; S=0x2b9531; @synthesize=_tabControlItemPreferenceKey
+ (id)controllerForATVMediaType:(id)atvmediaType collection:(id)collection dataClient:(id)client dataClientType:(unsigned)type playAllItems:(BOOL)items;	// 0x2b77b5
+ (id)moviesControllerForCollection:(id)collection mediaType:(id)type dataClient:(id)client dataClientType:(unsigned)type4;	// 0x2b7815
+ (id)moviesControllerForGenreName:(id)genreName mediaType:(id)type dataClient:(id)client dataClientType:(unsigned)type4;	// 0x2b79f9
- (id)initWithCollection:(id)collection mediaType:(id)type dataClient:(id)client dataClientType:(unsigned)type4;	// 0x2b7891
- (id)initWithGenreName:(id)genreName mediaType:(id)type dataClient:(id)client dataClientType:(unsigned)type4;	// 0x2b7a75
- (id)initWithMediaType:(id)mediaType dataClient:(id)client dataClientType:(unsigned)type;	// 0x2b7b35
- (void).cxx_destruct;	// 0x2b9601
- (int)_convertIdentifierToTabControlItemKind:(unsigned)tabControlItemKind;	// 0x2ba9bd
- (id)_currentItems;	// 0x2b9971
- (int)_currentlySelectedTabControlItemKind;	// 0x2ba93d
- (id)_genreData;	// 0x2b9ac1
- (id)_initWithMediaType:(id)mediaType dataClient:(id)client dataClientType:(unsigned)type;	// 0x2b96d5
- (int)_lastSelectedTabControlItemKind;	// 0x2ba8a5
- (void)_mediaItemPropertySet:(id)set;	// 0x2b9ec9
- (id)_unwatchedItems;	// 0x2b9a55
- (void)_updateDisplayPlaylists;	// 0x2b98c5
- (void)_updatePreviewForMediaItem:(id)mediaItem inMediaItems:(id)mediaItems;	// 0x2b9fe9
- (id)currentItems;	// 0x2b7fdd
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x2b7f3d
- (BOOL)dataQueryComplete:(id)complete;	// 0x2b8391
- (void)dealloc;	// 0x2b7e05
- (id)errorForNoContent;	// 0x2b843d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x2b8b19
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x2b9099
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2b8cdd
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x2b8ae1
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x2b8a81
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2b85d1
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2b8529
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2b8581
// declared property getter: - (id)listTitleLocalizationKey;	// 0x2b9559
// declared property getter: - (id)mediaType;	// 0x2b94e9
- (id)newDataQuery;	// 0x2b7fed
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x2b845d
// declared property getter: - (id)numberOfMoviesInGenreLocalizationKey;	// 0x2b9591
- (long)numberOfSectionsInList:(id)list;	// 0x2b8525
// declared property getter: - (id)oneMovieInGenreLocalizationKey;	// 0x2b95c9
// declared property setter: - (void)setListTitleLocalizationKey:(id)key;	// 0x2b9569
// declared property setter: - (void)setMediaType:(id)type;	// 0x2b94f9
// declared property setter: - (void)setNumberOfMoviesInGenreLocalizationKey:(id)genreLocalizationKey;	// 0x2b95a1
// declared property setter: - (void)setOneMovieInGenreLocalizationKey:(id)genreLocalizationKey;	// 0x2b95d9
// declared property setter: - (void)setTabControlItemPreferenceKey:(id)key;	// 0x2b9531
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x2b926d
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x2b948d
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x2b94e5
// declared property getter: - (id)tabControlItemPreferenceKey;	// 0x2b9521
- (void)wasPopped;	// 0x2b7e71
@end

