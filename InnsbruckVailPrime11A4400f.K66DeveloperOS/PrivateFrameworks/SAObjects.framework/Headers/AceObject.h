/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "NSObject.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"
#import "AceObject.h"
#import "SAObjects-Structs.h"
#import </libobjc.A.h>

@class NSMutableDictionary, NSString, NSData;

@protocol AceObject <NSObject, NSCopying, NSMutableCopying, NSSecureCoding>
- (id)init;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithDictionary:(id)dictionary context:(id)context;
- (id)copyWithZone:(NSZone *)zone;
- (id)dictionary;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)mutableCopyWithZone:(NSZone *)zone;
- (id)properties;
@end

@interface AceObject : NSObject <AceObject> {
	NSString *_aceId;	// 4 = 0x4
	NSString *_refId;	// 8 = 0x8
	NSData *_plistData;	// 12 = 0xc
	NSMutableDictionary *_dict;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *aceId;	// G=0x326a1435; S=0x326a1449; @synthesize=_aceId
@property(readonly, assign, nonatomic) NSMutableDictionary *dict;	// G=0x326a148d; @synthesize=_dict
@property(readonly, assign, nonatomic) NSData *plistData;	// G=0x326a147d; @synthesize=_plistData
@property(copy, nonatomic) NSString *refId;	// G=0x326a1459; S=0x326a146d; @synthesize=_refId
+ (id)_aceObjectWithMutableDictionary:(id)mutableDictionary context:(id)context;	// 0x3269fbb5
+ (id)_newAceObjectWithMutableDictionary:(id)mutableDictionary;	// 0x3269fbed
+ (id)aceObjectArrayWithDictionaryArray:(id)dictionaryArray baseClass:(Class)aClass context:(id)context;	// 0x3269fca1
+ (id)aceObjectArrayWithDictionaryArray:(id)dictionaryArray baseProtocol:(id)protocol context:(id)context;	// 0x3269ffa5
+ (id)aceObjectDictionaryWithDictionary:(id)dictionary baseClass:(Class)aClass context:(id)context;	// 0x3269fdc5
+ (id)aceObjectDictionaryWithDictionary:(id)dictionary baseProtocol:(id)protocol context:(id)context;	// 0x326a00d1
+ (id)aceObjectWithDictionary:(id)dictionary context:(id)context;	// 0x3269faed
+ (id)aceObjectWithGenericCommand:(id)genericCommand context:(id)context;	// 0x3269fab5
+ (id)aceObjectWithPlistData:(id)plistData;	// 0x326a04b5
+ (id)dictionaryArrayWithAceObjectArray:(id)aceObjectArray;	// 0x326a02bd
+ (id)dictionaryWithAceObjectDictionary:(id)aceObjectDictionary;	// 0x326a02f1
+ (void)load;	// 0x326a0439
+ (id)newAceObjectWithDictionary:(id)dictionary context:(id)context;	// 0x3269fb65
+ (id)newAceObjectWithGenericCommand:(id)genericCommand context:(id)context;	// 0x3269fb25
+ (BOOL)supportsSecureCoding;	// 0x3269f905
- (id)init;	// 0x326a05f9
- (id)initWithCoder:(id)coder;	// 0x3269f909
- (id)initWithDictionary:(id)dictionary;	// 0x326a07c1
- (id)initWithDictionary:(id)dictionary context:(id)context;	// 0x326a07d5
- (void)_appendDescriptionOfObject:(id)object toString:(id)string atDepth:(int)depth withPrefixes:(id)prefixes;	// 0x326a0ce1
- (void)_deserializeFromPlistData;	// 0x326a08e1
- (id)_dict;	// 0x326a0919
- (id)_initWithMutableDictionary:(id)mutableDictionary;	// 0x326a081d
- (id)_initWithPlistData:(id)plistData aceId:(id)anId refId:(id)anId3;	// 0x326a0725
// declared property getter: - (id)aceId;	// 0x326a1435
- (id)copyWithZone:(NSZone *)zone;	// 0x326a12c1
- (void)dealloc;	// 0x326a0699
- (id)description;	// 0x326a0b69
// declared property getter: - (id)dict;	// 0x326a148d
- (id)dictionary;	// 0x326a0995
- (void)encodeWithCoder:(id)coder;	// 0x3269fa05
- (id)encodedClassName;	// 0x326a095d
- (void)forceEagerDeserialization;	// 0x326a0b31
- (id)groupIdentifier;	// 0x326a0979
- (BOOL)hasArrayForPropertyForKey:(id)key;	// 0x326a0a59
- (unsigned)hash;	// 0x326a140d
- (BOOL)isEqual:(id)equal;	// 0x326a1371
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x326a1319
// declared property getter: - (id)plistData;	// 0x326a147d
- (id)properties;	// 0x326a09cd
- (id)propertyForKey:(id)key;	// 0x326a0a1d
// declared property getter: - (id)refId;	// 0x326a1459
// declared property setter: - (void)setAceId:(id)anId;	// 0x326a1449
- (void)setProperty:(id)property forKey:(id)key;	// 0x326a09ed
// declared property setter: - (void)setRefId:(id)anId;	// 0x326a146d
- (void)setTopLevelProperty:(id)property forKey:(id)key;	// 0x326a09dd
- (id)topLevelPropertyForKey:(id)key;	// 0x326a0a49
@end

