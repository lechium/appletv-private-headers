/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSNumber;

@interface SAStartRequest : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(assign, nonatomic) BOOL eyesFree;	// G=0x32f55929; S=0x32f559a1; 
@property(assign, nonatomic) BOOL handsFree;	// G=0x32f559e5; S=0x32f55a5d; 
@property(copy, nonatomic) NSString *motionActivity;	// G=0x32f55aa1; S=0x32f55abd; 
@property(retain, nonatomic) NSNumber *motionConfidence;	// G=0x32f55b0d; S=0x32f55b29; 
@property(copy, nonatomic) NSString *origin;	// G=0x32f55b45; S=0x32f55b61; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSString *utterance;	// G=0x32f55bb1; S=0x32f55bcd; 
+ (id)startRequest;	// 0x32f55899
+ (id)startRequestWithDictionary:(id)dictionary context:(id)context;	// 0x32f558dd
- (id)encodedClassName;	// 0x32f5588d
// declared property getter: - (BOOL)eyesFree;	// 0x32f55929
- (id)groupIdentifier;	// 0x32f5587d
// declared property getter: - (BOOL)handsFree;	// 0x32f559e5
// declared property getter: - (id)motionActivity;	// 0x32f55aa1
// declared property getter: - (id)motionConfidence;	// 0x32f55b0d
// declared property getter: - (id)origin;	// 0x32f55b45
// declared property setter: - (void)setEyesFree:(BOOL)free;	// 0x32f559a1
// declared property setter: - (void)setHandsFree:(BOOL)free;	// 0x32f55a5d
// declared property setter: - (void)setMotionActivity:(id)activity;	// 0x32f55abd
// declared property setter: - (void)setMotionConfidence:(id)confidence;	// 0x32f55b29
// declared property setter: - (void)setOrigin:(id)origin;	// 0x32f55b61
// declared property setter: - (void)setUtterance:(id)utterance;	// 0x32f55bcd
// declared property getter: - (id)utterance;	// 0x32f55bb1
@end

