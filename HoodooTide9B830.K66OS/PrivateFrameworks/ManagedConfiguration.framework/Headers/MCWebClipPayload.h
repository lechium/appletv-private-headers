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
@property(readonly, assign) NSURL *URL;	// G=0x33b14481; @synthesize=_URL
@property(readonly, assign) BOOL fullScreen;	// G=0x33b14431; @synthesize=_fullScreen
@property(readonly, assign) NSData *iconData;	// G=0x33b14461; @synthesize=_iconData
@property(readonly, assign) BOOL isRemovable;	// G=0x33b14451; @synthesize=_isRemovable
@property(readonly, assign) NSString *label;	// G=0x33b14471; @synthesize=_label
@property(readonly, assign) BOOL precomposed;	// G=0x33b14441; @synthesize=_precomposed
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x33b14579
+ (id)typeStrings;	// 0x33b145d9
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x33b1486d
// declared property getter: - (id)URL;	// 0x33b14481
- (void)dealloc;	// 0x33b14669
- (id)description;	// 0x33b146dd
// declared property getter: - (BOOL)fullScreen;	// 0x33b14431
// declared property getter: - (id)iconData;	// 0x33b14461
// declared property getter: - (BOOL)isRemovable;	// 0x33b14451
// declared property getter: - (id)label;	// 0x33b14471
// declared property getter: - (BOOL)precomposed;	// 0x33b14441
- (id)stubDictionary;	// 0x33b14491
- (id)subtitle1Description;	// 0x33b14621
- (id)subtitle1Label;	// 0x33b14649
- (id)subtitle2Description;	// 0x33b14601
- (id)subtitle2Label;	// 0x33b14611
- (id)title;	// 0x33b14659
@end
