/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCEncryptedProfileServicePayload : MCPayload {
@private
	NSString *_urlString;	// 40 = 0x28
}
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3647ddc5
+ (id)typeStrings;	// 0x3647dc69
- (id)initWithURLString:(id)urlstring profile:(id)profile;	// 0x3647dc91
- (void)dealloc;	// 0x3647dec5
- (id)description;	// 0x3647de45
- (id)subtitle1Description;	// 0x3647dc59
- (id)subtitle1Label;	// 0x3647de25
- (id)title;	// 0x3647de35
@end

