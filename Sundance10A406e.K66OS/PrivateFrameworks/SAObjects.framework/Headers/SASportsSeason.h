/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class SASportsSeasonRange;

@interface SASportsSeason : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) SASportsSeasonRange *postSeason;	// G=0x3254a775; S=0x3254a7c9; 
@property(retain, nonatomic) SASportsSeasonRange *preSeason;	// G=0x3254a805; S=0x3254a859; 
@property(retain, nonatomic) SASportsSeasonRange *regularSeason;	// G=0x3254a895; S=0x3254a8e9; 
+ (id)season;	// 0x3254a6e5
+ (id)seasonWithDictionary:(id)dictionary context:(id)context;	// 0x3254a729
- (id)encodedClassName;	// 0x3254a6d9
- (id)groupIdentifier;	// 0x3254a6c9
// declared property getter: - (id)postSeason;	// 0x3254a775
// declared property getter: - (id)preSeason;	// 0x3254a805
// declared property getter: - (id)regularSeason;	// 0x3254a895
// declared property setter: - (void)setPostSeason:(id)season;	// 0x3254a7c9
// declared property setter: - (void)setPreSeason:(id)season;	// 0x3254a859
// declared property setter: - (void)setRegularSeason:(id)season;	// 0x3254a8e9
@end

