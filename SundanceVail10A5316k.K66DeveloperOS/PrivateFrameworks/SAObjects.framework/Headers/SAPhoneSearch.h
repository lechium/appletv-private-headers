/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSNumber, NSString, NSURL, NSDate;

@interface SAPhoneSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSDate *end;	// G=0x32f31449; S=0x32f31465; 
@property(copy, nonatomic) NSString *incomingPhoneNumber;	// G=0x32f314b5; S=0x32f314d1; 
@property(retain, nonatomic) NSNumber *limit;	// G=0x32f31521; S=0x32f3153d; 
@property(assign, nonatomic) BOOL missed;	// G=0x32f31559; S=0x32f315d1; 
@property(copy, nonatomic) NSString *outgoingPhoneNumber;	// G=0x32f31615; S=0x32f31631; 
@property(copy, nonatomic) NSDate *start;	// G=0x32f31681; S=0x32f3169d; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32f3136d; S=0x32f313e9; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x32f316ed; S=0x32f31709; 
+ (id)search;	// 0x32f312dd
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x32f31321
- (id)encodedClassName;	// 0x32f312d1
// declared property getter: - (id)end;	// 0x32f31449
- (id)groupIdentifier;	// 0x32f312c1
// declared property getter: - (id)incomingPhoneNumber;	// 0x32f314b5
// declared property getter: - (id)limit;	// 0x32f31521
// declared property getter: - (BOOL)missed;	// 0x32f31559
// declared property getter: - (id)outgoingPhoneNumber;	// 0x32f31615
- (BOOL)requiresResponse;	// 0x32f31759
// declared property setter: - (void)setEnd:(id)end;	// 0x32f31465
// declared property setter: - (void)setIncomingPhoneNumber:(id)number;	// 0x32f314d1
// declared property setter: - (void)setLimit:(id)limit;	// 0x32f3153d
// declared property setter: - (void)setMissed:(BOOL)missed;	// 0x32f315d1
// declared property setter: - (void)setOutgoingPhoneNumber:(id)number;	// 0x32f31631
// declared property setter: - (void)setStart:(id)start;	// 0x32f3169d
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32f313e9
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x32f31709
// declared property getter: - (id)start;	// 0x32f31681
// declared property getter: - (id)targetAppId;	// 0x32f3136d
// declared property getter: - (id)timeZoneId;	// 0x32f316ed
@end

