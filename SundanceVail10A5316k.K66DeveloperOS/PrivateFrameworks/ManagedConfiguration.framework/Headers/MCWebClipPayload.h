/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString, NSData, NSURL;

@interface MCWebClipPayload : MCPayload {
@private
	NSURL *_URL;	// 40 = 0x28
	NSString *_label;	// 44 = 0x2c
	NSData *_iconData;	// 48 = 0x30
	BOOL _isRemovable;	// 52 = 0x34
	BOOL _precomposed;	// 53 = 0x35
	BOOL _fullScreen;	// 54 = 0x36
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x305cc3d5; @synthesize=_URL
@property(readonly, assign, nonatomic) BOOL fullScreen;	// G=0x305cc425; @synthesize=_fullScreen
@property(readonly, assign, nonatomic) NSData *iconData;	// G=0x305cc3f5; @synthesize=_iconData
@property(readonly, assign, nonatomic) BOOL isRemovable;	// G=0x305cc405; @synthesize=_isRemovable
@property(readonly, assign, nonatomic) NSString *label;	// G=0x305cc3e5; @synthesize=_label
@property(readonly, assign, nonatomic) BOOL precomposed;	// G=0x305cc415; @synthesize=_precomposed
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x305cb751
+ (id)typeStrings;	// 0x305cb729
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x305cb7d9
- (void).cxx_destruct;	// 0x305cc435
// declared property getter: - (id)URL;	// 0x305cc3d5
- (id)description;	// 0x305cc171
// declared property getter: - (BOOL)fullScreen;	// 0x305cc425
// declared property getter: - (id)iconData;	// 0x305cc3f5
// declared property getter: - (BOOL)isRemovable;	// 0x305cc405
// declared property getter: - (id)label;	// 0x305cc3e5
// declared property getter: - (BOOL)precomposed;	// 0x305cc415
- (id)stubDictionary;	// 0x305cc05d
- (id)subtitle1Description;	// 0x305cc36d
- (id)subtitle1Label;	// 0x305cc35d
- (id)subtitle2Description;	// 0x305cc3c5
- (id)subtitle2Label;	// 0x305cc3b5
- (id)title;	// 0x305cc34d
@end

