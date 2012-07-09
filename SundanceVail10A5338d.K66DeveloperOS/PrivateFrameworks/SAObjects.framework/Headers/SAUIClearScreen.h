/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SAAceView;

@interface SAUIClearScreen : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SAAceView *initialView;	// G=0x379471d5; S=0x37947229; 
+ (id)clearScreen;	// 0x37947145
+ (id)clearScreenWithDictionary:(id)dictionary context:(id)context;	// 0x37947189
- (id)encodedClassName;	// 0x37947139
- (id)groupIdentifier;	// 0x37947129
// declared property getter: - (id)initialView;	// 0x379471d5
- (BOOL)requiresResponse;	// 0x37947265
// declared property setter: - (void)setInitialView:(id)view;	// 0x37947229
@end
