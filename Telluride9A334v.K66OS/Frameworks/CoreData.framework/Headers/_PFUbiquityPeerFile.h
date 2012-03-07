/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _PFUbiquityPeerFile : NSObject <NSCoding> {
@private
	NSURL *_peerFilePath;	// 4 = 0x4
	NSString *_peerID;	// 8 = 0x8
	NSString *_bundleID;	// 12 = 0xc
	NSURL *_storeMetadataURL;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *bundleID;	// G=0x31f4d525; @synthesize=_bundleID
@property(readonly, assign, nonatomic) NSURL *peerFilePath;	// G=0x31f4d515; @synthesize=_peerFilePath
@property(readonly, assign, nonatomic) NSString *peerID;	// G=0x31f4d535; @synthesize=_peerID
@property(readonly, assign, nonatomic) NSURL *storeMetadataURL;	// G=0x31f4d505; @synthesize=_storeMetadataURL
+ (id)cacheLocationForPeerID:(id)peerID andBundleIdentifier:(id)identifier;	// 0x31f4da09
+ (id)localPeerFileForBundleID:(id)bundleID;	// 0x31f4d5b1
+ (id)localPeerKey;	// 0x31f4db19
+ (id)machineUUID;	// 0x31f4db81
+ (id)peerBundleIdentifier;	// 0x31f4d9c5
+ (id)peerFileURLForPeerID:(id)peerID withBundleID:(id)bundleID;	// 0x31f4d8e1
+ (id)peerForPeerID:(id)peerID withBundleID:(id)bundleID;	// 0x31f4d7d9
+ (void)removePeerFilesForPeerID:(id)peerID andBundleID:(id)anId;	// 0x31f4d5e5
+ (void)storePeer:(id)peer;	// 0x31f4d635
- (id)init;	// 0x31f4d545
- (id)initWithCoder:(id)coder;	// 0x31f4dcb1
- (id)initWithPeerID:(id)peerID andFileURL:(id)url forBundleID:(id)bundleID;	// 0x31f4de4d
// declared property getter: - (id)bundleID;	// 0x31f4d525
- (void)dealloc;	// 0x31f4dda1
- (void)encodeWithCoder:(id)coder;	// 0x31f4dbed
// declared property getter: - (id)peerFilePath;	// 0x31f4d515
// declared property getter: - (id)peerID;	// 0x31f4d535
// declared property getter: - (id)storeMetadataURL;	// 0x31f4d505
@end
