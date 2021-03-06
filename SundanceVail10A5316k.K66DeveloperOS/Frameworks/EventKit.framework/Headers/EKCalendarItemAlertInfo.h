/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "EventKit-Structs.h"

@class NSString, NSURL, NSDate, NSTimeZone;

@interface EKCalendarItemAlertInfo : NSObject <NSCopying> {
@private
	NSString *_title;	// 4 = 0x4
	NSString *_location;	// 8 = 0x8
	NSDate *_date;	// 12 = 0xc
	NSDate *_endDate;	// 16 = 0x10
	NSTimeZone *_timeZone;	// 20 = 0x14
	NSURL *_action;	// 24 = 0x18
	BOOL _allDay;	// 28 = 0x1c
	BOOL _tentative;	// 29 = 0x1d
	NSURL *_entityID;	// 32 = 0x20
	int _proximity;	// 36 = 0x24
	NSString *_externalID;	// 40 = 0x28
	BOOL _acknowledged;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) BOOL acknowledged;	// G=0x30e6c7a9; @synthesize=_acknowledged
@property(readonly, assign, nonatomic) NSURL *action;	// G=0x30e6c749; @synthesize=_action
@property(readonly, assign, nonatomic) BOOL allDay;	// G=0x30e6c759; @synthesize=_allDay
@property(readonly, assign, nonatomic) NSDate *endDate;	// G=0x30e6c729; @synthesize=_endDate
@property(readonly, assign, nonatomic) NSURL *entityID;	// G=0x30e6c779; @synthesize=_entityID
@property(readonly, assign, nonatomic) NSDate *eventDate;	// G=0x30e6c719; @synthesize=_date
@property(readonly, assign, nonatomic) NSTimeZone *eventTimeZone;	// G=0x30e6c739; @synthesize=_timeZone
@property(readonly, assign, nonatomic) NSString *externalID;	// G=0x30e6c799; @synthesize=_externalID
@property(readonly, assign, nonatomic) NSString *location;	// G=0x30e6c709; @synthesize=_location
@property(readonly, assign, nonatomic) int proximity;	// G=0x30e6c789; @synthesize=_proximity
@property(readonly, assign, nonatomic) BOOL tentative;	// G=0x30e6c769; @synthesize=_tentative
@property(readonly, assign, nonatomic) NSString *title;	// G=0x30e6c6f9; @synthesize=_title
+ (id)alertInfoWithTitle:(id)title location:(id)location date:(id)date endDate:(id)date4 timeZone:(id)zone allDay:(BOOL)day tentative:(BOOL)tentative entityID:(id)anId action:(id)action proximity:(int)proximity externalID:(id)anId11 acknowledged:(BOOL)acknowledged;	// 0x30e6c2b5
- (id)initWithTitle:(id)title location:(id)location date:(id)date endDate:(id)date4 timeZone:(id)zone allDay:(BOOL)day tentative:(BOOL)tentative entityID:(id)anId action:(id)action proximity:(int)proximity externalID:(id)anId11 acknowledged:(BOOL)acknowledged;	// 0x30e6c339
// declared property getter: - (BOOL)acknowledged;	// 0x30e6c7a9
// declared property getter: - (id)action;	// 0x30e6c749
// declared property getter: - (BOOL)allDay;	// 0x30e6c759
- (id)copyWithZone:(NSZone *)zone;	// 0x30e6c5f1
- (void)dealloc;	// 0x30e6c481
- (id)description;	// 0x30e6c55d
// declared property getter: - (id)endDate;	// 0x30e6c729
// declared property getter: - (id)entityID;	// 0x30e6c779
// declared property getter: - (id)eventDate;	// 0x30e6c719
// declared property getter: - (id)eventTimeZone;	// 0x30e6c739
// declared property getter: - (id)externalID;	// 0x30e6c799
- (unsigned)hash;	// 0x30e6c601
- (BOOL)isEqual:(id)equal;	// 0x30e6c641
// declared property getter: - (id)location;	// 0x30e6c709
// declared property getter: - (int)proximity;	// 0x30e6c789
// declared property getter: - (BOOL)tentative;	// 0x30e6c769
// declared property getter: - (id)title;	// 0x30e6c6f9
@end

