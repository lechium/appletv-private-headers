/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString;

@interface SASetConnectionHeader : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *aceHostHeader;	// G=0x32534a8d; S=0x32534aa9; 
@property(assign, nonatomic) BOOL reconnectNow;	// G=0x32534af9; S=0x32534b71; 
+ (id)setConnectionHeader;	// 0x325349fd
+ (id)setConnectionHeaderWithDictionary:(id)dictionary context:(id)context;	// 0x32534a41
// declared property getter: - (id)aceHostHeader;	// 0x32534a8d
- (id)encodedClassName;	// 0x325349f1
- (id)groupIdentifier;	// 0x325349e1
// declared property getter: - (BOOL)reconnectNow;	// 0x32534af9
- (BOOL)requiresResponse;	// 0x32534bb5
// declared property setter: - (void)setAceHostHeader:(id)header;	// 0x32534aa9
// declared property setter: - (void)setReconnectNow:(BOOL)now;	// 0x32534b71
@end
