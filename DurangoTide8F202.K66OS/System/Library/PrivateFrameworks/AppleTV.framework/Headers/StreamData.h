/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface StreamData : NSObject {
@private
	long long fileSize;	// 4 = 0x4
	NSString *fileID;	// 12 = 0xc
	long long creationTime;	// 16 = 0x10
	long long preroll;	// 24 = 0x18
	long long duration;	// 32 = 0x20
	long long wrapInterval;	// 40 = 0x28
	int alignmentOffset;	// 48 = 0x30
	long long toolsVersion;	// 52 = 0x34
}
- (id)initWithBuffer:(id)buffer;	// 0x3373afb4
- (void)dealloc;	// 0x3373af54
- (int)getAlignmentOffset;	// 0x3373af28
- (long long)getCreationTime;	// 0x3373aec8
- (long long)getDuration;	// 0x3373aef8
- (id)getFileID;	// 0x3373aeb4
- (int)getFileSize;	// 0x3373aea0
- (long long)getPreroll;	// 0x3373aee0
- (long long)getToolsVersion;	// 0x3373af3c
- (long long)getWrapInterval;	// 0x3373af10
@end

