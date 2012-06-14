/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSSoftwareUpdatesContext.h"
#import "SSXPCCoding.h"

@class NSArray, NSString;

@interface SSMutableSoftwareUpdatesContext : SSSoftwareUpdatesContext <SSXPCCoding> {
}
@property(copy, nonatomic) NSString *clientIdentifierHeader;	// S=0x34e5101d; @dynamic
@property(assign, nonatomic, getter=isForced) BOOL forced;	// S=0x34e51061; @dynamic
@property(copy, nonatomic) NSArray *softwareTypes;	// S=0x34e51071; @dynamic
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x34e510e1
- (id)copyXPCEncoding;	// 0x34e510b5
// declared property setter: - (void)setClientIdentifierHeader:(id)header;	// 0x34e5101d
// declared property setter: - (void)setForced:(BOOL)forced;	// 0x34e51061
// declared property setter: - (void)setSoftwareTypes:(id)types;	// 0x34e51071
@end

