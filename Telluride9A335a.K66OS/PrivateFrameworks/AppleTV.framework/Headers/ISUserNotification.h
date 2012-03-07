/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ISUserNotification : NSObject {
@private
	int _allowedRetryCount;	// 4 = 0x4
	int _currentRetryCount;	// 8 = 0x8
	NSDictionary *_dictionary;	// 12 = 0xc
	unsigned long _optionFlags;	// 16 = 0x10
	NSDictionary *_userInfo;	// 20 = 0x14
}
@property(assign) int allowedRetryCount;	// G=0x34330759; S=0x34330769; @synthesize=_allowedRetryCount
@property(assign) int currentRetryCount;	// G=0x34330779; S=0x34330789; @synthesize=_currentRetryCount
@property(readonly, assign) NSDictionary *dictionary;	// G=0x34330711; 
@property(readonly, assign) unsigned long optionFlags;	// G=0x34330749; 
@property(retain) NSDictionary *userInfo;	// G=0x34330799; S=0x343307ad; @synthesize=_userInfo
- (id)init;	// 0x343305c9
- (id)initWithDictionary:(id)dictionary options:(unsigned long)options;	// 0x34330609
// declared property getter: - (int)allowedRetryCount;	// 0x34330759
- (CFUserNotificationRef)copyUserNotification;	// 0x343306b9
// declared property getter: - (int)currentRetryCount;	// 0x34330779
- (void)dealloc;	// 0x34330659
// declared property getter: - (id)dictionary;	// 0x34330711
// declared property getter: - (unsigned long)optionFlags;	// 0x34330749
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x34330769
// declared property setter: - (void)setCurrentRetryCount:(int)count;	// 0x34330789
// declared property setter: - (void)setUserInfo:(id)info;	// 0x343307ad
// declared property getter: - (id)userInfo;	// 0x34330799
@end
