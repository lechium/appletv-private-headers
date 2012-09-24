/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSWriting.h"
#import <NSObject.h> // Unknown library

@class ICSStructuredLocation, ICSTrigger, NSMutableDictionary, NSMutableArray, NSArray, ICSDuration, NSString, ICSUserAddress, NSURL, ICSDate;

@interface ICSComponent : NSObject <ICSWriting> {
	NSMutableDictionary *_properties;	// 4 = 0x4
	NSMutableArray *_components;	// 8 = 0x8
}
@property(retain) NSArray *attach;	// G=0x35f149ed; S=0x35f14a0d; 
@property(retain) NSArray *attendee;	// G=0x35f14a2d; S=0x35f14a4d; 
@property(assign) int classification;	// G=0x35f14a6d; S=0x35f14b01; 
@property(retain) NSArray *components;	// G=0x35f145a1; S=0x35f145b5; @synthesize=_components
@property(retain) NSArray *conferences;	// G=0x35f15f0d; S=0x35f15eed; 
@property(retain) ICSDate *created;	// G=0x35f14b79; S=0x35f14bb1; 
@property(retain) NSString *description;	// G=0x35f14bd1; S=0x35f14c19; 
@property(retain) ICSDate *dtend;	// G=0x35f14d1d; S=0x35f14d55; 
@property(retain) ICSDate *dtstamp;	// G=0x35f14c39; S=0x35f14c71; 
@property(retain) ICSDate *dtstart;	// G=0x35f14c91; S=0x35f14cc9; 
@property(retain) ICSDuration *duration;	// G=0x35f14da9; S=0x35f14df1; 
@property(retain) NSArray *exdate;	// G=0x35f14e69; S=0x35f14e49; 
@property(retain) NSArray *exrule;	// G=0x35f14fd9; S=0x35f14e89; 
@property(readonly, assign) BOOL isAllDay;	// G=0x35f14ce9; 
@property(retain) ICSDate *last_modified;	// G=0x35f150e9; S=0x35f15121; 
@property(retain) NSString *location;	// G=0x35f15141; S=0x35f15189; 
@property(retain) ICSUserAddress *organizer;	// G=0x35f151a9; S=0x35f151e1; 
@property(assign) unsigned priority;	// G=0x35f15865; S=0x35f158d5; 
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x35f149a5; converted property
@property(retain) NSArray *rdate;	// G=0x35f15221; S=0x35f15201; 
@property(retain) ICSDate *recurrence_id;	// G=0x35f15241; S=0x35f15279; 
@property(retain) NSArray *rrule;	// G=0x35f153e9; S=0x35f15299; 
@property(assign) unsigned sequence;	// G=0x35f15549; S=0x35f154f9; 
@property(assign) int status;	// G=0x35f155b9; S=0x35f1564d; 
@property(retain) NSString *summary;	// G=0x35f156c5; S=0x35f1570d; 
@property(retain) ICSTrigger *trigger;	// G=0x35f1572d; S=0x35f15765; 
@property(retain) NSString *uid;	// G=0x35f15785; S=0x35f157cd; 
@property(retain) NSURL *url;	// G=0x35f157ed; S=0x35f15835; 
@property(retain) NSString *x_apple_dropbox;	// G=0x35f15a39; S=0x35f15a81; 
@property(retain) NSString *x_apple_etag;	// G=0x35f15dd5; S=0x35f15db5; 
@property(retain) NSString *x_apple_ews_changekey;	// G=0x35f15aa1; S=0x35f15ae9; 
@property(retain) NSString *x_apple_ews_itemid;	// G=0x35f15b09; S=0x35f15b51; 
@property(assign) BOOL x_apple_ews_needsserverconfirmation;	// G=0x35f15bd9; S=0x35f15c2d; 
@property(retain) NSString *x_apple_ews_permission;	// G=0x35f15b71; S=0x35f15bb9; 
@property(assign) BOOL x_apple_ignore_on_restore;	// G=0x35f15d09; S=0x35f15c89; 
@property(retain) NSString *x_apple_scheduletag;	// G=0x35f15e3d; S=0x35f15e1d; 
@property(retain) NSString *x_apple_serverFilename;	// G=0x35f15ea5; S=0x35f15e85; 
@property(retain) ICSStructuredLocation *x_apple_structured_location;	// G=0x35f15d7d; S=0x35f15d5d; 
@property(assign) int x_calendarserver_access;	// G=0x35f1592d; S=0x35f159c1; 
+ (id)inheritanceKeywords;	// 0x35f1a025
+ (id)makeUID;	// 0x35f13d41
+ (id)name;	// 0x35f13d8d
+ (int)statusFromString:(id)string;	// 0x35f13c2d
+ (id)stringFromStatus:(int)status;	// 0x35f13bb1
- (id)init;	// 0x35f13e09
- (id)ICSStringWithOptions:(unsigned)options;	// 0x35f14561
- (void)ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x35f140ed
- (void)addComponent:(id)component;	// 0x35f145c5
- (void)addProperty:(id)property withValue:(id)value;	// 0x35f148a5
- (id)allProperties;	// 0x35f149b5
// declared property getter: - (id)attach;	// 0x35f149ed
// declared property getter: - (id)attendee;	// 0x35f14a2d
// declared property getter: - (int)classification;	// 0x35f14a6d
// declared property getter: - (id)components;	// 0x35f145a1
// declared property getter: - (id)conferences;	// 0x35f15f0d
// declared property getter: - (id)created;	// 0x35f14b79
- (void)dealloc;	// 0x35f14089
- (id)debugDescription;	// 0x35f13e95
// declared property getter: - (id)description;	// 0x35f14bd1
// declared property getter: - (id)dtend;	// 0x35f14d1d
// declared property getter: - (id)dtstamp;	// 0x35f14c39
// declared property getter: - (id)dtstart;	// 0x35f14c91
// declared property getter: - (id)duration;	// 0x35f14da9
// declared property getter: - (id)exdate;	// 0x35f14e69
// declared property getter: - (id)exrule;	// 0x35f14fd9
- (void)fixAlarms;	// 0x35f1a2f1
- (void)fixAttachments;	// 0x35f1a8b5
- (void)fixAttendees;	// 0x35f1a615
- (void)fixComponent;	// 0x35f1b0c9
- (void)fixExceptionDates;	// 0x35f1af35
- (void)fixExceptionRules;	// 0x35f1ad85
- (void)fixPropertiesInheritance:(id)inheritance;	// 0x35f1a18d
- (void)fixRecurrenceDates;	// 0x35f1abf1
- (void)fixRecurrenceRules;	// 0x35f1aa41
// declared property getter: - (BOOL)isAllDay;	// 0x35f14ce9
// declared property getter: - (id)last_modified;	// 0x35f150e9
// declared property getter: - (id)location;	// 0x35f15141
// declared property getter: - (id)organizer;	// 0x35f151a9
// declared property getter: - (unsigned)priority;	// 0x35f15865
// converted property getter: - (id)properties;	// 0x35f149a5
- (id)propertiesForName:(id)name;	// 0x35f13fb1
// declared property getter: - (id)rdate;	// 0x35f15221
// declared property getter: - (id)recurrence_id;	// 0x35f15241
- (void)removeComponent:(id)component;	// 0x35f146a9
- (void)removePropertiesForName:(id)name;	// 0x35f13f91
// declared property getter: - (id)rrule;	// 0x35f153e9
// declared property getter: - (unsigned)sequence;	// 0x35f15549
// declared property setter: - (void)setAttach:(id)attach;	// 0x35f14a0d
// declared property setter: - (void)setAttendee:(id)attendee;	// 0x35f14a4d
// declared property setter: - (void)setClassification:(int)classification;	// 0x35f14b01
// declared property setter: - (void)setComponents:(id)components;	// 0x35f145b5
// declared property setter: - (void)setConferences:(id)conferences;	// 0x35f15eed
// declared property setter: - (void)setCreated:(id)created;	// 0x35f14bb1
// declared property setter: - (void)setDescription:(id)description;	// 0x35f14c19
// declared property setter: - (void)setDtend:(id)dtend;	// 0x35f14d55
// declared property setter: - (void)setDtstamp:(id)dtstamp;	// 0x35f14c71
// declared property setter: - (void)setDtstart:(id)dtstart;	// 0x35f14cc9
// declared property setter: - (void)setDuration:(id)duration;	// 0x35f14df1
// declared property setter: - (void)setExdate:(id)exdate;	// 0x35f14e49
// declared property setter: - (void)setExrule:(id)exrule;	// 0x35f14e89
// declared property setter: - (void)setLast_modified:(id)modified;	// 0x35f15121
// declared property setter: - (void)setLocation:(id)location;	// 0x35f15189
// declared property setter: - (void)setOrganizer:(id)organizer;	// 0x35f151e1
// declared property setter: - (void)setPriority:(unsigned)priority;	// 0x35f158d5
- (void)setProperties:(id)properties forName:(id)name;	// 0x35f13fd1
- (void)setProperty:(id)property forName:(id)name;	// 0x35f14005
- (void)setPropertyValue:(id)value forName:(id)name;	// 0x35f1478d
- (void)setPropertyValue:(id)value type:(int)type forName:(id)name;	// 0x35f14811
// declared property setter: - (void)setRdate:(id)rdate;	// 0x35f15201
// declared property setter: - (void)setRecurrence_id:(id)anId;	// 0x35f15279
// declared property setter: - (void)setRrule:(id)rrule;	// 0x35f15299
// declared property setter: - (void)setSequence:(unsigned)sequence;	// 0x35f154f9
// declared property setter: - (void)setStatus:(int)status;	// 0x35f1564d
// declared property setter: - (void)setSummary:(id)summary;	// 0x35f1570d
// declared property setter: - (void)setTrigger:(id)trigger;	// 0x35f15765
// declared property setter: - (void)setUid:(id)uid;	// 0x35f157cd
// declared property setter: - (void)setUrl:(id)url;	// 0x35f15835
// declared property setter: - (void)setX_apple_dropbox:(id)dropbox;	// 0x35f15a81
// declared property setter: - (void)setX_apple_etag:(id)etag;	// 0x35f15db5
// declared property setter: - (void)setX_apple_ews_changekey:(id)changekey;	// 0x35f15ae9
// declared property setter: - (void)setX_apple_ews_itemid:(id)itemid;	// 0x35f15b51
// declared property setter: - (void)setX_apple_ews_needsserverconfirmation:(BOOL)needsserverconfirmation;	// 0x35f15c2d
// declared property setter: - (void)setX_apple_ews_permission:(id)permission;	// 0x35f15bb9
// declared property setter: - (void)setX_apple_ignore_on_restore:(BOOL)restore;	// 0x35f15c89
// declared property setter: - (void)setX_apple_scheduletag:(id)scheduletag;	// 0x35f15e1d
// declared property setter: - (void)setX_apple_serverFilename:(id)filename;	// 0x35f15e85
// declared property setter: - (void)setX_apple_structured_location:(id)location;	// 0x35f15d5d
// declared property setter: - (void)setX_calendarserver_access:(int)access;	// 0x35f159c1
// declared property getter: - (int)status;	// 0x35f155b9
// declared property getter: - (id)summary;	// 0x35f156c5
// declared property getter: - (id)trigger;	// 0x35f1572d
// declared property getter: - (id)uid;	// 0x35f15785
// declared property getter: - (id)url;	// 0x35f157ed
- (BOOL)validate:(id *)validate;	// 0x35f13ec1
// declared property getter: - (id)x_apple_dropbox;	// 0x35f15a39
// declared property getter: - (id)x_apple_etag;	// 0x35f15dd5
// declared property getter: - (id)x_apple_ews_changekey;	// 0x35f15aa1
// declared property getter: - (id)x_apple_ews_itemid;	// 0x35f15b09
// declared property getter: - (BOOL)x_apple_ews_needsserverconfirmation;	// 0x35f15bd9
// declared property getter: - (id)x_apple_ews_permission;	// 0x35f15b71
// declared property getter: - (BOOL)x_apple_ignore_on_restore;	// 0x35f15d09
// declared property getter: - (id)x_apple_scheduletag;	// 0x35f15e3d
// declared property getter: - (id)x_apple_serverFilename;	// 0x35f15ea5
// declared property getter: - (id)x_apple_structured_location;	// 0x35f15d7d
// declared property getter: - (int)x_calendarserver_access;	// 0x35f1592d
@end
