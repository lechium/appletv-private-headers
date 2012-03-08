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
+ (void)addModelingToolUserInfoToEntity:(id)entity;	// 0x348855e5
+ (void)addModelingToolUserInfoToProperty:(id)property;	// 0x348855e1
+ (id)createSharedModel;	// 0x34885b19
+ (void)destroySharedModel;	// 0x34886b79
+ (id)newAttributeNamed:(id)named attributeType:(unsigned)type isOptional:(BOOL)optional isTransient:(BOOL)transient withDefaultValue:(id)defaultValue andMinValue:(id)value andMaxValue:(id)value7;	// 0x34885725
+ (id)newEntityForName:(id)name;	// 0x34885aa5
+ (id)newRelationshipNamed:(id)named withDestinationEntity:(id)destinationEntity andInverseRelationship:(id)relationship isOptional:(BOOL)optional isToMany:(BOOL)many andDeleteRule:(unsigned)rule;	// 0x34885615
+ (id)sharedModel;	// 0x34886c41
- (id)init;	// 0x348855e9
- (void)dealloc;	// 0x34886d11
@end

