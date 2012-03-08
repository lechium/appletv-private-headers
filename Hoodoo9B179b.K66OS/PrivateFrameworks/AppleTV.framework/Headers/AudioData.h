/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface AudioData : NSObject {
@private
	int flags;	// 4 = 0x4
	int pid;	// 8 = 0x8
	int audioFormat;	// 12 = 0xc
	int channelCount;	// 16 = 0x10
	int sampleCount;	// 20 = 0x14
	NSString *audioLanguageCode;	// 24 = 0x18
}
- (id)initWithBuffer:(id)buffer;	// 0x304f8015
- (void)dealloc;	// 0x304f81bd
- (int)getAudioFormat;	// 0x304f817d
- (id)getAudioLanguageCode;	// 0x304f81ad
- (int)getChannelCount;	// 0x304f818d
- (int)getFlags;	// 0x304f815d
- (int)getPID;	// 0x304f816d
- (int)getSampleCount;	// 0x304f819d
@end

