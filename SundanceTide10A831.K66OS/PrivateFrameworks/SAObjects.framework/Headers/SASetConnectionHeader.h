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
@property(copy, nonatomic) NSString *aceHostHeader;	// G=0x304f7a8d; S=0x304f7aa9; 
@property(assign, nonatomic) BOOL reconnectNow;	// G=0x304f7af9; S=0x304f7b71; 
+ (id)setConnectionHeader;	// 0x304f79fd
+ (id)setConnectionHeaderWithDictionary:(id)dictionary context:(id)context;	// 0x304f7a41
// declared property getter: - (id)aceHostHeader;	// 0x304f7a8d
- (id)encodedClassName;	// 0x304f79f1
- (id)groupIdentifier;	// 0x304f79e1
// declared property getter: - (BOOL)reconnectNow;	// 0x304f7af9
- (BOOL)requiresResponse;	// 0x304f7bb5
// declared property setter: - (void)setAceHostHeader:(id)header;	// 0x304f7aa9
// declared property setter: - (void)setReconnectNow:(BOOL)now;	// 0x304f7b71
@end
