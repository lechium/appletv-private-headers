/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PFUbiquityMetadataModelFactory : NSObject {
}
+ (void)addModelingToolUserInfoToEntity:(id)entity;	// 0x331e45e5
+ (void)addModelingToolUserInfoToProperty:(id)property;	// 0x331e45e1
+ (id)createSharedModel;	// 0x331e4b19
+ (void)destroySharedModel;	// 0x331e5b79
+ (id)newAttributeNamed:(id)named attributeType:(unsigned)type isOptional:(BOOL)optional isTransient:(BOOL)transient withDefaultValue:(id)defaultValue andMinValue:(id)value andMaxValue:(id)value7;	// 0x331e4725
+ (id)newEntityForName:(id)name;	// 0x331e4aa5
+ (id)newRelationshipNamed:(id)named withDestinationEntity:(id)destinationEntity andInverseRelationship:(id)relationship isOptional:(BOOL)optional isToMany:(BOOL)many andDeleteRule:(unsigned)rule;	// 0x331e4615
+ (id)sharedModel;	// 0x331e5c41
- (id)init;	// 0x331e45e9
- (void)dealloc;	// 0x331e5d11
@end
