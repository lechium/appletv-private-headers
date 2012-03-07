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
@property(retain) NSArray *attach;	// G=0x317ae051; S=0x317ae071; 
@property(retain) NSArray *attendee;	// G=0x317ae091; S=0x317ae0b1; 
@property(assign) int classification;	// G=0x317ae0d1; S=0x317ae165; 
@property(retain) NSArray *components;	// G=0x317adc1d; S=0x317adc31; @synthesize=_components
@property(retain) NSArray *conferences;	// G=0x317af4c9; S=0x317af4a9; 
@property(retain) ICSDate *created;	// G=0x317ae1d9; S=0x317ae211; 
@property(retain) NSString *description;	// G=0x317ae231; S=0x317ae279; 
@property(retain) ICSDate *dtend;	// G=0x317ae37d; S=0x317ae3b5; 
@property(retain) ICSDate *dtstamp;	// G=0x317ae299; S=0x317ae2d1; 
@property(retain) ICSDate *dtstart;	// G=0x317ae2f1; S=0x317ae329; 
@property(retain) ICSDuration *duration;	// G=0x317ae409; S=0x317ae451; 
@property(retain) NSArray *exdate;	// G=0x317ae4c9; S=0x317ae4a9; 
@property(retain) NSArray *exrule;	// G=0x317ae60d; S=0x317ae4e9; 
@property(readonly, assign) BOOL isAllDay;	// G=0x317ae349; 
@property(retain) ICSDate *last_modified;	// G=0x317ae6fd; S=0x317ae735; 
@property(retain) NSString *location;	// G=0x317ae755; S=0x317ae79d; 
@property(retain) ICSUserAddress *organizer;	// G=0x317ae7bd; S=0x317ae7f5; 
@property(assign) unsigned priority;	// G=0x317aee29; S=0x317aee99; 
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x317ae009; converted property
@property(retain) NSArray *rdate;	// G=0x317ae835; S=0x317ae815; 
@property(retain) ICSDate *recurrence_id;	// G=0x317ae855; S=0x317ae88d; 
@property(retain) NSArray *rrule;	// G=0x317ae9d1; S=0x317ae8ad; 
@property(assign) unsigned sequence;	// G=0x317aeb11; S=0x317aeac1; 
@property(assign) int status;	// G=0x317aeb81; S=0x317aec15; 
@property(retain) NSString *summary;	// G=0x317aec89; S=0x317aecd1; 
@property(retain) ICSTrigger *trigger;	// G=0x317aecf1; S=0x317aed29; 
@property(retain) NSString *uid;	// G=0x317aed49; S=0x317aed91; 
@property(retain) NSURL *url;	// G=0x317aedb1; S=0x317aedf9; 
@property(retain) NSString *x_apple_dropbox;	// G=0x317aeff9; S=0x317af041; 
@property(retain) NSString *x_apple_etag;	// G=0x317af391; S=0x317af371; 
@property(retain) NSString *x_apple_ews_changekey;	// G=0x317af061; S=0x317af0a9; 
@property(retain) NSString *x_apple_ews_itemid;	// G=0x317af0c9; S=0x317af111; 
@property(assign) BOOL x_apple_ews_needsserverconfirmation;	// G=0x317af199; S=0x317af1ed; 
@property(retain) NSString *x_apple_ews_permission;	// G=0x317af131; S=0x317af179; 
@property(assign) BOOL x_apple_ignore_on_restore;	// G=0x317af2c5; S=0x317af249; 
@property(retain) NSString *x_apple_scheduletag;	// G=0x317af3f9; S=0x317af3d9; 
@property(retain) NSString *x_apple_serverFilename;	// G=0x317af461; S=0x317af441; 
@property(retain) ICSStructuredLocation *x_apple_structured_location;	// G=0x317af339; S=0x317af319; 
@property(assign) int x_calendarserver_access;	// G=0x317aeef1; S=0x317aef85; 
+ (id)inheritanceKeywords;	// 0x317b3761
+ (id)makeUID;	// 0x317ad3d9
+ (id)name;	// 0x317ad435
+ (id)newUID;	// 0x317ad425
+ (int)statusFromString:(id)string;	// 0x317ad2c1
+ (id)stringFromStatus:(int)status;	// 0x317ad249
- (id)init;	// 0x317ad4b1
- (id)ICSStringWithOptions:(unsigned)options;	// 0x317adbdd
- (void)ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x317ad779
- (void)addComponent:(id)component;	// 0x317adc55
- (void)addProperty:(id)property withValue:(id)value;	// 0x317adf19
- (id)allProperties;	// 0x317ae019
// declared property getter: - (id)attach;	// 0x317ae051
// declared property getter: - (id)attendee;	// 0x317ae091
// declared property getter: - (int)classification;	// 0x317ae0d1
// declared property getter: - (id)components;	// 0x317adc1d
// declared property getter: - (id)conferences;	// 0x317af4c9
// declared property getter: - (id)created;	// 0x317ae1d9
- (void)dealloc;	// 0x317ad719
- (id)debugDescription;	// 0x317ad539
// declared property getter: - (id)description;	// 0x317ae231
// declared property getter: - (id)dtend;	// 0x317ae37d
// declared property getter: - (id)dtstamp;	// 0x317ae299
// declared property getter: - (id)dtstart;	// 0x317ae2f1
// declared property getter: - (id)duration;	// 0x317ae409
// declared property getter: - (id)exdate;	// 0x317ae4c9
// declared property getter: - (id)exrule;	// 0x317ae60d
- (void)fixAlarms;	// 0x317b3a09
- (void)fixAttachments;	// 0x317b3f4d
- (void)fixAttendees;	// 0x317b3cdd
- (void)fixComponent;	// 0x317b4689
- (void)fixExceptionDates;	// 0x317b4521
- (void)fixExceptionRules;	// 0x317b439d
- (void)fixPropertiesInheritance:(id)inheritance;	// 0x317b38c5
- (void)fixRecurrenceDates;	// 0x317b4235
- (void)fixRecurrenceRules;	// 0x317b40b1
// declared property getter: - (BOOL)isAllDay;	// 0x317ae349
// declared property getter: - (id)last_modified;	// 0x317ae6fd
// declared property getter: - (id)location;	// 0x317ae755
// declared property getter: - (id)organizer;	// 0x317ae7bd
// declared property getter: - (unsigned)priority;	// 0x317aee29
// converted property getter: - (id)properties;	// 0x317ae009
- (id)propertiesForName:(id)name;	// 0x317ad63d
// declared property getter: - (id)rdate;	// 0x317ae835
// declared property getter: - (id)recurrence_id;	// 0x317ae855
- (void)removeComponent:(id)component;	// 0x317add31
- (void)removePropertiesForName:(id)name;	// 0x317ad61d
// declared property getter: - (id)rrule;	// 0x317ae9d1
// declared property getter: - (unsigned)sequence;	// 0x317aeb11
// declared property setter: - (void)setAttach:(id)attach;	// 0x317ae071
// declared property setter: - (void)setAttendee:(id)attendee;	// 0x317ae0b1
// declared property setter: - (void)setClassification:(int)classification;	// 0x317ae165
// declared property setter: - (void)setComponents:(id)components;	// 0x317adc31
// declared property setter: - (void)setConferences:(id)conferences;	// 0x317af4a9
// declared property setter: - (void)setCreated:(id)created;	// 0x317ae211
// declared property setter: - (void)setDescription:(id)description;	// 0x317ae279
// declared property setter: - (void)setDtend:(id)dtend;	// 0x317ae3b5
// declared property setter: - (void)setDtstamp:(id)dtstamp;	// 0x317ae2d1
// declared property setter: - (void)setDtstart:(id)dtstart;	// 0x317ae329
// declared property setter: - (void)setDuration:(id)duration;	// 0x317ae451
// declared property setter: - (void)setExdate:(id)exdate;	// 0x317ae4a9
// declared property setter: - (void)setExrule:(id)exrule;	// 0x317ae4e9
// declared property setter: - (void)setLast_modified:(id)modified;	// 0x317ae735
// declared property setter: - (void)setLocation:(id)location;	// 0x317ae79d
// declared property setter: - (void)setOrganizer:(id)organizer;	// 0x317ae7f5
// declared property setter: - (void)setPriority:(unsigned)priority;	// 0x317aee99
- (void)setProperties:(id)properties forName:(id)name;	// 0x317ad65d
- (void)setProperty:(id)property forName:(id)name;	// 0x317ad699
- (void)setPropertyValue:(id)value forName:(id)name;	// 0x317ade0d
- (void)setPropertyValue:(id)value type:(int)type forName:(id)name;	// 0x317ade8d
// declared property setter: - (void)setRdate:(id)rdate;	// 0x317ae815
// declared property setter: - (void)setRecurrence_id:(id)anId;	// 0x317ae88d
// declared property setter: - (void)setRrule:(id)rrule;	// 0x317ae8ad
// declared property setter: - (void)setSequence:(unsigned)sequence;	// 0x317aeac1
// declared property setter: - (void)setStatus:(int)status;	// 0x317aec15
// declared property setter: - (void)setSummary:(id)summary;	// 0x317aecd1
// declared property setter: - (void)setTrigger:(id)trigger;	// 0x317aed29
// declared property setter: - (void)setUid:(id)uid;	// 0x317aed91
// declared property setter: - (void)setUrl:(id)url;	// 0x317aedf9
// declared property setter: - (void)setX_apple_dropbox:(id)dropbox;	// 0x317af041
// declared property setter: - (void)setX_apple_etag:(id)etag;	// 0x317af371
// declared property setter: - (void)setX_apple_ews_changekey:(id)changekey;	// 0x317af0a9
// declared property setter: - (void)setX_apple_ews_itemid:(id)itemid;	// 0x317af111
// declared property setter: - (void)setX_apple_ews_needsserverconfirmation:(BOOL)needsserverconfirmation;	// 0x317af1ed
// declared property setter: - (void)setX_apple_ews_permission:(id)permission;	// 0x317af179
// declared property setter: - (void)setX_apple_ignore_on_restore:(BOOL)restore;	// 0x317af249
// declared property setter: - (void)setX_apple_scheduletag:(id)scheduletag;	// 0x317af3d9
// declared property setter: - (void)setX_apple_serverFilename:(id)filename;	// 0x317af441
// declared property setter: - (void)setX_apple_structured_location:(id)location;	// 0x317af319
// declared property setter: - (void)setX_calendarserver_access:(int)access;	// 0x317aef85
// declared property getter: - (int)status;	// 0x317aeb81
// declared property getter: - (id)summary;	// 0x317aec89
// declared property getter: - (id)trigger;	// 0x317aecf1
// declared property getter: - (id)uid;	// 0x317aed49
// declared property getter: - (id)url;	// 0x317aedb1
- (BOOL)validate:(id *)validate;	// 0x317ad565
// declared property getter: - (id)x_apple_dropbox;	// 0x317aeff9
// declared property getter: - (id)x_apple_etag;	// 0x317af391
// declared property getter: - (id)x_apple_ews_changekey;	// 0x317af061
// declared property getter: - (id)x_apple_ews_itemid;	// 0x317af0c9
// declared property getter: - (BOOL)x_apple_ews_needsserverconfirmation;	// 0x317af199
// declared property getter: - (id)x_apple_ews_permission;	// 0x317af131
// declared property getter: - (BOOL)x_apple_ignore_on_restore;	// 0x317af2c5
// declared property getter: - (id)x_apple_scheduletag;	// 0x317af3f9
// declared property getter: - (id)x_apple_serverFilename;	// 0x317af461
// declared property getter: - (id)x_apple_structured_location;	// 0x317af339
// declared property getter: - (int)x_calendarserver_access;	// 0x317aeef1
@end
