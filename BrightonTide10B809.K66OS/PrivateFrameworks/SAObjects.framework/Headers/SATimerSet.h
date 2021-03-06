/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL, SATimerObject;

@interface SATimerSet : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353cf935; S=0x353cf9b1; 
@property(retain, nonatomic) SATimerObject *timer;	// G=0x353cfa11; S=0x353cfa65; 
+ (id)set;	// 0x353cf8a5
+ (id)setWithDictionary:(id)dictionary context:(id)context;	// 0x353cf8e9
- (id)encodedClassName;	// 0x353cf899
- (id)groupIdentifier;	// 0x353cf889
- (BOOL)requiresResponse;	// 0x353cfaa1
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353cf9b1
// declared property setter: - (void)setTimer:(id)timer;	// 0x353cfa65
// declared property getter: - (id)targetAppId;	// 0x353cf935
// declared property getter: - (id)timer;	// 0x353cfa11
@end

