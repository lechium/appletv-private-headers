/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, ML3MusicLibrary;

@interface ML3TrackImporter : NSObject {
@private
	NSDictionary *_nameOrders;	// 4 = 0x4
	ML3MusicLibrary *_library;	// 8 = 0x8
	BOOL _updateSmartPlaylists;	// 12 = 0xc
}
@property(retain, nonatomic) NSDictionary *nameOrders;	// G=0x3462efbd; S=0x3462efcd; @synthesize=_nameOrders
@property(assign, nonatomic) BOOL updateSmartPlaylists;	// G=0x3462eff5; S=0x3462f005; @synthesize=_updateSmartPlaylists
- (id)initWithMusicLibrary:(id)musicLibrary;	// 0x3462cf51
- (void).cxx_destruct;	// 0x3462f015
- (id)_addAlbumArtistForImportTrackProperties:(id)importTrackProperties;	// 0x3462db31
- (id)_addAlbumForImportTrackProperties:(id)importTrackProperties;	// 0x3462dea1
- (id)_addArtistForImportTrackProperties:(id)importTrackProperties;	// 0x3462e241
- (id)_addComposerForImportTrackProperties:(id)importTrackProperties;	// 0x3462e475
- (id)_addGenreForImportTrackProperties:(id)importTrackProperties;	// 0x3462e675
- (id)_addStoreLinkForImportTrackProperties:(id)importTrackProperties;	// 0x3462e7f5
- (id)_newTrackPropertiesByProcessingImportTrack:(id)track insertStringsIntoSortMap:(BOOL)map;	// 0x3462e929
- (BOOL)_shouldInsertITMediaKindIntoPurchasedPlaylist:(unsigned long)playlist;	// 0x3462ef95
- (void)importTrack:(id)track withCompletionBlock:(id)completionBlock;	// 0x3462d061
// declared property getter: - (id)nameOrders;	// 0x3462efbd
// declared property setter: - (void)setNameOrders:(id)orders;	// 0x3462efcd
// declared property setter: - (void)setUpdateSmartPlaylists:(BOOL)playlists;	// 0x3462f005
// declared property getter: - (BOOL)updateSmartPlaylists;	// 0x3462eff5
- (BOOL)updateTrack:(id)track withImportTrack:(id)importTrack;	// 0x3462d5c5
@end

