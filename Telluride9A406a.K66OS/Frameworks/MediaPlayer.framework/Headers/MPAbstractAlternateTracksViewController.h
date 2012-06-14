/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPViewController.h"


@interface MPAbstractAlternateTracksViewController : MPViewController {
	unsigned _selectedTracks[2];	// 196 = 0xc4
	unsigned _previousTracks[2];	// 204 = 0xcc
}
- (id)init;	// 0x31a32351
- (void)_alternateTypesChangedNotification:(id)notification;	// 0x31a32441
- (void)addLoadingUI;	// 0x31a32541
- (id)alternateTracks;	// 0x31a32691
- (id)arrayForGroup:(int)group;	// 0x31a326c9
- (void)dealloc;	// 0x31a323d1
- (unsigned)indexForGroup:(int)group;	// 0x31a32711
- (void)reloadData;	// 0x31a32451
- (void)removeLoadingUI;	// 0x31a32571
- (void)saveChanges;	// 0x31a325ad
- (id)titleForTrack:(id)track;	// 0x31a32761
- (unsigned)typeForGroup:(int)group;	// 0x31a32869
@end
