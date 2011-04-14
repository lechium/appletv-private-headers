/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class ML3MusicLibrary;

@interface ML3TrackImporter : NSObject {
@private
	ML3MusicLibrary *_library;	// 4 = 0x4
}
- (id)initWithMusicLibrary:(id)musicLibrary;	// 0x3182cd85
- (id)_addAlbumArtistForImportTrackProperties:(id)importTrackProperties;	// 0x3182cb0d
- (id)_addAlbumForImportTrack:(id)importTrack properties:(id)properties;	// 0x3182d169
- (id)_addArtistForImportTrackProperties:(id)importTrackProperties;	// 0x3182c999
- (id)_addComposerForImportTrackProperties:(id)importTrackProperties;	// 0x3182c841
- (id)_addGenreForImportTrackProperties:(id)importTrackProperties;	// 0x3182c741
- (id)_addStoreLinkForImportTrackProperties:(id)importTrackProperties;	// 0x3182c639
- (id)_newTrackPropertiesByProcessingImportTrack:(id)track;	// 0x3182d815
- (BOOL)_shouldInsertITMediaKindIntoPurchasedPlaylist:(unsigned long)playlist;	// 0x3182c199
- (void)dealloc;	// 0x3182cd3d
- (void)importTrack:(id)track withCompletionBlock:(id)completionBlock;	// 0x3182cf7d
- (BOOL)updateTrack:(id)track withImportTrack:(id)importTrack;	// 0x3182cca1
@end

