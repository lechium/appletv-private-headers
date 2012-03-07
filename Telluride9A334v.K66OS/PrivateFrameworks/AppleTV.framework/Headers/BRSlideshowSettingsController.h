/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class NSMutableArray, NSTimer, NSArray, BRMarimbaMenuView;

@interface BRSlideshowSettingsController : BRViewController {
@private
	BRMarimbaMenuView *_marimbaMenuView;	// 84 = 0x54
	NSMutableArray *_menuHistory;	// 88 = 0x58
	NSArray *_musicServers;	// 92 = 0x5c
	NSArray *_musicPlaylists;	// 96 = 0x60
	ATVDataServerRef _defaultMusicServer;	// 100 = 0x64
	ATVMediaQueryRef _playlistsQuery;	// 104 = 0x68
	NSTimer *_randomThemeSwappingTimer;	// 108 = 0x6c
	int _currentMenuType;	// 112 = 0x70
	BOOL _ignoreFocusMessages;	// 116 = 0x74
	BOOL _playlistQueryInProgress;	// 117 = 0x75
	BOOL _updateDefaultMusicMenuAfterPlaylistQueryCompletes;	// 118 = 0x76
	BOOL _memoryWarningAlreadyReceived;	// 119 = 0x77
}
+ (id)randomTransitionIDs;	// 0x33271f0d
+ (id)randomlySelectedSlideshowThemeIdentifier;	// 0x33271d65
+ (id)slideshowIdentifierForTitle:(id)title;	// 0x33271c89
+ (id)slideshowThemeTitles;	// 0x33271b9d
+ (id)slideshowTransitionTitles;	// 0x33271df9
+ (id)timePerSlideValues;	// 0x332720e1
+ (id)transitionIdentifierForTitle:(id)title;	// 0x33271e99
- (id)init;	// 0x3327219d
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x332721b1
- (id)_allSharedComputers;	// 0x33274cd9
- (id)_currentPlaylistName;	// 0x33273745
- (ATVDataClientRef)_dataClient;	// 0x33275669
- (void)_dataClientStatusChanged:(id)changed;	// 0x33275321
- (int)_indexOfStringItem:(id)stringItem inArray:(id *)array itemCount:(int)count;	// 0x33272839
- (void)_initiatePlaylistsQuery;	// 0x332751a9
- (BOOL)_isCloudEnabled;	// 0x33274c31
- (void)_lowMemoryNotification:(id)notification;	// 0x33273289
- (void)_mainSettingsMenuList:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x3327391d
- (void)_mainSettingsMenuList:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x33273ab9
- (id)_mainSettingsMenuList:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x33273305
- (long)_mainSettingsMenuList:(id)list numberOfRowsInSection:(long)section;	// 0x33273881
- (id)_mainSettingsMenuList:(id)list sectionHeaderForSection:(long)section;	// 0x332738cd
- (long)_mainSettingsMenuNumberOfSectionsInList:(id)list;	// 0x3327387d
- (void)_musicLibraryMenuList:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x33274819
- (void)_musicLibraryMenuList:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3327481d
- (id)_musicLibraryMenuList:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x332745a1
- (long)_musicLibraryMenuList:(id)list numberOfRowsInSection:(long)section;	// 0x33274771
- (id)_musicLibraryMenuList:(id)list sectionHeaderForSection:(long)section;	// 0x332747c9
- (long)_musicLibraryMenuNumberOfSectionsInList:(id)list;	// 0x3327476d
- (id)_musicServerSettingForIndexPath:(id)indexPath musicServer:(ATVDataServerRef *)server;	// 0x33274a41
- (void)_playlistMenuList:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x33274fb5
- (void)_playlistMenuList:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x33274fb9
- (id)_playlistMenuList:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x33274d39
- (long)_playlistMenuList:(id)list numberOfRowsInSection:(long)section;	// 0x33274f31
- (id)_playlistMenuList:(id)list sectionHeaderForSection:(long)section;	// 0x33274f65
- (long)_playlistMenuNumberOfSectionsInList:(id)list;	// 0x33274ef1
- (void)_playlistsQueryComplete;	// 0x332756cd
- (void)_returnToPreviousMenu;	// 0x33272b61
- (void)_runPlaylistsQuery;	// 0x3327544d
- (void)_setDefaultMusicServerSetting:(id)setting defaultMusicServer:(ATVDataServerRef)server;	// 0x33274bc5
- (void)_setPlaylistsQuery:(ATVMediaQueryRef)query;	// 0x33275635
- (void)_swapSlideshowTheme:(id)theme;	// 0x33273a6d
- (void)_switchToMenuType:(int)menuType rememberCurrentMenu:(BOOL)menu;	// 0x3327287d
- (void)_themeDetailsMenuList:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x332740d5
- (void)_themeDetailsMenuList:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3327415d
- (id)_themeDetailsMenuList:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x33273edd
- (long)_themeDetailsMenuList:(id)list numberOfRowsInSection:(long)section;	// 0x33274079
- (id)_themeDetailsMenuList:(id)list sectionHeaderForSection:(long)section;	// 0x33274085
- (long)_themeDetailsMenuNumberOfSectionsInList:(id)list;	// 0x33274075
- (void)_toggleTimePerSlide;	// 0x33274329
- (void)_updateListFocusOnMenuSwitch;	// 0x33272e31
- (BOOL)brEventAction:(id)action;	// 0x332724c1
- (void)dealloc;	// 0x332723c5
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x33272781
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x332727dd
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x33272775
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x3327272d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x332725b1
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3327266d
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x332726cd
- (long)numberOfSectionsInList:(id)list;	// 0x33272611
@end
