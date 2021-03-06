/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString;

@interface SARestartRequest : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *lastResponseId;	// G=0x3424fd69; S=0x3424fd85; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSString *requestId;	// G=0x3424fdd5; S=0x3424fdf1; 
+ (id)restartRequest;	// 0x3424fcd9
+ (id)restartRequestWithDictionary:(id)dictionary context:(id)context;	// 0x3424fd1d
- (id)encodedClassName;	// 0x3424fccd
- (id)groupIdentifier;	// 0x3424fcbd
// declared property getter: - (id)lastResponseId;	// 0x3424fd69
// declared property getter: - (id)requestId;	// 0x3424fdd5
// declared property setter: - (void)setLastResponseId:(id)anId;	// 0x3424fd85
// declared property setter: - (void)setRequestId:(id)anId;	// 0x3424fdf1
@end

