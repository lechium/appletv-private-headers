/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSNumber;

@interface SASportsTeamRank : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSNumber *position;	// G=0x355d0149; S=0x355d0165; 
@property(copy, nonatomic) NSNumber *primary;	// G=0x355d01b5; S=0x355d01d1; 
@property(copy, nonatomic) NSString *source;	// G=0x355d0221; S=0x355d023d; 
+ (id)teamRank;	// 0x355d00b9
+ (id)teamRankWithDictionary:(id)dictionary context:(id)context;	// 0x355d00fd
- (id)encodedClassName;	// 0x355d00ad
- (id)groupIdentifier;	// 0x355d009d
// declared property getter: - (id)position;	// 0x355d0149
// declared property getter: - (id)primary;	// 0x355d01b5
// declared property setter: - (void)setPosition:(id)position;	// 0x355d0165
// declared property setter: - (void)setPrimary:(id)primary;	// 0x355d01d1
// declared property setter: - (void)setSource:(id)source;	// 0x355d023d
// declared property getter: - (id)source;	// 0x355d0221
@end
