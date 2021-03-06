/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "AppleTV-Structs.h"
#import "ATVPhotoFullScreenViewDataSource.h"
#import "ATVPhotoFullScreenViewDelegate.h"

@class NSString, ATVPhotoBrowserView, ATVPhotoFullScreenView, NSDateFormatter, ATVDataClient, NSTimer, BRPhotoControlFactory, NSArray, ATVDataQuery, ATVDataCollection;

__attribute__((visibility("hidden")))
@interface ATVDPAPPhotoBrowserController : BRViewController <ATVPhotoFullScreenViewDataSource, ATVPhotoFullScreenViewDelegate> {
	NSTimer *_spinnerTimer;	// 104 = 0x68
	BOOL _dataRequiresUpdate;	// 108 = 0x6c
	long _collectionItemCount;	// 112 = 0x70
	BOOL _photoBrowserViewReloadPending;	// 116 = 0x74
	id _screenSaverSetCollectionBlock;	// 120 = 0x78
	ATVPhotoBrowserView *_photoBrowserView;	// 124 = 0x7c
	ATVPhotoFullScreenView *_photoFullScreenView;	// 128 = 0x80
	BRPhotoControlFactory *_controlFactory;	// 132 = 0x84
	ATVDataClient *_dataClient;	// 136 = 0x88
	NSString *_collectionType;	// 140 = 0x8c
	ATVDataCollection *_collection;	// 144 = 0x90
	NSDateFormatter *_dateFormatter;	// 148 = 0x94
	ATVDataQuery *_pendingDataQuery;	// 152 = 0x98
	ATVDataQuery *_pendingCollectionMetaDataQuery;	// 156 = 0x9c
	NSArray *_resultData;	// 160 = 0xa0
}
@property(retain, nonatomic) ATVDataCollection *_collection;	// G=0x345dbd; S=0x345dcd; @synthesize
@property(retain, nonatomic) NSString *_collectionType;	// G=0x345d9d; S=0x345dad; @synthesize
@property(retain, nonatomic) BRPhotoControlFactory *_controlFactory;	// G=0x345d5d; S=0x345d6d; @synthesize
@property(retain, nonatomic) ATVDataClient *_dataClient;	// G=0x345d7d; S=0x345d8d; @synthesize
@property(retain, nonatomic) NSDateFormatter *_dateFormatter;	// G=0x345ddd; S=0x345ded; @synthesize
@property(retain, nonatomic) ATVPhotoBrowserView *_photoBrowserView;	// G=0x345d1d; S=0x345d2d; @synthesize
@property(retain, nonatomic) ATVPhotoFullScreenView *_photoFullScreenView;	// G=0x345d3d; S=0x345d4d; @synthesize
@property(retain, nonatomic) NSArray *_resultData;	// G=0x345e1d; S=0x345e2d; @synthesize
@property(retain, nonatomic) ATVDataQuery *pendingCollectionMetaDataQuery;	// G=0x345e0d; S=0x345ca1; @synthesize=_pendingCollectionMetaDataQuery
@property(retain, nonatomic) ATVDataQuery *pendingDataQuery;	// G=0x345dfd; S=0x345c49; @synthesize=_pendingDataQuery
@property(copy, nonatomic) id screenSaverSetCollectionBlock;	// G=0x345cf9; S=0x345d0d; @synthesize=_screenSaverSetCollectionBlock
+ (id)controllerForCollection:(id)collection dataClient:(id)client;	// 0x34554d
+ (id)controllerForCollectionType:(id)collectionType dataClient:(id)client;	// 0x3454f9
- (id)initWithColletionType:(id)colletionType collection:(id)collection dataClient:(id)client;	// 0x3455a1
// declared property getter: - (id)_collection;	// 0x345dbd
- (long)_collectionItemCount;	// 0x347191
// declared property getter: - (id)_collectionType;	// 0x345d9d
// declared property getter: - (id)_controlFactory;	// 0x345d5d
// declared property getter: - (id)_dataClient;	// 0x345d7d
- (void)_dataClientDataUpdated:(id)updated;	// 0x347b39
- (void)_dataClientStatusChanged:(id)changed;	// 0x347c19
- (void)_dataQueryComplete:(id)complete;	// 0x347711
// declared property getter: - (id)_dateFormatter;	// 0x345ddd
- (void)_executeDataQuery;	// 0x3471d5
- (void)_handleSlideshowSelection:(id)selection;	// 0x346539
- (void)_handleUseForScreensaverSelection:(id)screensaverSelection;	// 0x346749
- (void)_initiateSlideshowPlaybackAtIndex:(long)index inPhotos:(id)photos withOptions:(id)options;	// 0x346b21
// declared property getter: - (id)_photoBrowserView;	// 0x345d1d
// declared property getter: - (id)_photoFullScreenView;	// 0x345d3d
- (void)_playObjectAtIndex:(long)index shuffle:(BOOL)shuffle;	// 0x346979
- (void)_playerLastPlayedAsset:(id)asset;	// 0x346cb1
- (void)_playerStateChanged:(id)changed;	// 0x346c05
- (void)_reload;	// 0x346279
// declared property getter: - (id)_resultData;	// 0x345e1d
- (void)_screensaverPhotosDidChange:(id)_screensaverPhotos;	// 0x346d29
- (void)_setSubtitleForObjectAtIndex:(long)index;	// 0x3463dd
- (void)_showSpinner;	// 0x3460c1
- (BOOL)_switchToPhotoBrowserView;	// 0x3461c1
- (void)_updateButtons;	// 0x345e3d
- (BOOL)brEventAction:(id)action;	// 0x345be5
- (void)controlWasActivated;	// 0x345aa5
- (void)controlWasDeactivated;	// 0x345b1d
- (void)dealloc;	// 0x3458b9
- (void)fullScreenView:(id)view didDisplayItemAtIndex:(long)index;	// 0x347171
- (void)fullScreenView:(id)view didSelectItemAtIndex:(long)index;	// 0x34715d
- (id)fullScreenView:(id)view objectAtIndex:(long)index;	// 0x347105
- (void)grid:(id)grid didFocusItemAtIndex:(long)index;	// 0x346f49
- (void)grid:(id)grid didPlayItemAtIndex:(long)index;	// 0x3470f1
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0x346f5d
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x346eb1
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x346e5d
- (void)layoutSubcontrols;	// 0x345b85
- (long)numberOfColumnsInGrid:(id)grid;	// 0x346df9
- (long)numberOfItemsInFullScreenView:(id)fullScreenView;	// 0x34713d
- (long)numberOfItemsInGrid:(id)grid;	// 0x346d39
// declared property getter: - (id)pendingCollectionMetaDataQuery;	// 0x345e0d
// declared property getter: - (id)pendingDataQuery;	// 0x345dfd
// declared property getter: - (id)screenSaverSetCollectionBlock;	// 0x345cf9
// declared property setter: - (void)setPendingCollectionMetaDataQuery:(id)query;	// 0x345ca1
// declared property setter: - (void)setPendingDataQuery:(id)query;	// 0x345c49
// declared property setter: - (void)setScreenSaverSetCollectionBlock:(id)block;	// 0x345d0d
// declared property setter: - (void)set_collection:(id)collection;	// 0x345dcd
// declared property setter: - (void)set_collectionType:(id)type;	// 0x345dad
// declared property setter: - (void)set_controlFactory:(id)factory;	// 0x345d6d
// declared property setter: - (void)set_dataClient:(id)client;	// 0x345d8d
// declared property setter: - (void)set_dateFormatter:(id)formatter;	// 0x345ded
// declared property setter: - (void)set_photoBrowserView:(id)view;	// 0x345d2d
// declared property setter: - (void)set_photoFullScreenView:(id)view;	// 0x345d4d
// declared property setter: - (void)set_resultData:(id)data;	// 0x345e2d
- (void)wasPushed;	// 0x345a15
@end

