/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSArray;

@interface SAUIConfirmationOptions : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *cancelTrigger;	// G=0x353c23b1; S=0x353c23cd; 
@property(copy, nonatomic) NSArray *confirmCommands;	// G=0x353c241d; S=0x353c2485; 
@property(copy, nonatomic) NSString *confirmText;	// G=0x353c24ed; S=0x353c2509; 
@property(copy, nonatomic) NSArray *denyCommands;	// G=0x353c2559; S=0x353c25c1; 
@property(copy, nonatomic) NSString *denyText;	// G=0x353c2629; S=0x353c2645; 
+ (id)confirmationOptions;	// 0x353c2321
+ (id)confirmationOptionsWithDictionary:(id)dictionary context:(id)context;	// 0x353c2365
// declared property getter: - (id)cancelTrigger;	// 0x353c23b1
// declared property getter: - (id)confirmCommands;	// 0x353c241d
// declared property getter: - (id)confirmText;	// 0x353c24ed
// declared property getter: - (id)denyCommands;	// 0x353c2559
// declared property getter: - (id)denyText;	// 0x353c2629
- (id)encodedClassName;	// 0x353c2315
- (id)groupIdentifier;	// 0x353c2305
// declared property setter: - (void)setCancelTrigger:(id)trigger;	// 0x353c23cd
// declared property setter: - (void)setConfirmCommands:(id)commands;	// 0x353c2485
// declared property setter: - (void)setConfirmText:(id)text;	// 0x353c2509
// declared property setter: - (void)setDenyCommands:(id)commands;	// 0x353c25c1
// declared property setter: - (void)setDenyText:(id)text;	// 0x353c2645
@end

