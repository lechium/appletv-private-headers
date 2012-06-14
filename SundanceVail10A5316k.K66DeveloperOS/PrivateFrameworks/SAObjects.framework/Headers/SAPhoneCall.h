/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, SAPersonAttribute, NSURL;

@interface SAPhoneCall : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SAPersonAttribute *callRecipient;	// G=0x32f30f7d; S=0x32f30fd1; 
@property(assign, nonatomic) BOOL faceTime;	// G=0x32f3100d; S=0x32f31085; 
@property(copy, nonatomic) NSString *recipient;	// G=0x32f310c9; S=0x32f310e5; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32f30ea1; S=0x32f30f1d; 
+ (id)call;	// 0x32f30e11
+ (id)callWithDictionary:(id)dictionary context:(id)context;	// 0x32f30e55
// declared property getter: - (id)callRecipient;	// 0x32f30f7d
- (id)encodedClassName;	// 0x32f30e05
// declared property getter: - (BOOL)faceTime;	// 0x32f3100d
- (id)groupIdentifier;	// 0x32f30df5
// declared property getter: - (id)recipient;	// 0x32f310c9
- (BOOL)requiresResponse;	// 0x32f31135
// declared property setter: - (void)setCallRecipient:(id)recipient;	// 0x32f30fd1
// declared property setter: - (void)setFaceTime:(BOOL)time;	// 0x32f31085
// declared property setter: - (void)setRecipient:(id)recipient;	// 0x32f310e5
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32f30f1d
// declared property getter: - (id)targetAppId;	// 0x32f30ea1
@end

