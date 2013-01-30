/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSURL, NSDate;

@interface SAEmailSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSDate *endDate;	// G=0x303b5771; S=0x303b578d; 
@property(copy, nonatomic) NSString *fromEmail;	// G=0x303b57dd; S=0x303b57f9; 
@property(copy, nonatomic) NSDate *startDate;	// G=0x303b5849; S=0x303b5865; 
@property(assign, nonatomic) int status;	// G=0x303b58b5; S=0x303b58dd; 
@property(copy, nonatomic) NSString *subject;	// G=0x303b590d; S=0x303b5929; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x303b5695; S=0x303b5711; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x303b5979; S=0x303b5995; 
@property(copy, nonatomic) NSString *toEmail;	// G=0x303b59e5; S=0x303b5a01; 
+ (id)search;	// 0x303b5605
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x303b5649
- (id)encodedClassName;	// 0x303b55f9
// declared property getter: - (id)endDate;	// 0x303b5771
// declared property getter: - (id)fromEmail;	// 0x303b57dd
- (id)groupIdentifier;	// 0x303b55e9
- (BOOL)requiresResponse;	// 0x303b5a51
// declared property setter: - (void)setEndDate:(id)date;	// 0x303b578d
// declared property setter: - (void)setFromEmail:(id)email;	// 0x303b57f9
// declared property setter: - (void)setStartDate:(id)date;	// 0x303b5865
// declared property setter: - (void)setStatus:(int)status;	// 0x303b58dd
// declared property setter: - (void)setSubject:(id)subject;	// 0x303b5929
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x303b5711
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x303b5995
// declared property setter: - (void)setToEmail:(id)email;	// 0x303b5a01
// declared property getter: - (id)startDate;	// 0x303b5849
// declared property getter: - (int)status;	// 0x303b58b5
// declared property getter: - (id)subject;	// 0x303b590d
// declared property getter: - (id)targetAppId;	// 0x303b5695
// declared property getter: - (id)timeZoneId;	// 0x303b5979
// declared property getter: - (id)toEmail;	// 0x303b59e5
@end
