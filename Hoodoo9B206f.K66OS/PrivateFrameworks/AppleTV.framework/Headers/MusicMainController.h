/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "MusicController.h"

@class NSArray, BRControl, NSString;

@interface MusicMainController : MusicController {
@private
	BRControl *_allSongsPreview;	// 124 = 0x7c
	BOOL _displayNowPlaying;	// 128 = 0x80
	NSArray *_controllerMenuItems;	// 132 = 0x84
	NSString *_textEntryClient;	// 136 = 0x88
}
@property(retain, nonatomic) NSArray *controllerMenuItems;	// G=0x367aab21; S=0x367aab31; @synthesize=_controllerMenuItems
@property(retain, nonatomic) NSString *textEntryClient;	// G=0x367aab55; S=0x367aab65; @synthesize=_textEntryClient
+ (void)initialize;	// 0x367a9b39
- (id)_indexPathForTitleKey:(id)titleKey;	// 0x367aac2d
- (unsigned)_menuItemForRow:(unsigned)row;	// 0x367aab89
- (id)_menuItemTitleKeyForIndexPath:(id)indexPath;	// 0x367aabc1
- (void)_networkStateChanged:(id)changed;	// 0x367aaedd
- (void)_playerStateChanged:(id)changed;	// 0x367aae95
- (void)_updateNowPlaying;	// 0x367aad19
- (void)controlWasActivated;	// 0x367a9d1d
// declared property getter: - (id)controllerMenuItems;	// 0x367aab21
- (ATVMediaQueryRef)createPlayQueryForIndexPath:(id)indexPath;	// 0x367aa9b1
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x367aa905
- (void)dealloc;	// 0x367a9c79
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x367aa091
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x367aa2c5
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x367aa085
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x367aa02d
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x367aa8f1
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x367aa8dd
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x367a9ec9
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x367a9fa9
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x367a9ff1
- (long)numberOfSectionsInList:(id)list;	// 0x367a9fa5
- (void)playQueryComplete:(ATVMediaQueryRef)complete;	// 0x367aaa31
// declared property setter: - (void)setControllerMenuItems:(id)items;	// 0x367aab31
// declared property setter: - (void)setTextEntryClient:(id)client;	// 0x367aab65
// declared property getter: - (id)textEntryClient;	// 0x367aab55
- (void)wasPopped;	// 0x367a9e5d
- (void)wasPushed;	// 0x367a9d5d
@end

