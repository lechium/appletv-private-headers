/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSNumber;

@interface SAEntryPoint : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSNumber *latitude;	// G=0x355dba05; S=0x355dba21; 
@property(copy, nonatomic) NSNumber *longitude;	// G=0x355dba71; S=0x355dba8d; 
+ (id)entryPoint;	// 0x355db975
+ (id)entryPointWithDictionary:(id)dictionary context:(id)context;	// 0x355db9b9
- (id)encodedClassName;	// 0x355db969
- (id)groupIdentifier;	// 0x355db959
// declared property getter: - (id)latitude;	// 0x355dba05
// declared property getter: - (id)longitude;	// 0x355dba71
// declared property setter: - (void)setLatitude:(id)latitude;	// 0x355dba21
// declared property setter: - (void)setLongitude:(id)longitude;	// 0x355dba8d
@end
