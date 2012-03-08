/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRContextMenuUtility.h"
#import <NSObject.h> // Unknown library


@interface BRMusicContextMenuUtility : NSObject <BRContextMenuUtility> {
@private
	BOOL _onTheGoEnabled;	// 4 = 0x4
	BOOL _startGeniusEnabled;	// 5 = 0x5
	BOOL _airTunesSettingsEnabled;	// 6 = 0x6
	BOOL _browseArtistEnabled;	// 7 = 0x7
	BOOL _browseAlbumEnabled;	// 8 = 0x8
	BOOL _navigateToArtistForBrowseArtist;	// 9 = 0x9
	BOOL _navigateToAlbumForBrowseAlbum;	// 10 = 0xa
}
@property(assign) BOOL airTunesSettingsEnabled;	// G=0x3036e1cd; S=0x3036e1bd; converted property
@property(assign) BOOL browseAlbumEnabled;	// G=0x3036e20d; S=0x3036e1fd; converted property
@property(assign) BOOL browseArtistEnabled;	// G=0x3036e1ed; S=0x3036e1dd; converted property
@property(assign) BOOL navigateToAlbumForBrowseAlbum;	// G=0x3036e24d; S=0x3036e23d; converted property
@property(assign) BOOL navigateToArtistForBrowseArtist;	// G=0x3036e22d; S=0x3036e21d; converted property
@property(assign) BOOL onTheGoEnabled;	// G=0x3036e18d; S=0x3036e17d; converted property
@property(assign) BOOL startGeniusEnabled;	// G=0x3036e1ad; S=0x3036e19d; converted property
+ (void)setImplementationClass:(Class)aClass;	// 0x3036e0f1
+ (id)utility;	// 0x3036e0ad
- (id)init;	// 0x3036e101
// converted property getter: - (BOOL)airTunesSettingsEnabled;	// 0x3036e1cd
// converted property getter: - (BOOL)browseAlbumEnabled;	// 0x3036e20d
// converted property getter: - (BOOL)browseArtistEnabled;	// 0x3036e1ed
- (id)contextMenuProviderForObject:(id)object target:(id)target selector:(SEL)selector;	// 0x3036e25d
- (void)handleSelectionForObject:(id)object sender:(id)sender context:(id)context;	// 0x3036e261
// converted property getter: - (BOOL)navigateToAlbumForBrowseAlbum;	// 0x3036e24d
// converted property getter: - (BOOL)navigateToArtistForBrowseArtist;	// 0x3036e22d
// converted property getter: - (BOOL)onTheGoEnabled;	// 0x3036e18d
// converted property setter: - (void)setAirTunesSettingsEnabled:(BOOL)enabled;	// 0x3036e1bd
// converted property setter: - (void)setBrowseAlbumEnabled:(BOOL)enabled;	// 0x3036e1fd
// converted property setter: - (void)setBrowseArtistEnabled:(BOOL)enabled;	// 0x3036e1dd
// converted property setter: - (void)setNavigateToAlbumForBrowseAlbum:(BOOL)browseAlbum;	// 0x3036e23d
// converted property setter: - (void)setNavigateToArtistForBrowseArtist:(BOOL)browseArtist;	// 0x3036e21d
// converted property setter: - (void)setOnTheGoEnabled:(BOOL)enabled;	// 0x3036e17d
// converted property setter: - (void)setStartGeniusEnabled:(BOOL)enabled;	// 0x3036e19d
// converted property getter: - (BOOL)startGeniusEnabled;	// 0x3036e1ad
@end

