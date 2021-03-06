/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "AppleTV-Structs.h"

@class NSTimer, NSArray, BRMediaMenuView;

__attribute__((visibility("hidden")))
@interface ATVMusicController : BRViewController {
	BRMediaMenuView *_mediaMenuView;	// 104 = 0x68
	NSArray *_unvalidatedRootMenus;	// 108 = 0x6c
	BOOL _waitPromptShowing;	// 112 = 0x70
	NSTimer *_waitPromptTimer;	// 116 = 0x74
	NSArray *_rootMenus;	// 120 = 0x78
}
@property(readonly, retain) BRMediaMenuView *mediaMenuView;	// G=0x3e78f9; converted property
@property(retain, nonatomic) NSArray *rootMenus;	// G=0x3e8fb1; S=0x3e8fc1; @synthesize=_rootMenus
+ (void)initialize;	// 0x3e77dd
- (id)init;	// 0x3e790d
- (void).cxx_destruct;	// 0x3e8fe9
- (void)_favoriteAdded:(id)added;	// 0x3e8ef9
- (void)_favoriteRemoved:(id)removed;	// 0x3e8f55
- (id)_favorites;	// 0x3e8bed
- (id)_favoritesArtwork;	// 0x3e8c41
- (void)_reload;	// 0x3e8add
- (void)_showWaitPrompt;	// 0x3e8725
- (void)_storeMenuLoaded:(id)loaded;	// 0x3e884d
- (void)_updateRootMenus;	// 0x3e8565
- (id)_validatedRootMenus:(id)menus;	// 0x3e8339
- (void)_waitForStore;	// 0x3e8669
- (void)dealloc;	// 0x3e7b0d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x3e7e0d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3e7f85
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3e7cb1
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3e7ded
// converted property getter: - (id)mediaMenuView;	// 0x3e78f9
// declared property getter: - (id)rootMenus;	// 0x3e8fb1
// declared property setter: - (void)setRootMenus:(id)menus;	// 0x3e8fc1
- (void)wasPushed;	// 0x3e7bd9
@end

