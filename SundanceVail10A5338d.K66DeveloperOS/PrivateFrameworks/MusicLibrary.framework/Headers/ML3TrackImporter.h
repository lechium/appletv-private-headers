/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, ML3MusicLibrary;

@interface ML3TrackImporter : NSObject {
	NSDictionary *_nameOrders;	// 4 = 0x4
	ML3MusicLibrary *_library;	// 8 = 0x8
	BOOL _updateSmartPlaylists;	// 12 = 0xc
}
@property(retain, nonatomic) NSDictionary *nameOrders;	// G=0x30b0afad; S=0x30b0afbd; @synthesize=_nameOrders
@property(assign, nonatomic) BOOL updateSmartPlaylists;	// G=0x30b0afe5; S=0x30b0aff5; @synthesize=_updateSmartPlaylists
- (id)initWithMusicLibrary:(id)musicLibrary;	// 0x30b08f41
- (void).cxx_destruct;	// 0x30b0b005
- (id)_addAlbumArtistForImportTrackProperties:(id)importTrackProperties;	// 0x30b09b21
- (id)_addAlbumForImportTrackProperties:(id)importTrackProperties;	// 0x30b09e91
- (id)_addArtistForImportTrackProperties:(id)importTrackProperties;	// 0x30b0a231
- (id)_addComposerForImportTrackProperties:(id)importTrackProperties;	// 0x30b0a465
- (id)_addGenreForImportTrackProperties:(id)importTrackProperties;	// 0x30b0a665
- (id)_addStoreLinkForImportTrackProperties:(id)importTrackProperties;	// 0x30b0a7e5
- (id)_newTrackPropertiesByProcessingImportTrack:(id)track insertStringsIntoSortMap:(BOOL)map;	// 0x30b0a919
- (BOOL)_shouldInsertITMediaKindIntoPurchasedPlaylist:(unsigned long)playlist;	// 0x30b0af85
- (void)importTrack:(id)track withCompletionBlock:(id)completionBlock;	// 0x30b09051
// declared property getter: - (id)nameOrders;	// 0x30b0afad
// declared property setter: - (void)setNameOrders:(id)orders;	// 0x30b0afbd
// declared property setter: - (void)setUpdateSmartPlaylists:(BOOL)playlists;	// 0x30b0aff5
// declared property getter: - (BOOL)updateSmartPlaylists;	// 0x30b0afe5
- (BOOL)updateTrack:(id)track withImportTrack:(id)importTrack;	// 0x30b095b5
@end

