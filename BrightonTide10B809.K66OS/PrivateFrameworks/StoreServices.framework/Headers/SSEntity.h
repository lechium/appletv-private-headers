/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"

@class SSXPCConnection, NSDictionary, NSMutableDictionary, NSArray;
@protocol OS_dispatch_queue;

@interface SSEntity : NSObject <SSXPCCoding> {
	SSXPCConnection *_connection;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	NSMutableDictionary *_localExternalValues;	// 12 = 0xc
	NSMutableDictionary *_localValues;	// 16 = 0x10
	long long _pid;	// 20 = 0x14
	NSArray *_dirtyLocalExternalProperties;	// 28 = 0x1c
	NSArray *_dirtyLocalProperties;	// 32 = 0x20
}
@property(copy, getter=_localExternalValues, setter=_setLocalExternalValues:) NSDictionary *_localExternalValues;	// G=0x354f0091; S=0x354f06a5; 
@property(copy, getter=_localValues, setter=_setLocalValues:) NSDictionary *_localValues;	// G=0x354f0241; S=0x354f0785; 
@property(readonly, assign, getter=_isManaged) BOOL _managed;	// G=0x354f03f1; 
@property(readonly, assign) long long _persistentIdentifier;	// G=0x354f04c9; 
@property(readonly, assign) BOOL exists;	// G=0x354eee1d; 
+ (long long)_existsMessage;	// 0x354efdc9
+ (long long)_getExternalValuesMessage;	// 0x354efdd1
+ (long long)_getValueMessage;	// 0x354efdd9
+ (long long)_setExternalValuesMessage;	// 0x354efde1
+ (long long)_setValuesMessage;	// 0x354efde9
- (id)init;	// 0x354eec8d
- (void)__addCachedExternalValues:(id)values;	// 0x354f0865
- (void)__addCachedPropertyValues:(id)values;	// 0x354f08d1
- (void)_addCachedExternalValues:(id)values;	// 0x354efdf1
- (void)_addCachedPropertyValues:(id)values;	// 0x354efea1
- (void)_becomeManagedOnConnection:(id)connection;	// 0x354eff9d
- (void)_getValues:(id *)values forProperties:(const id *)properties count:(unsigned)count message:(long long)message;	// 0x354f093d
- (id)_initWithPersistentIdentifier:(long long)persistentIdentifier;	// 0x354eed01
// declared property getter: - (BOOL)_isManaged;	// 0x354f03f1
// declared property getter: - (id)_localExternalValues;	// 0x354f0091
// declared property getter: - (id)_localValues;	// 0x354f0241
// declared property getter: - (long long)_persistentIdentifier;	// 0x354f04c9
- (void)_resetLocalIVars;	// 0x354f04e1
- (void)_setDirtyCachedExternalProperties:(id)properties;	// 0x354f04e5
- (void)_setDirtyCachedProperties:(id)properties;	// 0x354f05c5
// declared property setter: - (void)_setLocalExternalValues:(id)values;	// 0x354f06a5
// declared property setter: - (void)_setLocalValues:(id)values;	// 0x354f0785
- (id)copyXPCEncoding;	// 0x354f14dd
- (void)dealloc;	// 0x354eed69
- (id)description;	// 0x354efce5
// declared property getter: - (BOOL)exists;	// 0x354eee1d
- (void)getValues:(id *)values forExternalProperties:(const id *)externalProperties count:(unsigned)count;	// 0x354ef6b9
- (void)getValues:(id *)values forProperties:(const id *)properties count:(unsigned)count;	// 0x354ef191
- (unsigned)hash;	// 0x354efd55
- (BOOL)isEqual:(id)equal;	// 0x354efd65
- (void)resetCachedExternalProperties:(const id *)properties count:(unsigned)count;	// 0x354ef70d
- (void)resetCachedProperties:(const id *)properties count:(unsigned)count;	// 0x354ef7dd
- (BOOL)setExternalValuesWithDictionary:(id)dictionary;	// 0x354ef8ad
- (BOOL)setValue:(id)value forProperty:(id)property;	// 0x354ef1e5
- (BOOL)setValuesWithDictionary:(id)dictionary;	// 0x354ef281
- (id)valueForExternalProperty:(id)externalProperty;	// 0x354efcb9
- (id)valueForProperty:(id)property;	// 0x354ef68d
@end

