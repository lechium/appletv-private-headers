/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library


@interface MCKeychain : NSObject {
}
+ (CFDictionaryRef)_newQueryWithService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x3644d281
+ (BOOL)addCertificateToKeychain:(SecCertificate *)keychain;	// 0x3644c91d
+ (SecCertificate *)copyCertificateWithPersistentID:(id)persistentID;	// 0x3644cc4d
+ (SecIdentity *)copyIdentityWithPersistentID:(id)persistentID;	// 0x3644cc19
+ (void *)copyItemWithPersistentID:(id)persistentID;	// 0x3644cca1
+ (id)dataFromService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x3644cda9
+ (BOOL)itemExistsInKeychain:(void *)keychain;	// 0x3644c96d
+ (void)removeDataForService:(id)service account:(id)account label:(id)label description:(id)description;	// 0x3644cd61
+ (void)removeItemWithPersistentID:(id)persistentID;	// 0x3644c9f5
+ (void)removeStringForService:(id)service account:(id)account label:(id)label description:(id)description;	// 0x3644d1f5
+ (id)saveItem:(void *)item withLabel:(id)label group:(id)group;	// 0x3644ca81
+ (BOOL)setData:(id)data forService:(id)service account:(id)account label:(id)label description:(id)description access:(void *)access outError:(id *)error;	// 0x3644cf3d
+ (BOOL)setData:(id)data forService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x3644d1ad
+ (BOOL)setString:(id)string forService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x3644d215
+ (id)stringFromService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x3644c8a5
@end

