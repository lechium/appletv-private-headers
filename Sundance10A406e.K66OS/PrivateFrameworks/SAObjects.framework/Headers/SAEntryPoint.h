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
@property(copy, nonatomic) NSNumber *latitude;	// G=0x3254ff45; S=0x3254ff61; 
@property(copy, nonatomic) NSNumber *longitude;	// G=0x3254ffb1; S=0x3254ffcd; 
+ (id)entryPoint;	// 0x3254feb5
+ (id)entryPointWithDictionary:(id)dictionary context:(id)context;	// 0x3254fef9
- (id)encodedClassName;	// 0x3254fea9
- (id)groupIdentifier;	// 0x3254fe99
// declared property getter: - (id)latitude;	// 0x3254ff45
// declared property getter: - (id)longitude;	// 0x3254ffb1
// declared property setter: - (void)setLatitude:(id)latitude;	// 0x3254ff61
// declared property setter: - (void)setLongitude:(id)longitude;	// 0x3254ffcd
@end
