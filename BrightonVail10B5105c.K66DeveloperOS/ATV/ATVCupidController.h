/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSecureResource.h"
#import "BRDataQueryController.h"

@class NSTimer, ATVDataQuery, NSArray, NSIndexPath;

__attribute__((visibility("hidden")))
@interface ATVCupidController : BRDataQueryController <BRSecureResource> {
	int _mode;	// 164 = 0xa4
	NSIndexPath *_ignoreRepeatedFocusEventsForIndexPath;	// 168 = 0xa8
	NSTimer *_focusDwellTimer;	// 172 = 0xac
	NSTimer *_focusSettleTimer;	// 176 = 0xb0
	NSArray *__sectionsData;	// 180 = 0xb4
	int _numberOfUnhandledItemsQueryRequests;	// 184 = 0xb8
	BOOL __updateOnExhume;	// 188 = 0xbc
	NSTimer *_photoStreamAlbumsListReloadTimer;	// 192 = 0xc0
	ATVDataQuery *_itemsQuery;	// 196 = 0xc4
}
@property(retain, nonatomic) NSArray *_sectionsData;	// G=0xfa12d; S=0xfa13d; @synthesize=__sectionsData
@property(assign, nonatomic) BOOL _updateOnExhume;	// G=0xfa16d; S=0xfa17d; @synthesize=__updateOnExhume
@property(assign, nonatomic, setter=_setFocusDwellTimer:) NSTimer *focusDwellTimer;	// G=0xfa10d; S=0xf79e5; @synthesize=_focusDwellTimer
@property(assign, nonatomic, setter=_setFocusSettleTimer:) NSTimer *focusSettleTimer;	// G=0xfa11d; S=0xf79a1; @synthesize=_focusSettleTimer
@property(retain, nonatomic) NSIndexPath *ignoreRepeatedFocusEventsForIndexPath;	// G=0xfa0ed; S=0xfa0fd; @synthesize=_ignoreRepeatedFocusEventsForIndexPath
@property(retain, nonatomic) ATVDataQuery *itemsQuery;	// G=0xfa19d; S=0xfa1ad; @synthesize=_itemsQuery
@property(assign, nonatomic) int mode;	// G=0xfa0cd; S=0xfa0dd; @synthesize=_mode
@property(assign, nonatomic) int numberOfUnhandledItemsQueryRequests;	// G=0xfa14d; S=0xfa15d; @synthesize=_numberOfUnhandledItemsQueryRequests
@property(assign, nonatomic, setter=_photoStreamAlbumsListReloadTimer:) NSTimer *photoStreamAlbumsListReloadTimer;	// G=0xfa18d; S=0xf7a29; @synthesize=_photoStreamAlbumsListReloadTimer
+ (id)cupidController;	// 0xf71b5
+ (id)cupidControllerWithMode:(int)mode index:(unsigned)index;	// 0xf722d
+ (id)cupidScreenSaverController;	// 0xf71f1
+ (void)initialize;	// 0xf70e5
- (id)init;	// 0xf7269
- (id)initWithMode:(int)mode;	// 0xf727d
- (void)_dataClientStatusChanged:(id)changed;	// 0xfb4f9
- (id)_defaultDescriptionForCollection:(id)collection;	// 0xfa7e9
- (void)_didFocusItemAtIndexPath:(id)indexPath;	// 0xf95e9
- (void)_focusDwellTimerFired:(id)fired;	// 0xf979d
- (void)_focusSettleTimerFired:(id)fired;	// 0xf954d
- (BOOL)_handleContextMenuSelection:(id)selection;	// 0xfb4a5
- (void)_handleMembershipQueryCompletionFromContextMenu:(id)contextMenu;	// 0xfb149
- (id)_itemAtIndexPath:(id)indexPath;	// 0xfa325
- (id)_parseSectionsDataFromDataQuery:(id)dataQuery;	// 0xfa3bd
- (id)_photoBrowserControllerForCollection:(id)collection;	// 0xfa8b1
// declared property setter: - (void)_photoStreamAlbumsListReloadTimer:(id)timer;	// 0xf7a29
- (void)_photoStreamAlbumsListReloadTimerFired:(id)fired;	// 0xf8575
- (void)_runDataItemsQuery:(id)query;	// 0xf8319
- (void)_runInvitationAlertForCollection:(id)collection invitationAccepted:(BOOL *)accepted invitationDeclined:(BOOL *)declined;	// 0xfb199
- (void)_screenSaverActivated:(id)activated;	// 0xfb581
- (id)_sectionItemsForSectionIndex:(int)sectionIndex;	// 0xfa1bd
// declared property getter: - (id)_sectionsData;	// 0xfa12d
// declared property setter: - (void)_setFocusDwellTimer:(id)timer;	// 0xf79e5
// declared property setter: - (void)_setFocusSettleTimer:(id)timer;	// 0xf79a1
- (void)_setScreenSaverPhotoCollection:(id)collection;	// 0xfb40d
- (void)_showMembershipQueryErrorDialog:(id)dialog;	// 0xfafe9
- (void)_stillFocusedOnItemAtIndexPath:(id)indexPath;	// 0xf97bd
// declared property getter: - (BOOL)_updateOnExhume;	// 0xfa16d
- (BOOL)brEventAction:(id)action;	// 0xf787d
- (BOOL)dataClientUpdated:(id)updated;	// 0xf7b19
- (BOOL)dataQueryComplete:(id)complete;	// 0xf8611
- (void)dealloc;	// 0xf7455
- (id)errorForNoContent;	// 0xf7a6d
// declared property getter: - (id)focusDwellTimer;	// 0xfa10d
// declared property getter: - (id)focusSettleTimer;	// 0xfa11d
// declared property getter: - (id)ignoreRepeatedFocusEventsForIndexPath;	// 0xfa0ed
- (BOOL)isQueryResultValid:(id)valid;	// 0xf8655
// declared property getter: - (id)itemsQuery;	// 0xfa19d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0xf93fd
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0xf9991
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xf9285
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0xf924d
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0xf8df5
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0xf8ee1
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0xf8e3d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xf86f9
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xf8c05
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0xf8cb1
// declared property getter: - (int)mode;	// 0xfa0cd
- (id)newDataQuery;	// 0xf7a8d
- (long)numberOfSectionsInList:(id)list;	// 0xf8bdd
// declared property getter: - (int)numberOfUnhandledItemsQueryRequests;	// 0xfa14d
// declared property getter: - (id)photoStreamAlbumsListReloadTimer;	// 0xfa18d
- (id)providersForContextMenu;	// 0xf9b25
- (id)secureResourceAuthenticator;	// 0xf86a1
// declared property setter: - (void)setIgnoreRepeatedFocusEventsForIndexPath:(id)indexPath;	// 0xfa0fd
// declared property setter: - (void)setItemsQuery:(id)query;	// 0xfa1ad
// declared property setter: - (void)setMode:(int)mode;	// 0xfa0dd
// declared property setter: - (void)setNumberOfUnhandledItemsQueryRequests:(int)unhandledItemsQueryRequests;	// 0xfa15d
// declared property setter: - (void)set_sectionsData:(id)data;	// 0xfa13d
// declared property setter: - (void)set_updateOnExhume:(BOOL)exhume;	// 0xfa17d
- (void)wasBuried;	// 0xf7625
- (void)wasExhumed;	// 0xf7745
- (void)wasPopped;	// 0xf754d
- (void)wasPushed;	// 0xf74e5
@end
