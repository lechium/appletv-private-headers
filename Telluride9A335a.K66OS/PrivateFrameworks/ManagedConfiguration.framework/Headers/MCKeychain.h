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
+ (CFDictionaryRef)_newQueryWithService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x3041326d
+ (BOOL)addCertificateToKeychain:(SecCertificate *)keychain;	// 0x30412909
+ (SecCertificate *)copyCertificateWithPersistentID:(id)persistentID;	// 0x30412c39
+ (SecIdentity *)copyIdentityWithPersistentID:(id)persistentID;	// 0x30412c05
+ (void *)copyItemWithPersistentID:(id)persistentID;	// 0x30412c8d
+ (id)dataFromService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x30412d95
+ (BOOL)itemExistsInKeychain:(void *)keychain;	// 0x30412959
+ (void)removeDataForService:(id)service account:(id)account label:(id)label description:(id)description;	// 0x30412d4d
+ (void)removeItemWithPersistentID:(id)persistentID;	// 0x304129e1
+ (void)removeStringForService:(id)service account:(id)account label:(id)label description:(id)description;	// 0x304131e1
+ (id)saveItem:(void *)item withLabel:(id)label group:(id)group;	// 0x30412a6d
+ (BOOL)setData:(id)data forService:(id)service account:(id)account label:(id)label description:(id)description access:(void *)access outError:(id *)error;	// 0x30412f29
+ (BOOL)setData:(id)data forService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x30413199
+ (BOOL)setString:(id)string forService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x30413201
+ (id)stringFromService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x30412891
@end
