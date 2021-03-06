/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSURL;

@interface SAPhoneCallStarted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSURL *phoneLogId;	// G=0x366023c1; S=0x3660243d; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)callStarted;	// 0x36602331
+ (id)callStartedWithDictionary:(id)dictionary context:(id)context;	// 0x36602375
- (id)encodedClassName;	// 0x36602325
- (id)groupIdentifier;	// 0x36602315
// declared property getter: - (id)phoneLogId;	// 0x366023c1
// declared property setter: - (void)setPhoneLogId:(id)anId;	// 0x3660243d
@end

