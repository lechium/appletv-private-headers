/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSNumber;

@interface SAEntryPoint : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSNumber *latitude;	// G=0x30512f45; S=0x30512f61; 
@property(copy, nonatomic) NSNumber *longitude;	// G=0x30512fb1; S=0x30512fcd; 
+ (id)entryPoint;	// 0x30512eb5
+ (id)entryPointWithDictionary:(id)dictionary context:(id)context;	// 0x30512ef9
- (id)encodedClassName;	// 0x30512ea9
- (id)groupIdentifier;	// 0x30512e99
// declared property getter: - (id)latitude;	// 0x30512f45
// declared property getter: - (id)longitude;	// 0x30512fb1
// declared property setter: - (void)setLatitude:(id)latitude;	// 0x30512f61
// declared property setter: - (void)setLongitude:(id)longitude;	// 0x30512fcd
@end

