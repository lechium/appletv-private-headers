/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "MobileCalDAVOperationActor.h"

@class CalDAVRefreshContext;

@interface MobileCalDAVAccountRefreshActor : MobileCalDAVOperationActor {
	CalDAVRefreshContext *_context;	// 24 = 0x18
	BOOL _handledCookieFailure;	// 28 = 0x1c
	double _bulkRetryBackoff;	// 32 = 0x20
	BOOL _shouldRetry;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) CalDAVRefreshContext *context;	// G=0x340adab5; @synthesize=_context
@property(assign) BOOL shouldCancel;	// G=0x340add0d; S=0x340add31; converted property
+ (void)setCalDAVRefreshBackgroundTasksShouldCancel:(BOOL)cancel;	// 0x340aec41
+ (BOOL)shouldCancel;	// 0x340adaa1
- (id)initWithQueue:(id)queue context:(id)context callbackTarget:(id)target callbackThread:(id)thread;	// 0x340aeb81
- (id)_ICSCalendarsFromMainEventUIDs:(id)mainEventUIDs inCalendar:(id)calendar withAccount:(id)account;	// 0x340b22b9
- (void)_collectLocallyModifiedEventsInCalendar:(id)calendar forAccount:(id)account shouldSave:(BOOL *)save outEventsToSend:(id *)send outPathsToMove:(id *)move outEventsToDelete:(id *)aDelete;	// 0x340b4b3d
- (void *)_copyCalEventForDetachedEvent:(id)detachedEvent inCalendar:(id)calendar;	// 0x340b1ac1
- (void)_fixUpICSCalendar:(id)calendar forEvent:(void *)event inCalendar:(id)calendar3 withAccount:(id)account;	// 0x340b1b99
- (BOOL)_handleBadPasswordResponseWithAccount:(id)account;	// 0x340aed91
- (BOOL)_refreshCalendar:(id)calendar fromAccount:(id)account newCTag:(id)tag shouldSave:(BOOL *)save error:(id *)error;	// 0x340b247d
- (void)_sendResultToCallbackActor:(id)callbackActor;	// 0x340aea61
// declared property getter: - (id)context;	// 0x340adab5
- (void)dealloc;	// 0x340aeb15
- (id)doBlockWithPasswordCheck:(id)passwordCheck;	// 0x340ae3f9
- (oneway void)refresh;	// 0x340af1dd
- (BOOL)refreshCalendarCollectionsForAccount:(id)account pathsToCTags:(id)ctags shouldSave:(BOOL *)save error:(id *)error;	// 0x340b3c75
- (id)refreshCalendarsForAccount:(id)account shouldSave:(BOOL *)save error:(id *)error;	// 0x340afa11
- (oneway void)refreshCalendarsOnly;	// 0x340ae6c5
- (BOOL)refreshInboxCollectionForAccount:(id)account ctag:(id)ctag shouldSave:(BOOL *)save error:(id *)error;	// 0x340add59
- (BOOL)refreshNotificationCollectionForAccount:(id)account ctag:(id)ctag shouldSave:(BOOL *)save error:(id *)error;	// 0x340adab1
- (BOOL)refreshPropertiesForAccount:(id)account shouldSave:(BOOL *)save error:(id *)error;	// 0x340b12f9
// converted property setter: - (void)setShouldCancel:(BOOL)cancel;	// 0x340add31
// converted property getter: - (BOOL)shouldCancel;	// 0x340add0d
@end

