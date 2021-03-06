/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SAMPGeniusSummonFailed : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(assign, nonatomic) int errorCode;	// G=0x353c6865; S=0x353c68d5; 
@property(copy, nonatomic) NSString *reason;	// G=0x353c6919; S=0x353c6935; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)geniusSummonFailed;	// 0x353c66dd
+ (id)geniusSummonFailedWithDictionary:(id)dictionary context:(id)context;	// 0x353c6721
+ (id)geniusSummonFailedWithErrorCode:(int)errorCode;	// 0x353c676d
+ (id)geniusSummonFailedWithReason:(id)reason;	// 0x353c67b5
- (id)initWithErrorCode:(int)errorCode;	// 0x353c67fd
- (id)initWithReason:(id)reason;	// 0x353c6831
- (id)encodedClassName;	// 0x353c66d1
// declared property getter: - (int)errorCode;	// 0x353c6865
- (id)groupIdentifier;	// 0x353c66c1
// declared property getter: - (id)reason;	// 0x353c6919
// declared property setter: - (void)setErrorCode:(int)code;	// 0x353c68d5
// declared property setter: - (void)setReason:(id)reason;	// 0x353c6935
@end

