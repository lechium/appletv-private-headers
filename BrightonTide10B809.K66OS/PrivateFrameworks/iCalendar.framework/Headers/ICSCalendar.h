/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class NSMutableSet, ICSColor, NSMutableDictionary, NSMutableArray, NSString, ICSDuration;

@interface ICSCalendar : ICSComponent {
	NSMutableSet *_keys;	// 12 = 0xc
	NSMutableDictionary *_masters;	// 16 = 0x10
	NSMutableDictionary *_occurrences;	// 20 = 0x14
	NSMutableDictionary *_timezones;	// 24 = 0x18
	NSMutableArray *_parsingErrors;	// 28 = 0x1c
}
@property(retain) NSString *calscale;	// G=0x3683d2b5; S=0x3683d2fd; 
@property(assign) int method;	// G=0x3683d31d; S=0x3683d375; 
@property(readonly, retain) NSMutableArray *parsingErrors;	// G=0x3683eba1; converted property
@property(retain) NSString *prodid;	// G=0x3683d3c5; S=0x3683d40d; 
@property(retain) NSString *version;	// G=0x3683d42d; S=0x3683d475; 
@property(retain) ICSDuration *x_apple_auto_refresh;	// G=0x3683d495; S=0x3683d4f9; 
@property(retain) ICSColor *x_apple_calendar_color;	// G=0x3683d529; S=0x3683d6a5; 
@property(assign) BOOL x_apple_ignore_on_restore;	// @dynamic
@property(assign) int x_calendarserver_access;	// @dynamic
@property(retain) NSString *x_wr_caldesc;	// G=0x3683d771; S=0x3683d751; 
@property(retain) NSString *x_wr_calname;	// G=0x3683d7b9; S=0x3683d801; 
@property(retain) NSString *x_wr_relcalid;	// G=0x3683d821; S=0x3683d869; 
@property(retain) NSString *x_wr_timezone;	// G=0x3683d889; S=0x3683d8d1; 
+ (id)ICSStringFromCalendarServerAccess:(int)calendarServerAccess;	// 0x3683d149
+ (id)ICSStringFromMethod:(int)method;	// 0x3683d051
+ (int)calendarServerAccessFromICSString:(id)icsstring;	// 0x3683d0c5
+ (id)calendarWithKnownTimeZones;	// 0x3683cb25
+ (id)defaultProdid;	// 0x3683ce85
+ (int)methodFromICSString:(id)icsstring;	// 0x3683cf5d
+ (id)name;	// 0x3683cd91
+ (void)setDefaultProdid:(id)prodid;	// 0x3683cd9d
- (id)init;	// 0x3683d189
- (void)_addComponent:(id)component;	// 0x3683e5e1
- (void)_addTimeZonesInComponent:(id)component toDictionary:(id)dictionary;	// 0x3683dea1
- (void)_addTimeZonesInComponent:(id)component toSet:(id)set;	// 0x3683dc25
- (id)_init;	// 0x3683cc95
- (id)_timeZonesForComponents:(id)components options:(int)options;	// 0x3683e171
- (void)addComponent:(id)component;	// 0x3683eb1d
- (void)addParsingError:(id)error;	// 0x3683eb81
// declared property getter: - (id)calscale;	// 0x3683d2b5
- (id)componentForKey:(id)key;	// 0x3683e8f9
- (id)componentKeys;	// 0x3683e8d9
- (id)componentOccurrencesForKey:(id)key;	// 0x3683e919
- (void)dealloc;	// 0x3683d215
- (void)fixComponent;	// 0x3683ed59
- (void)fixEntities;	// 0x3683ee05
- (void)fixPropertiesInheritance;	// 0x3683ebd9
// declared property getter: - (int)method;	// 0x3683d31d
// converted property getter: - (id)parsingErrors;	// 0x3683eba1
// declared property getter: - (id)prodid;	// 0x3683d3c5
// declared property setter: - (void)setCalscale:(id)calscale;	// 0x3683d2fd
- (void)setComponents:(id)components;	// 0x3683eb09
- (void)setComponents:(id)components options:(int)options;	// 0x3683e951
- (void)setComponents:(id)components timeZones:(BOOL)zones;	// 0x3683e939
// declared property setter: - (void)setMethod:(int)method;	// 0x3683d375
// declared property setter: - (void)setProdid:(id)prodid;	// 0x3683d40d
// declared property setter: - (void)setVersion:(id)version;	// 0x3683d475
// declared property setter: - (void)setX_apple_auto_refresh:(id)refresh;	// 0x3683d4f9
// declared property setter: - (void)setX_apple_calendar_color:(id)color;	// 0x3683d6a5
// declared property setter: - (void)setX_wr_caldesc:(id)caldesc;	// 0x3683d751
// declared property setter: - (void)setX_wr_calname:(id)calname;	// 0x3683d801
// declared property setter: - (void)setX_wr_relcalid:(id)relcalid;	// 0x3683d869
// declared property setter: - (void)setX_wr_timezone:(id)timezone;	// 0x3683d8d1
- (id)systemCalendarForDate:(id)date options:(int)options;	// 0x3683d9f5
- (id)systemDateForDate:(id)date options:(int)options;	// 0x3683dab1
- (id)systemTimeZoneForDate:(id)date;	// 0x3683d8f1
- (id)timeZoneForKey:(id)key;	// 0x3683eb61
// declared property getter: - (id)version;	// 0x3683d42d
// declared property getter: - (id)x_apple_auto_refresh;	// 0x3683d495
// declared property getter: - (id)x_apple_calendar_color;	// 0x3683d529
// declared property getter: - (id)x_wr_caldesc;	// 0x3683d771
// declared property getter: - (id)x_wr_calname;	// 0x3683d7b9
// declared property getter: - (id)x_wr_relcalid;	// 0x3683d821
// declared property getter: - (id)x_wr_timezone;	// 0x3683d889
@end
