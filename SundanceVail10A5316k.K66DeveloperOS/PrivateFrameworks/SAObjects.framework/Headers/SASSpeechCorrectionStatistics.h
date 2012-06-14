/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SASSpeechCorrectionStatistics : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(assign, nonatomic) int alternativeSelectCount;	// G=0x32f4f06d; S=0x32f4f0dd; 
@property(assign, nonatomic) int characterChangeCount;	// G=0x32f4f121; S=0x32f4f191; 
@property(copy, nonatomic) NSString *interactionId;	// G=0x32f4f1d5; S=0x32f4f1f1; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSString *sessionId;	// G=0x32f4f241; S=0x32f4f25d; 
+ (id)speechCorrectionStatistics;	// 0x32f4efdd
+ (id)speechCorrectionStatisticsWithDictionary:(id)dictionary context:(id)context;	// 0x32f4f021
// declared property getter: - (int)alternativeSelectCount;	// 0x32f4f06d
// declared property getter: - (int)characterChangeCount;	// 0x32f4f121
- (id)encodedClassName;	// 0x32f4efd1
- (id)groupIdentifier;	// 0x32f4efc1
// declared property getter: - (id)interactionId;	// 0x32f4f1d5
// declared property getter: - (id)sessionId;	// 0x32f4f241
// declared property setter: - (void)setAlternativeSelectCount:(int)count;	// 0x32f4f0dd
// declared property setter: - (void)setCharacterChangeCount:(int)count;	// 0x32f4f191
// declared property setter: - (void)setInteractionId:(id)anId;	// 0x32f4f1f1
// declared property setter: - (void)setSessionId:(id)anId;	// 0x32f4f25d
@end

