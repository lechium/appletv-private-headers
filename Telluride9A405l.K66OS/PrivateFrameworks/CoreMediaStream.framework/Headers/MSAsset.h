/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "CoreMediaStream-Structs.h"

@class NSData, NSDictionary, NSString, NSError, NSURL;

@interface MSAsset : NSObject <NSCoding, NSCopying> {
@private
	NSData *_masterAssetHash;	// 4 = 0x4
	NSDictionary *_metadata;	// 8 = 0x8
	NSData *_fileHash;	// 12 = 0xc
	NSString *_path;	// 16 = 0x10
	NSString *_type;	// 20 = 0x14
	NSString *_MMCSAccessHeader;	// 24 = 0x18
	NSURL *_MMCSURL;	// 28 = 0x1c
	unsigned long long _protocolFileSize;	// 32 = 0x20
	NSData *_fileData;	// 40 = 0x28
	NSError *_error;	// 44 = 0x2c
}
@property(retain, nonatomic) NSString *MMCSAccessHeader;	// G=0x36fdc0b9; S=0x36fdc0c9; @synthesize=_MMCSAccessHeader
@property(retain, nonatomic) NSURL *MMCSURL;	// G=0x36fdc0ed; S=0x36fdc0fd; @synthesize=_MMCSURL
@property(retain, nonatomic) NSError *error;	// G=0x36fdc181; S=0x36fdc191; @synthesize=_error
@property(retain, nonatomic) NSData *fileData;	// G=0x36fdc14d; S=0x36fdc15d; @synthesize=_fileData
@property(retain, nonatomic) NSData *fileHash;	// G=0x36fdc01d; S=0x36fdc02d; @synthesize=_fileHash
@property(retain, nonatomic) NSData *masterAssetHash;	// G=0x36fdbfb5; S=0x36fdbfc5; @synthesize=_masterAssetHash
@property(retain, nonatomic) NSDictionary *metadata;	// G=0x36fdbfe9; S=0x36fdbff9; @synthesize=_metadata
@property(retain, nonatomic) NSString *path;	// G=0x36fdc051; S=0x36fdc061; @synthesize=_path
@property(assign, nonatomic) unsigned long long protocolFileSize;	// G=0x36fdc121; S=0x36fdc139; @synthesize=_protocolFileSize
@property(retain, nonatomic) NSString *type;	// G=0x36fdc085; S=0x36fdc095; @synthesize=_type
+ (id)asset;	// 0x36fdb819
- (id)initWithCoder:(id)coder;	// 0x36fdbcb9
// declared property getter: - (id)MMCSAccessHeader;	// 0x36fdc0b9
// declared property getter: - (id)MMCSURL;	// 0x36fdc0ed
- (unsigned long long)_fileSize;	// 0x36fdb9c5
- (void)addMetadataValue:(id)value forKey:(id)key;	// 0x36fdbea9
- (id)copyWithZone:(NSZone *)zone;	// 0x36fdbf5d
- (void)dealloc;	// 0x36fdb851
- (id)description;	// 0x36fdb93d
- (void)encodeWithCoder:(id)coder;	// 0x36fdbb09
// declared property getter: - (id)error;	// 0x36fdc181
// declared property getter: - (id)fileData;	// 0x36fdc14d
// declared property getter: - (id)fileHash;	// 0x36fdc01d
- (BOOL)isEqual:(id)equal;	// 0x36fdba05
// declared property getter: - (id)masterAssetHash;	// 0x36fdbfb5
// declared property getter: - (id)metadata;	// 0x36fdbfe9
- (id)metadataValueForKey:(id)key;	// 0x36fdbf3d
// declared property getter: - (id)path;	// 0x36fdc051
// declared property getter: - (unsigned long long)protocolFileSize;	// 0x36fdc121
// declared property setter: - (void)setError:(id)error;	// 0x36fdc191
// declared property setter: - (void)setFileData:(id)data;	// 0x36fdc15d
// declared property setter: - (void)setFileHash:(id)hash;	// 0x36fdc02d
// declared property setter: - (void)setMMCSAccessHeader:(id)header;	// 0x36fdc0c9
// declared property setter: - (void)setMMCSURL:(id)mmcsurl;	// 0x36fdc0fd
// declared property setter: - (void)setMasterAssetHash:(id)hash;	// 0x36fdbfc5
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x36fdbff9
// declared property setter: - (void)setPath:(id)path;	// 0x36fdc061
// declared property setter: - (void)setProtocolFileSize:(unsigned long long)size;	// 0x36fdc139
// declared property setter: - (void)setType:(id)type;	// 0x36fdc095
// declared property getter: - (id)type;	// 0x36fdc085
@end
