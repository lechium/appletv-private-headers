/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SAClientBoundCommand.h"
#import "SABaseClientBoundCommand.h"

@class NSString, NSArray;

@interface SACommandFailed : SABaseClientBoundCommand <SAServerBoundCommand, SAClientBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *appId;	// @dynamic
@property(copy, nonatomic) NSArray *callbacks;	// @dynamic
@property(assign, nonatomic) int errorCode;	// G=0x355b9361; S=0x355b93d1; 
@property(copy, nonatomic) NSString *reason;	// G=0x355b9415; S=0x355b9431; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)commandFailed;	// 0x355b91d9
+ (id)commandFailedWithDictionary:(id)dictionary context:(id)context;	// 0x355b921d
+ (id)commandFailedWithErrorCode:(int)errorCode;	// 0x355b9269
+ (id)commandFailedWithReason:(id)reason;	// 0x355b92b1
- (id)initWithErrorCode:(int)errorCode;	// 0x355b92f9
- (id)initWithReason:(id)reason;	// 0x355b932d
- (id)encodedClassName;	// 0x355b91cd
// declared property getter: - (int)errorCode;	// 0x355b9361
- (id)groupIdentifier;	// 0x355b91bd
// declared property getter: - (id)reason;	// 0x355b9415
- (BOOL)requiresResponse;	// 0x355b9481
// declared property setter: - (void)setErrorCode:(int)code;	// 0x355b93d1
// declared property setter: - (void)setReason:(id)reason;	// 0x355b9431
@end

