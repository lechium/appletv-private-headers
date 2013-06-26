/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString;

@interface SASportsMatchupLineScore : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *period;	// G=0x353f600d; S=0x353f6029; 
@property(copy, nonatomic) NSString *score;	// G=0x353f6079; S=0x353f6095; 
+ (id)matchupLineScore;	// 0x353f5f7d
+ (id)matchupLineScoreWithDictionary:(id)dictionary context:(id)context;	// 0x353f5fc1
- (id)encodedClassName;	// 0x353f5f71
- (id)groupIdentifier;	// 0x353f5f61
// declared property getter: - (id)period;	// 0x353f600d
// declared property getter: - (id)score;	// 0x353f6079
// declared property setter: - (void)setPeriod:(id)period;	// 0x353f6029
// declared property setter: - (void)setScore:(id)score;	// 0x353f6095
@end
