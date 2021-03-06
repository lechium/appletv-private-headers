/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSArray, NSDate, NSURL, NSNumber;

@interface SACalendarEventSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSDate *endDate;	// G=0x3039a42d; S=0x3039a449; 
@property(copy, nonatomic) NSURL *eventId;	// G=0x3039a499; S=0x3039a515; 
@property(retain, nonatomic) NSNumber *limit;	// G=0x3039a575; S=0x3039a591; 
@property(copy, nonatomic) NSString *location;	// G=0x3039a5ad; S=0x3039a5c9; 
@property(copy, nonatomic) NSString *notes;	// G=0x3039a619; S=0x3039a635; 
@property(copy, nonatomic) NSArray *participants;	// G=0x3039a685; S=0x3039a6a1; 
@property(copy, nonatomic) NSDate *startDate;	// G=0x3039a6f1; S=0x3039a70d; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x3039a351; S=0x3039a3cd; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x3039a75d; S=0x3039a779; 
@property(copy, nonatomic) NSString *title;	// G=0x3039a7c9; S=0x3039a7e5; 
+ (id)eventSearch;	// 0x3039a2c1
+ (id)eventSearchWithDictionary:(id)dictionary context:(id)context;	// 0x3039a305
- (id)encodedClassName;	// 0x3039a2b5
// declared property getter: - (id)endDate;	// 0x3039a42d
// declared property getter: - (id)eventId;	// 0x3039a499
- (id)groupIdentifier;	// 0x3039a2a5
// declared property getter: - (id)limit;	// 0x3039a575
// declared property getter: - (id)location;	// 0x3039a5ad
// declared property getter: - (id)notes;	// 0x3039a619
// declared property getter: - (id)participants;	// 0x3039a685
- (BOOL)requiresResponse;	// 0x3039a835
// declared property setter: - (void)setEndDate:(id)date;	// 0x3039a449
// declared property setter: - (void)setEventId:(id)anId;	// 0x3039a515
// declared property setter: - (void)setLimit:(id)limit;	// 0x3039a591
// declared property setter: - (void)setLocation:(id)location;	// 0x3039a5c9
// declared property setter: - (void)setNotes:(id)notes;	// 0x3039a635
// declared property setter: - (void)setParticipants:(id)participants;	// 0x3039a6a1
// declared property setter: - (void)setStartDate:(id)date;	// 0x3039a70d
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x3039a3cd
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x3039a779
// declared property setter: - (void)setTitle:(id)title;	// 0x3039a7e5
// declared property getter: - (id)startDate;	// 0x3039a6f1
// declared property getter: - (id)targetAppId;	// 0x3039a351
// declared property getter: - (id)timeZoneId;	// 0x3039a75d
// declared property getter: - (id)title;	// 0x3039a7c9
@end

