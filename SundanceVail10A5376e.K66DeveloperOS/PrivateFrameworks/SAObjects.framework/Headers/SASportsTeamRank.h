/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSNumber, NSString;

@interface SASportsTeamRank : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSNumber *position;	// G=0x3425aae9; S=0x3425ab05; 
@property(copy, nonatomic) NSNumber *primary;	// G=0x3425ab55; S=0x3425ab71; 
@property(copy, nonatomic) NSString *source;	// G=0x3425abc1; S=0x3425abdd; 
+ (id)teamRank;	// 0x3425aa59
+ (id)teamRankWithDictionary:(id)dictionary context:(id)context;	// 0x3425aa9d
- (id)encodedClassName;	// 0x3425aa4d
- (id)groupIdentifier;	// 0x3425aa3d
// declared property getter: - (id)position;	// 0x3425aae9
// declared property getter: - (id)primary;	// 0x3425ab55
// declared property setter: - (void)setPosition:(id)position;	// 0x3425ab05
// declared property setter: - (void)setPrimary:(id)primary;	// 0x3425ab71
// declared property setter: - (void)setSource:(id)source;	// 0x3425abdd
// declared property getter: - (id)source;	// 0x3425abc1
@end

