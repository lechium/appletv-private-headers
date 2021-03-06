/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class SACalendar, NSNumber, SAUIAppPunchOut;

@interface SAMovieShowtime : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) SAUIAppPunchOut *buyTicketsPunchout;	// G=0x3254c215; S=0x3254c269; 
@property(copy, nonatomic) NSNumber *childTicketQuantity;	// G=0x3254c2a5; S=0x3254c2c1; 
@property(assign, nonatomic) BOOL is3d;	// G=0x3254c311; S=0x3254c389; 
@property(assign, nonatomic) BOOL isImax;	// G=0x3254c3cd; S=0x3254c445; 
@property(copy, nonatomic) NSNumber *regularTicketQuantity;	// G=0x3254c489; S=0x3254c4a5; 
@property(copy, nonatomic) NSNumber *seniorTicketQuantity;	// G=0x3254c4f5; S=0x3254c511; 
@property(retain, nonatomic) SACalendar *showtime;	// G=0x3254c561; S=0x3254c5b5; 
+ (id)showtime;	// 0x3254c185
+ (id)showtimeWithDictionary:(id)dictionary context:(id)context;	// 0x3254c1c9
// declared property getter: - (id)buyTicketsPunchout;	// 0x3254c215
// declared property getter: - (id)childTicketQuantity;	// 0x3254c2a5
- (id)encodedClassName;	// 0x3254c179
- (id)groupIdentifier;	// 0x3254c169
// declared property getter: - (BOOL)is3d;	// 0x3254c311
// declared property getter: - (BOOL)isImax;	// 0x3254c3cd
// declared property getter: - (id)regularTicketQuantity;	// 0x3254c489
// declared property getter: - (id)seniorTicketQuantity;	// 0x3254c4f5
// declared property setter: - (void)setBuyTicketsPunchout:(id)punchout;	// 0x3254c269
// declared property setter: - (void)setChildTicketQuantity:(id)quantity;	// 0x3254c2c1
// declared property setter: - (void)setIs3d:(BOOL)d;	// 0x3254c389
// declared property setter: - (void)setIsImax:(BOOL)imax;	// 0x3254c445
// declared property setter: - (void)setRegularTicketQuantity:(id)quantity;	// 0x3254c4a5
// declared property setter: - (void)setSeniorTicketQuantity:(id)quantity;	// 0x3254c511
// declared property setter: - (void)setShowtime:(id)showtime;	// 0x3254c5b5
// declared property getter: - (id)showtime;	// 0x3254c561
@end

