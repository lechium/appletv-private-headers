/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSURL;

@interface SAClockAddCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(assign, nonatomic) BOOL alreadyExists;	// G=0x304dd651; S=0x304dd6c9; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSURL *worldClockId;	// G=0x304dd70d; S=0x304dd789; 
+ (id)addCompleted;	// 0x304dd5c1
+ (id)addCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x304dd605
// declared property getter: - (BOOL)alreadyExists;	// 0x304dd651
- (id)encodedClassName;	// 0x304dd5b5
- (id)groupIdentifier;	// 0x304dd5a5
// declared property setter: - (void)setAlreadyExists:(BOOL)exists;	// 0x304dd6c9
// declared property setter: - (void)setWorldClockId:(id)anId;	// 0x304dd789
// declared property getter: - (id)worldClockId;	// 0x304dd70d
@end
