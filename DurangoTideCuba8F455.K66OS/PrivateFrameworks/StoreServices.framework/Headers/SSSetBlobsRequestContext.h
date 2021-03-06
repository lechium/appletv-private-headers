/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import "SSBlobsRequestContext.h"
#import "SSCoding.h"

@class NSArray;

@interface SSSetBlobsRequestContext : SSBlobsRequestContext <NSCopying, SSCoding> {
@private
	NSArray *_blobs;	// 12 = 0xc
}
@property(copy, nonatomic) NSArray *blobs;	// G=0x3273f7c9; S=0x3273fab9; @synthesize=_blobs
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x3273fc15
// declared property getter: - (id)blobs;	// 0x3273f7c9
- (id)copyPropertyListEncoding;	// 0x3273fb3d
- (id)copyWithZone:(NSZone *)zone;	// 0x3273f8c1
- (void)dealloc;	// 0x3273f90d
// declared property setter: - (void)setBlobs:(id)blobs;	// 0x3273fab9
@end

