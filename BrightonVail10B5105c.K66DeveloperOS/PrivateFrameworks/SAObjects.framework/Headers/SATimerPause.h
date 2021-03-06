/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SATimerPause : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x303a984d; S=0x303a98c9; 
+ (id)pause;	// 0x303a97bd
+ (id)pauseWithDictionary:(id)dictionary context:(id)context;	// 0x303a9801
- (id)encodedClassName;	// 0x303a97b1
- (id)groupIdentifier;	// 0x303a97a1
- (BOOL)requiresResponse;	// 0x303a9929
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x303a98c9
// declared property getter: - (id)targetAppId;	// 0x303a984d
@end

