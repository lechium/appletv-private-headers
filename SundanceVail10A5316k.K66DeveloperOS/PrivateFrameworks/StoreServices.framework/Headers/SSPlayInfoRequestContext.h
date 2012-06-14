/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSArray, NSString, NSData;

@interface SSPlayInfoRequestContext : NSObject <SSXPCCoding, NSCopying> {
@private
	NSString *_playerGUID;	// 4 = 0x4
	NSData *_sic;	// 8 = 0x8
	NSArray *_sinfs;	// 12 = 0xc
}
@property(copy, nonatomic) NSData *SICData;	// G=0x34e64ca9; S=0x34e64cbd; @synthesize=_sic
@property(copy, nonatomic) NSString *playerGUID;	// G=0x34e64c85; S=0x34e64c99; @synthesize=_playerGUID
@property(copy, nonatomic) NSArray *sinfs;	// G=0x34e64ccd; S=0x34e64ce1; @synthesize=_sinfs
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x34e64b7d
// declared property getter: - (id)SICData;	// 0x34e64ca9
- (id)copyWithZone:(NSZone *)zone;	// 0x34e64a79
- (id)copyXPCEncoding;	// 0x34e64b0d
- (void)dealloc;	// 0x34e64a01
// declared property getter: - (id)playerGUID;	// 0x34e64c85
// declared property setter: - (void)setPlayerGUID:(id)guid;	// 0x34e64c99
// declared property setter: - (void)setSICData:(id)data;	// 0x34e64cbd
// declared property setter: - (void)setSinfs:(id)sinfs;	// 0x34e64ce1
// declared property getter: - (id)sinfs;	// 0x34e64ccd
@end

