/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString;

@interface SAMPSetQueueQueueFilter : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *mediaItemProperty;	// G=0x3050e4c1; S=0x3050e4dd; 
@property(copy, nonatomic) NSString *operation;	// G=0x3050e52d; S=0x3050e549; 
@property(copy, nonatomic) NSString *value;	// G=0x3050e599; S=0x3050e5b5; 
+ (id)setQueueQueueFilter;	// 0x3050e431
+ (id)setQueueQueueFilterWithDictionary:(id)dictionary context:(id)context;	// 0x3050e475
- (id)encodedClassName;	// 0x3050e425
- (id)groupIdentifier;	// 0x3050e415
// declared property getter: - (id)mediaItemProperty;	// 0x3050e4c1
// declared property getter: - (id)operation;	// 0x3050e52d
// declared property setter: - (void)setMediaItemProperty:(id)property;	// 0x3050e4dd
// declared property setter: - (void)setOperation:(id)operation;	// 0x3050e549
// declared property setter: - (void)setValue:(id)value;	// 0x3050e5b5
// declared property getter: - (id)value;	// 0x3050e599
@end

