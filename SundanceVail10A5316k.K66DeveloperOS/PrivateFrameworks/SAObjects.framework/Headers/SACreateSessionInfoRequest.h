/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSData, NSString;

@interface SACreateSessionInfoRequest : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSData *sessionInfoRequest;	// G=0x32f50499; S=0x32f504b5; 
+ (id)createSessionInfoRequest;	// 0x32f50409
+ (id)createSessionInfoRequestWithDictionary:(id)dictionary context:(id)context;	// 0x32f5044d
- (id)encodedClassName;	// 0x32f503fd
- (id)groupIdentifier;	// 0x32f503ed
// declared property getter: - (id)sessionInfoRequest;	// 0x32f50499
// declared property setter: - (void)setSessionInfoRequest:(id)request;	// 0x32f504b5
@end

