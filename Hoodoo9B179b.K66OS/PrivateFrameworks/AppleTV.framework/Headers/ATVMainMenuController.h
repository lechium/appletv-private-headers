/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BREventDelegate.h"
#import "BRSelectionHandler.h"
#import "BRViewController.h"

@class BRImage, NSMutableArray, NSDictionary, BRImageControl, BRFadeMaskLayer, NSMutableDictionary, BRPreferences, NSArray, BRShimmerControl, BRCursorControl, BRTopShelfView, ATVTopShelfRefreshTask, BRURLDocument, BRImageManager, ATVMainMenuButtonGrid;
@protocol ATVMainMenuControllerDelegate, BRAppliance, BRTopShelfController;

@interface ATVMainMenuController : BRViewController <BRSelectionHandler, BREventDelegate> {
@private
	BRControl *_containerView;	// 88 = 0x58
	id<BRTopShelfController> _shelfController;	// 92 = 0x5c
	BRImageControl *_shelfBackground;	// 96 = 0x60
	BRImageControl *_appsBackground;	// 100 = 0x64
	BRImageControl *_appsBackgroundShroud;	// 104 = 0x68
	BRTopShelfView *_topShelfView;	// 108 = 0x6c
	BOOL _shelfTransitionInFlight;	// 112 = 0x70
	BOOL _suppressShelfReloadFromFocusedAppliance;	// 113 = 0x71
	ATVMainMenuButtonGrid *_mainApplicationsGrid;	// 116 = 0x74
	ATVMainMenuButtonGrid *_internetContentGrid;	// 120 = 0x78
	BRShimmerControl *_topDivider;	// 124 = 0x7c
	BRFadeMaskLayer *_internetContentFadeMask;	// 128 = 0x80
	id<ATVMainMenuControllerDelegate> _delegate;	// 132 = 0x84
	BRCursorControl *_cursor;	// 136 = 0x88
	BRImage *_blackBrickImage;	// 140 = 0x8c
	id<BRAppliance> _focusedAppliance;	// 144 = 0x90
	NSMutableDictionary *_shelfControllersByApplication;	// 148 = 0x94
	ATVTopShelfRefreshTask *_topShelfRefreshTask;	// 152 = 0x98
	id _musicStoreUpdateObserver;	// 156 = 0x9c
	NSMutableArray *_changedMerchants;	// 160 = 0xa0
	NSMutableArray *_changedAppliances;	// 164 = 0xa4
	BRPreferences *_imageCachePrefs;	// 168 = 0xa8
	NSDictionary *_layoutInfo;	// 172 = 0xac
	BRURLDocument *_layoutDocument;	// 176 = 0xb0
	NSArray *_internetMerchants;	// 180 = 0xb4
	NSArray *_appliances;	// 184 = 0xb8
}
@property(copy, nonatomic) NSArray *appliances;	// G=0x303def45; S=0x303def55; @synthesize=_appliances
@property(assign, nonatomic) id<ATVMainMenuControllerDelegate> delegate;	// G=0x303de1c5; S=0x303de1b5; 
@property(readonly, assign, nonatomic) id<BRAppliance> focusedAppliance;	// G=0x303de17d; 
@property(readonly, assign, nonatomic) BRImageManager *imageManager;	// G=0x303def79; 
@property(copy, nonatomic) NSArray *internetMerchants;	// G=0x303def35; S=0x303db919; @synthesize=_internetMerchants
+ (BOOL)automaticallyNotifiesObserversOfInternetMerchants;	// 0x303db915
+ (id)mainMenu;	// 0x303db0ed
- (id)init;	// 0x303db15d
- (void)_animateContainerViewToPosition:(CGPoint)position;	// 0x303dd241
- (id)_blackBrickImage;	// 0x303df061
- (void)_cacheImageForAppliance:(id)appliance;	// 0x303df5e1
- (void)_cacheImageForMerchant:(id)merchant;	// 0x303df73d
- (void)_cleanupLayoutDocument;	// 0x303dc281
- (void)_coalescedUpdateImagesForChangedAppliances;	// 0x303dfb95
- (void)_coalescedUpdateImagesForChangedMerchants;	// 0x303dfa0d
- (id)_extraInfoForAppliance:(id)appliance;	// 0x303df309
- (void)_handleImageManagerImageUpdatedNotification:(id)notification;	// 0x303df815
- (BOOL)_handleRemoteEvent:(id)event;	// 0x303de8fd
- (BOOL)_handleTouchEvent:(id)event;	// 0x303dead1
- (void)_handleWindowMaxBoundsChanged;	// 0x303dbed9
- (id)_identifierFromImageID:(id)imageID;	// 0x303df51d
- (id)_imageBaseNameFromAppliance:(id)appliance;	// 0x303df3c1
- (id)_imageForAppliance:(id)appliance;	// 0x303df145
- (id)_imageForMerchant:(id)merchant;	// 0x303df0ad
- (id)_imageNameFromAppliance:(id)appliance;	// 0x303df415
- (id)_imageNameFromMerchant:(id)merchant;	// 0x303df2d1
- (id)_imageNameWithBaseName:(id)baseName;	// 0x303df22d
- (void)_layoutContainerView;	// 0x303dc4fd
- (void)_layoutViews;	// 0x303dc66d
- (id)_newBackgroundWithImageNamed:(id)imageNamed;	// 0x303dcc79
- (id)_newInternetContentGrid;	// 0x303dcfc5
- (id)_newMainApplicationsGrid;	// 0x303dcd2d
- (id)_prefsVersionKeyFromName:(id)name;	// 0x303df44d
- (void)_refreshTopShelfControllers;	// 0x303dcc3d
- (void)_reload;	// 0x303dbe15
- (void)_reloadTopShelf;	// 0x303ddced
- (void)_reloadTopShelfWithoutAnimating;	// 0x303ddbed
- (void)_saveVersion:(id)version forAppID:(id)appID;	// 0x303df4dd
- (void)_scrollApplicationsToVisible;	// 0x303dd785
- (void)_scrollShelfToVisible;	// 0x303dd35d
- (void)_setupTopShelfView;	// 0x303dcb05
- (void)_updateCachedApplianceImages;	// 0x303dbc41
- (void)_updateCachedMerchantImages;	// 0x303dbb95
- (id)_versionForAppID:(id)appID;	// 0x303df4a1
- (id)accessibilityLabel;	// 0x303def0d
- (id)accessibilityScreenContent;	// 0x303deebd
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x303de0c1
// declared property getter: - (id)appliances;	// 0x303def45
- (BOOL)brEventAction:(id)action withControl:(id)control;	// 0x303de3b1
- (BOOL)brKeyEvent:(id)event withControl:(id)control;	// 0x303debfd
- (BOOL)canBeRemovedFromStack;	// 0x303deeb9
- (void)controlWasActivated;	// 0x303db8ad
- (void)dealloc;	// 0x303db6f1
// declared property getter: - (id)delegate;	// 0x303de1c5
- (void)focusApplianceWithIdentifier:(id)identifier;	// 0x303de1d5
// declared property getter: - (id)focusedAppliance;	// 0x303de17d
- (BOOL)handleSelectionForControl:(id)control;	// 0x303deeb5
// declared property getter: - (id)imageManager;	// 0x303def79
// declared property getter: - (id)internetMerchants;	// 0x303def35
- (void)loadApplication:(id)application;	// 0x303dec01
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x303dc31d
// declared property setter: - (void)setAppliances:(id)appliances;	// 0x303def55
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x303de1b5
- (void)setFocusedAppliance:(id)appliance;	// 0x303de115
// declared property setter: - (void)setInternetMerchants:(id)merchants;	// 0x303db919
- (id)topShelfControllerForApp:(id)app;	// 0x303de2c9
- (void)updateBoundAvailableAppliances;	// 0x303dbced
- (void)updateBoundFocusedControlOfContainerView;	// 0x303dbd79
- (void)updateBoundInternetMerchants;	// 0x303dba85
- (void)updateBoundMusicStoreMerchantInfo;	// 0x303dbd69
- (id)view;	// 0x303dbf3d
@end

