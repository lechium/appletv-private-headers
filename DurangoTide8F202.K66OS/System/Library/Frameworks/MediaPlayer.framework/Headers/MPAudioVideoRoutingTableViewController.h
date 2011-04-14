/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UITableViewController.h> // Unknown library

@class MPAudioDeviceController, NSMutableArray, MPAVDestinationBrowser;

@interface MPAudioVideoRoutingTableViewController : UITableViewController {
@private
	MPAudioDeviceController *_audioDeviceController;	// 144 = 0x90
	MPAVDestinationBrowser *_videoDestinationBrowser;	// 148 = 0x94
	NSMutableArray *_routes;	// 152 = 0x98
	int _airPlayPasswordAlertDidAppearToken;	// 156 = 0x9c
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;	// 160 = 0xa0
}
@property(readonly, assign, nonatomic) MPAudioDeviceController *audioDeviceController;	// G=0x31defe01; @synthesize=_audioDeviceController
@property(readonly, assign, nonatomic) MPAVDestinationBrowser *videoDestinationBrowser;	// G=0x31defdf1; @synthesize=_videoDestinationBrowser
- (id)initWithAudioDeviceController:(id)audioDeviceController videoDestinationBrowser:(id)browser;	// 0x31df06cd
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x31deffc9
- (BOOL)_isDeviceVideoRoute:(id)route;	// 0x31deff2d
- (BOOL)_isPotentialDeviceVideoRoute:(id)route;	// 0x31defead
- (id)_routes;	// 0x31defe11
// declared property getter: - (id)audioDeviceController;	// 0x31defe01
- (void)dealloc;	// 0x31df08e5
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x31df0409
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x31df0a41
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x31df0041
// declared property getter: - (id)videoDestinationBrowser;	// 0x31defdf1
- (void)viewDidAppear:(BOOL)view;	// 0x31df0065
@end

