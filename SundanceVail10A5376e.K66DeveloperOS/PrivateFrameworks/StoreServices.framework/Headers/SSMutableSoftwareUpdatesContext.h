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
@property(copy, nonatomic) NSString *clientIdentifierHeader;	// S=0x32cc0fed; @dynamic
@property(assign, nonatomic, getter=isForced) BOOL forced;	// S=0x32cc1031; @dynamic
@property(copy, nonatomic) NSArray *softwareTypes;	// S=0x32cc1041; @dynamic
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x32cc10b1
- (id)copyXPCEncoding;	// 0x32cc1085
// declared property setter: - (void)setClientIdentifierHeader:(id)header;	// 0x32cc0fed
// declared property setter: - (void)setForced:(BOOL)forced;	// 0x32cc1031
// declared property setter: - (void)setSoftwareTypes:(id)types;	// 0x32cc1041
@end
