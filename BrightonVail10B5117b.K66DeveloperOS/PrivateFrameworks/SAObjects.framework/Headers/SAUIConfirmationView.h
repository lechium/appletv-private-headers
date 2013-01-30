/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceView.h"

@class NSString, NSArray;

@interface SAUIConfirmationView : SAAceView {
}
@property(copy, nonatomic) NSString *cancelTrigger;	// G=0x355c597d; S=0x355c5999; 
@property(copy, nonatomic) NSArray *confirmCommands;	// G=0x355c59e9; S=0x355c5a51; 
@property(copy, nonatomic) NSString *confirmText;	// G=0x355c5ab9; S=0x355c5ad5; 
@property(copy, nonatomic) NSArray *denyCommands;	// G=0x355c5b25; S=0x355c5b8d; 
@property(copy, nonatomic) NSString *denyText;	// G=0x355c5bf5; S=0x355c5c11; 
+ (id)confirmationView;	// 0x355c58ed
+ (id)confirmationViewWithDictionary:(id)dictionary context:(id)context;	// 0x355c5931
// declared property getter: - (id)cancelTrigger;	// 0x355c597d
// declared property getter: - (id)confirmCommands;	// 0x355c59e9
// declared property getter: - (id)confirmText;	// 0x355c5ab9
// declared property getter: - (id)denyCommands;	// 0x355c5b25
// declared property getter: - (id)denyText;	// 0x355c5bf5
- (id)encodedClassName;	// 0x355c58e1
- (id)groupIdentifier;	// 0x355c58d1
// declared property setter: - (void)setCancelTrigger:(id)trigger;	// 0x355c5999
// declared property setter: - (void)setConfirmCommands:(id)commands;	// 0x355c5a51
// declared property setter: - (void)setConfirmText:(id)text;	// 0x355c5ad5
// declared property setter: - (void)setDenyCommands:(id)commands;	// 0x355c5b8d
// declared property setter: - (void)setDenyText:(id)text;	// 0x355c5c11
@end
