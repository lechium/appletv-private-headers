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
@property(retain) NSArray *attach;	// G=0x368369ed; S=0x36836a0d; 
@property(retain) NSArray *attendee;	// G=0x36836a2d; S=0x36836a4d; 
@property(assign) int classification;	// G=0x36836a6d; S=0x36836b01; 
@property(retain) NSArray *components;	// G=0x368365a1; S=0x368365b5; @synthesize=_components
@property(retain) NSArray *conferences;	// G=0x36837f0d; S=0x36837eed; 
@property(retain) ICSDate *created;	// G=0x36836b79; S=0x36836bb1; 
@property(retain) NSString *description;	// G=0x36836bd1; S=0x36836c19; 
@property(retain) ICSDate *dtend;	// G=0x36836d1d; S=0x36836d55; 
@property(retain) ICSDate *dtstamp;	// G=0x36836c39; S=0x36836c71; 
@property(retain) ICSDate *dtstart;	// G=0x36836c91; S=0x36836cc9; 
@property(retain) ICSDuration *duration;	// G=0x36836da9; S=0x36836df1; 
@property(retain) NSArray *exdate;	// G=0x36836e69; S=0x36836e49; 
@property(retain) NSArray *exrule;	// G=0x36836fd9; S=0x36836e89; 
@property(readonly, assign) BOOL isAllDay;	// G=0x36836ce9; 
@property(retain) ICSDate *last_modified;	// G=0x368370e9; S=0x36837121; 
@property(retain) NSString *location;	// G=0x36837141; S=0x36837189; 
@property(retain) ICSUserAddress *organizer;	// G=0x368371a9; S=0x368371e1; 
@property(assign) unsigned priority;	// G=0x36837865; S=0x368378d5; 
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x368369a5; converted property
@property(retain) NSArray *rdate;	// G=0x36837221; S=0x36837201; 
@property(retain) ICSDate *recurrence_id;	// G=0x36837241; S=0x36837279; 
@property(retain) NSArray *rrule;	// G=0x368373e9; S=0x36837299; 
@property(assign) unsigned sequence;	// G=0x36837549; S=0x368374f9; 
@property(assign) int status;	// G=0x368375b9; S=0x3683764d; 
@property(retain) NSString *summary;	// G=0x368376c5; S=0x3683770d; 
@property(retain) ICSTrigger *trigger;	// G=0x3683772d; S=0x36837765; 
@property(retain) NSString *uid;	// G=0x36837785; S=0x368377cd; 
@property(retain) NSURL *url;	// G=0x368377ed; S=0x36837835; 
@property(retain) NSString *x_apple_dropbox;	// G=0x36837a39; S=0x36837a81; 
@property(retain) NSString *x_apple_etag;	// G=0x36837dd5; S=0x36837db5; 
@property(retain) NSString *x_apple_ews_changekey;	// G=0x36837aa1; S=0x36837ae9; 
@property(retain) NSString *x_apple_ews_itemid;	// G=0x36837b09; S=0x36837b51; 
@property(assign) BOOL x_apple_ews_needsserverconfirmation;	// G=0x36837bd9; S=0x36837c2d; 
@property(retain) NSString *x_apple_ews_permission;	// G=0x36837b71; S=0x36837bb9; 
@property(assign) BOOL x_apple_ignore_on_restore;	// G=0x36837d09; S=0x36837c89; 
@property(retain) NSString *x_apple_scheduletag;	// G=0x36837e3d; S=0x36837e1d; 
@property(retain) NSString *x_apple_serverFilename;	// G=0x36837ea5; S=0x36837e85; 
@property(retain) ICSStructuredLocation *x_apple_structured_location;	// G=0x36837d7d; S=0x36837d5d; 
@property(assign) int x_calendarserver_access;	// G=0x3683792d; S=0x368379c1; 
+ (id)inheritanceKeywords;	// 0x3683c025
+ (id)makeUID;	// 0x36835d41
+ (id)name;	// 0x36835d8d
+ (int)statusFromString:(id)string;	// 0x36835c2d
+ (id)stringFromStatus:(int)status;	// 0x36835bb1
- (id)init;	// 0x36835e09
- (id)ICSStringWithOptions:(unsigned)options;	// 0x36836561
- (void)ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x368360ed
- (void)addComponent:(id)component;	// 0x368365c5
- (void)addProperty:(id)property withValue:(id)value;	// 0x368368a5
- (id)allProperties;	// 0x368369b5
// declared property getter: - (id)attach;	// 0x368369ed
// declared property getter: - (id)attendee;	// 0x36836a2d
// declared property getter: - (int)classification;	// 0x36836a6d
// declared property getter: - (id)components;	// 0x368365a1
// declared property getter: - (id)conferences;	// 0x36837f0d
// declared property getter: - (id)created;	// 0x36836b79
- (void)dealloc;	// 0x36836089
- (id)debugDescription;	// 0x36835e95
// declared property getter: - (id)description;	// 0x36836bd1
// declared property getter: - (id)dtend;	// 0x36836d1d
// declared property getter: - (id)dtstamp;	// 0x36836c39
// declared property getter: - (id)dtstart;	// 0x36836c91
// declared property getter: - (id)duration;	// 0x36836da9
// declared property getter: - (id)exdate;	// 0x36836e69
// declared property getter: - (id)exrule;	// 0x36836fd9
- (void)fixAlarms;	// 0x3683c2f1
- (void)fixAttachments;	// 0x3683c8b5
- (void)fixAttendees;	// 0x3683c615
- (void)fixComponent;	// 0x3683d0c9
- (void)fixExceptionDates;	// 0x3683cf35
- (void)fixExceptionRules;	// 0x3683cd85
- (void)fixPropertiesInheritance:(id)inheritance;	// 0x3683c18d
- (void)fixRecurrenceDates;	// 0x3683cbf1
- (void)fixRecurrenceRules;	// 0x3683ca41
// declared property getter: - (BOOL)isAllDay;	// 0x36836ce9
// declared property getter: - (id)last_modified;	// 0x368370e9
// declared property getter: - (id)location;	// 0x36837141
// declared property getter: - (id)organizer;	// 0x368371a9
// declared property getter: - (unsigned)priority;	// 0x36837865
// converted property getter: - (id)properties;	// 0x368369a5
- (id)propertiesForName:(id)name;	// 0x36835fb1
// declared property getter: - (id)rdate;	// 0x36837221
// declared property getter: - (id)recurrence_id;	// 0x36837241
- (void)removeComponent:(id)component;	// 0x368366a9
- (void)removePropertiesForName:(id)name;	// 0x36835f91
// declared property getter: - (id)rrule;	// 0x368373e9
// declared property getter: - (unsigned)sequence;	// 0x36837549
// declared property setter: - (void)setAttach:(id)attach;	// 0x36836a0d
// declared property setter: - (void)setAttendee:(id)attendee;	// 0x36836a4d
// declared property setter: - (void)setClassification:(int)classification;	// 0x36836b01
// declared property setter: - (void)setComponents:(id)components;	// 0x368365b5
// declared property setter: - (void)setConferences:(id)conferences;	// 0x36837eed
// declared property setter: - (void)setCreated:(id)created;	// 0x36836bb1
// declared property setter: - (void)setDescription:(id)description;	// 0x36836c19
// declared property setter: - (void)setDtend:(id)dtend;	// 0x36836d55
// declared property setter: - (void)setDtstamp:(id)dtstamp;	// 0x36836c71
// declared property setter: - (void)setDtstart:(id)dtstart;	// 0x36836cc9
// declared property setter: - (void)setDuration:(id)duration;	// 0x36836df1
// declared property setter: - (void)setExdate:(id)exdate;	// 0x36836e49
// declared property setter: - (void)setExrule:(id)exrule;	// 0x36836e89
// declared property setter: - (void)setLast_modified:(id)modified;	// 0x36837121
// declared property setter: - (void)setLocation:(id)location;	// 0x36837189
// declared property setter: - (void)setOrganizer:(id)organizer;	// 0x368371e1
// declared property setter: - (void)setPriority:(unsigned)priority;	// 0x368378d5
- (void)setProperties:(id)properties forName:(id)name;	// 0x36835fd1
- (void)setProperty:(id)property forName:(id)name;	// 0x36836005
- (void)setPropertyValue:(id)value forName:(id)name;	// 0x3683678d
- (void)setPropertyValue:(id)value type:(int)type forName:(id)name;	// 0x36836811
// declared property setter: - (void)setRdate:(id)rdate;	// 0x36837201
// declared property setter: - (void)setRecurrence_id:(id)anId;	// 0x36837279
// declared property setter: - (void)setRrule:(id)rrule;	// 0x36837299
// declared property setter: - (void)setSequence:(unsigned)sequence;	// 0x368374f9
// declared property setter: - (void)setStatus:(int)status;	// 0x3683764d
// declared property setter: - (void)setSummary:(id)summary;	// 0x3683770d
// declared property setter: - (void)setTrigger:(id)trigger;	// 0x36837765
// declared property setter: - (void)setUid:(id)uid;	// 0x368377cd
// declared property setter: - (void)setUrl:(id)url;	// 0x36837835
// declared property setter: - (void)setX_apple_dropbox:(id)dropbox;	// 0x36837a81
// declared property setter: - (void)setX_apple_etag:(id)etag;	// 0x36837db5
// declared property setter: - (void)setX_apple_ews_changekey:(id)changekey;	// 0x36837ae9
// declared property setter: - (void)setX_apple_ews_itemid:(id)itemid;	// 0x36837b51
// declared property setter: - (void)setX_apple_ews_needsserverconfirmation:(BOOL)needsserverconfirmation;	// 0x36837c2d
// declared property setter: - (void)setX_apple_ews_permission:(id)permission;	// 0x36837bb9
// declared property setter: - (void)setX_apple_ignore_on_restore:(BOOL)restore;	// 0x36837c89
// declared property setter: - (void)setX_apple_scheduletag:(id)scheduletag;	// 0x36837e1d
// declared property setter: - (void)setX_apple_serverFilename:(id)filename;	// 0x36837e85
// declared property setter: - (void)setX_apple_structured_location:(id)location;	// 0x36837d5d
// declared property setter: - (void)setX_calendarserver_access:(int)access;	// 0x368379c1
// declared property getter: - (int)status;	// 0x368375b9
// declared property getter: - (id)summary;	// 0x368376c5
// declared property getter: - (id)trigger;	// 0x3683772d
// declared property getter: - (id)uid;	// 0x36837785
// declared property getter: - (id)url;	// 0x368377ed
- (BOOL)validate:(id *)validate;	// 0x36835ec1
// declared property getter: - (id)x_apple_dropbox;	// 0x36837a39
// declared property getter: - (id)x_apple_etag;	// 0x36837dd5
// declared property getter: - (id)x_apple_ews_changekey;	// 0x36837aa1
// declared property getter: - (id)x_apple_ews_itemid;	// 0x36837b09
// declared property getter: - (BOOL)x_apple_ews_needsserverconfirmation;	// 0x36837bd9
// declared property getter: - (id)x_apple_ews_permission;	// 0x36837b71
// declared property getter: - (BOOL)x_apple_ignore_on_restore;	// 0x36837d09
// declared property getter: - (id)x_apple_scheduletag;	// 0x36837e3d
// declared property getter: - (id)x_apple_serverFilename;	// 0x36837ea5
// declared property getter: - (id)x_apple_structured_location;	// 0x36837d7d
// declared property getter: - (int)x_calendarserver_access;	// 0x3683792d
@end
