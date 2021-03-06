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
@property(retain, nonatomic) NSDictionary *nameOrders;	// G=0x348caed9; S=0x348caee9; @synthesize=_nameOrders
@property(assign, nonatomic) BOOL updateSmartPlaylists;	// G=0x348caf11; S=0x348caf21; @synthesize=_updateSmartPlaylists
- (id)initWithMusicLibrary:(id)musicLibrary;	// 0x348c8e79
- (void).cxx_destruct;	// 0x348caf31
- (id)_addAlbumArtistForImportTrackProperties:(id)importTrackProperties;	// 0x348c9a4d
- (id)_addAlbumForImportTrackProperties:(id)importTrackProperties;	// 0x348c9dbd
- (id)_addArtistForImportTrackProperties:(id)importTrackProperties;	// 0x348ca15d
- (id)_addComposerForImportTrackProperties:(id)importTrackProperties;	// 0x348ca391
- (id)_addGenreForImportTrackProperties:(id)importTrackProperties;	// 0x348ca591
- (id)_addStoreLinkForImportTrackProperties:(id)importTrackProperties;	// 0x348ca711
- (id)_newTrackPropertiesByProcessingImportTrack:(id)track insertStringsIntoSortMap:(BOOL)map;	// 0x348ca845
- (BOOL)_shouldInsertITMediaKindIntoPurchasedPlaylist:(unsigned long)playlist;	// 0x348caeb1
- (void)importTrack:(id)track withCompletionBlock:(id)completionBlock;	// 0x348c8f89
// declared property getter: - (id)nameOrders;	// 0x348caed9
// declared property setter: - (void)setNameOrders:(id)orders;	// 0x348caee9
// declared property setter: - (void)setUpdateSmartPlaylists:(BOOL)playlists;	// 0x348caf21
// declared property getter: - (BOOL)updateSmartPlaylists;	// 0x348caf11
- (BOOL)updateTrack:(id)track withImportTrack:(id)importTrack;	// 0x348c94ed
@end

