/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVContainer.h> // Unknown library

@class ICSDuration, NSURL, NSSet, NSString, NSTimeZone;

@interface CalDAVContainer : CoreDAVContainer {
	NSString *_calendarDescription;	// 76 = 0x4c
	NSString *_ctag;	// 80 = 0x50
	NSString *_calendarColor;	// 84 = 0x54
	NSString *_calendarOrder;	// 88 = 0x58
	NSString *_xmppURI;	// 92 = 0x5c
	NSString *_xmppServer;	// 96 = 0x60
	NSSet *_supportedCalendarComponentSet;	// 100 = 0x64
	BOOL _subscribedStripAlarms;	// 104 = 0x68
	BOOL _subscribedStripTodos;	// 105 = 0x69
	BOOL _subscribedStripAttachments;	// 106 = 0x6a
	ICSDuration *_subscribedRefreshRate;	// 108 = 0x6c
	NSURL *_publishURL;	// 112 = 0x70
	BOOL _isScheduleTransparent;	// 116 = 0x74
	NSTimeZone *_timeZone;	// 120 = 0x78
	BOOL _canBePublished;	// 124 = 0x7c
	NSURL *_source;	// 128 = 0x80
	NSSet *_freeBusySet;	// 132 = 0x84
	NSURL *_scheduleDefaultCalendarURL;	// 136 = 0x88
}
@property(retain) NSString *calendarColor;	// G=0x35a85ae5; S=0x35a85ac1; @synthesize=_calendarColor
@property(retain) NSString *calendarDescription;	// G=0x35a85a6d; S=0x35a85a49; @synthesize=_calendarDescription
@property(retain) NSString *calendarOrder;	// G=0x35a85b21; S=0x35a85afd; @synthesize=_calendarOrder
@property(assign) BOOL canBePublished;	// G=0x35a850c1; S=0x35a850d1; @synthesize=_canBePublished
@property(retain) NSString *ctag;	// G=0x35a85aa9; S=0x35a85a85; @synthesize=_ctag
@property(retain) NSSet *freeBusySet;	// G=0x35a85d01; S=0x35a85cdd; @synthesize=_freeBusySet
@property(readonly, assign) BOOL isCalendar;	// G=0x35a8519d; 
@property(readonly, assign) BOOL isEventContainer;	// G=0x35a8535d; 
@property(readonly, assign) BOOL isNotification;	// G=0x35a8525d; 
@property(readonly, assign) BOOL isScheduleInbox;	// G=0x35a851dd; 
@property(readonly, assign) BOOL isScheduleOutbox;	// G=0x35a8521d; 
@property(assign) BOOL isScheduleTransparent;	// G=0x35a850e1; S=0x35a850f1; @synthesize=_isScheduleTransparent
@property(readonly, assign) BOOL isShared;	// G=0x35a8531d; 
@property(readonly, assign) BOOL isSharedOwner;	// G=0x35a852dd; 
@property(readonly, assign) BOOL isSubscribed;	// G=0x35a8529d; 
@property(readonly, assign) BOOL isTaskContainer;	// G=0x35a85381; 
@property(retain) NSURL *publishURL;	// G=0x35a85c4d; S=0x35a85c29; @synthesize=_publishURL
@property(retain) NSURL *scheduleDefaultCalendarURL;	// G=0x35a85d3d; S=0x35a85d19; @synthesize=_scheduleDefaultCalendarURL
@property(retain) NSURL *source;	// G=0x35a85cc5; S=0x35a85ca1; @synthesize=_source
@property(retain) ICSDuration *subscribedRefreshRate;	// G=0x35a85c11; S=0x35a85bed; @synthesize=_subscribedRefreshRate
@property(assign) BOOL subscribedStripAlarms;	// G=0x35a85141; S=0x35a85151; @synthesize=_subscribedStripAlarms
@property(assign) BOOL subscribedStripAttachments;	// G=0x35a85101; S=0x35a85111; @synthesize=_subscribedStripAttachments
@property(assign) BOOL subscribedStripTodos;	// G=0x35a85121; S=0x35a85131; @synthesize=_subscribedStripTodos
@property(retain) NSSet *supportedCalendarComponentSet;	// G=0x35a85bd5; S=0x35a85bb1; @synthesize=_supportedCalendarComponentSet
@property(readonly, assign) BOOL supportsFreebusy;	// G=0x35a853a5; 
@property(retain) NSTimeZone *timeZone;	// G=0x35a85c89; S=0x35a85c65; @synthesize=_timeZone
@property(retain) NSString *xmppServer;	// G=0x35a85b99; S=0x35a85b75; @synthesize=_xmppServer
@property(retain) NSString *xmppURI;	// G=0x35a85b5d; S=0x35a85b39; @synthesize=_xmppURI
+ (id)copyPropertyMappingsForParser;	// 0x35a853c5
- (BOOL)_isComponentSupportedForString:(id)string;	// 0x35a85161
- (void)_setTimeZoneFromProperties:(id)properties onCalendar:(id)calendar;	// 0x35a85d55
- (void)applyParsedProperties:(id)properties;	// 0x35a85fb1
// declared property getter: - (id)calendarColor;	// 0x35a85ae5
// declared property getter: - (id)calendarDescription;	// 0x35a85a6d
// declared property getter: - (id)calendarOrder;	// 0x35a85b21
// declared property getter: - (BOOL)canBePublished;	// 0x35a850c1
// declared property getter: - (id)ctag;	// 0x35a85aa9
- (void)dealloc;	// 0x35a85905
- (id)description;	// 0x35a86469
// declared property getter: - (id)freeBusySet;	// 0x35a85d01
// declared property getter: - (BOOL)isCalendar;	// 0x35a8519d
// declared property getter: - (BOOL)isEventContainer;	// 0x35a8535d
// declared property getter: - (BOOL)isNotification;	// 0x35a8525d
// declared property getter: - (BOOL)isScheduleInbox;	// 0x35a851dd
// declared property getter: - (BOOL)isScheduleOutbox;	// 0x35a8521d
// declared property getter: - (BOOL)isScheduleTransparent;	// 0x35a850e1
// declared property getter: - (BOOL)isShared;	// 0x35a8531d
// declared property getter: - (BOOL)isSharedOwner;	// 0x35a852dd
// declared property getter: - (BOOL)isSubscribed;	// 0x35a8529d
// declared property getter: - (BOOL)isTaskContainer;	// 0x35a85381
// declared property getter: - (id)publishURL;	// 0x35a85c4d
// declared property getter: - (id)scheduleDefaultCalendarURL;	// 0x35a85d3d
// declared property setter: - (void)setCalendarColor:(id)color;	// 0x35a85ac1
// declared property setter: - (void)setCalendarDescription:(id)description;	// 0x35a85a49
// declared property setter: - (void)setCalendarOrder:(id)order;	// 0x35a85afd
// declared property setter: - (void)setCanBePublished:(BOOL)published;	// 0x35a850d1
// declared property setter: - (void)setCtag:(id)ctag;	// 0x35a85a85
// declared property setter: - (void)setFreeBusySet:(id)set;	// 0x35a85cdd
// declared property setter: - (void)setIsScheduleTransparent:(BOOL)transparent;	// 0x35a850f1
// declared property setter: - (void)setPublishURL:(id)url;	// 0x35a85c29
// declared property setter: - (void)setScheduleDefaultCalendarURL:(id)url;	// 0x35a85d19
// declared property setter: - (void)setSource:(id)source;	// 0x35a85ca1
// declared property setter: - (void)setSubscribedRefreshRate:(id)rate;	// 0x35a85bed
// declared property setter: - (void)setSubscribedStripAlarms:(BOOL)alarms;	// 0x35a85151
// declared property setter: - (void)setSubscribedStripAttachments:(BOOL)attachments;	// 0x35a85111
// declared property setter: - (void)setSubscribedStripTodos:(BOOL)todos;	// 0x35a85131
// declared property setter: - (void)setSupportedCalendarComponentSet:(id)set;	// 0x35a85bb1
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x35a85c65
// declared property setter: - (void)setXmppServer:(id)server;	// 0x35a85b75
// declared property setter: - (void)setXmppURI:(id)uri;	// 0x35a85b39
// declared property getter: - (id)source;	// 0x35a85cc5
// declared property getter: - (id)subscribedRefreshRate;	// 0x35a85c11
// declared property getter: - (BOOL)subscribedStripAlarms;	// 0x35a85141
// declared property getter: - (BOOL)subscribedStripAttachments;	// 0x35a85101
// declared property getter: - (BOOL)subscribedStripTodos;	// 0x35a85121
// declared property getter: - (id)supportedCalendarComponentSet;	// 0x35a85bd5
// declared property getter: - (BOOL)supportsFreebusy;	// 0x35a853a5
// declared property getter: - (id)timeZone;	// 0x35a85c89
// declared property getter: - (id)xmppServer;	// 0x35a85b99
// declared property getter: - (id)xmppURI;	// 0x35a85b5d
@end

