/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSNumber;

@interface SASportsMetadata : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSNumber *average;	// G=0x353f131d; S=0x353f1339; 
@property(copy, nonatomic) NSString *identifier;	// G=0x353f1389; S=0x353f13a5; 
@property(copy, nonatomic) NSString *name;	// G=0x353f13f5; S=0x353f1411; 
@property(copy, nonatomic) NSNumber *selected;	// G=0x353f1461; S=0x353f147d; 
@property(copy, nonatomic) NSString *value;	// G=0x353f14cd; S=0x353f14e9; 
+ (id)metadata;	// 0x353f128d
+ (id)metadataWithDictionary:(id)dictionary context:(id)context;	// 0x353f12d1
// declared property getter: - (id)average;	// 0x353f131d
- (id)encodedClassName;	// 0x353f1281
- (id)groupIdentifier;	// 0x353f1271
// declared property getter: - (id)identifier;	// 0x353f1389
// declared property getter: - (id)name;	// 0x353f13f5
// declared property getter: - (id)selected;	// 0x353f1461
// declared property setter: - (void)setAverage:(id)average;	// 0x353f1339
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x353f13a5
// declared property setter: - (void)setName:(id)name;	// 0x353f1411
// declared property setter: - (void)setSelected:(id)selected;	// 0x353f147d
// declared property setter: - (void)setValue:(id)value;	// 0x353f14e9
// declared property getter: - (id)value;	// 0x353f14cd
@end

