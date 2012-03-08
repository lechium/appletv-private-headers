/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSStoreMappingGenerator : NSObject {
}
+ (id)defaultMappingGenerator;	// 0x34840c5d
+ (void)invalidate;	// 0x34840ca5
- (id)externalNameForEntityName:(id)entityName;	// 0x3484090d
- (id)externalNameForPropertyName:(id)propertyName;	// 0x34840921
- (id)internalNameForEntityName:(id)entityName version:(int)version;	// 0x34840935
- (id)internalNameForPropertyName:(id)propertyName version:(int)version;	// 0x3484095d
- (id)joinsForRelationship:(id)relationship;	// 0x34840a45
- (id)mappingForAttribute:(id)attribute forConfigurationWithName:(id)name;	// 0x34840985
- (id)mappingForEntity:(id)entity forConfigurationWithName:(id)name;	// 0x34840ee9
- (id)mappingForRelationship:(id)relationship forConfigurationWithName:(id)name;	// 0x34840ae1
- (id)mappingsDictForConfigurationWithName:(id)name inModel:(id)model;	// 0x34840ccd
- (id)mappingsForConfigurationWithName:(id)name inModel:(id)model;	// 0x34840de1
- (id)primaryKeyForEntity:(id)entity;	// 0x348409f9
@end

