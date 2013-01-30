/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAudioDeviceControllerDelegate.h"
#import <UIAlertView.h> // Unknown library
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "MediaPlayer-Structs.h"

@class MPAudioDeviceController, NSArray;

@interface MPAudioRoutingPicker : UIAlertView <MPAudioDeviceControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
	MPAudioDeviceController *_audioDeviceController;	// 192 = 0xc0
	BOOL _ignoringInteractionEvents;	// 196 = 0xc4
	NSArray *_routes;	// 200 = 0xc8
}
- (id)initWithAVPlayer:(id)avplayer;	// 0x31d1c669
- (BOOL)_pickRouteAtIndex:(unsigned)index withPassword:(id)password;	// 0x31d1ce11
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x31d1c871
- (void)dealloc;	// 0x31d1c811
- (BOOL)requiresPortraitOrientation;	// 0x31d1ce0d
- (void)setAVPlayer:(id)player;	// 0x31d1c7c5
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x31d1c941
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x31d1ca61
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x31d1c8d1
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x31d1ca1d
- (void)willMoveToSuperview:(id)superview;	// 0x31d1cd6d
@end
