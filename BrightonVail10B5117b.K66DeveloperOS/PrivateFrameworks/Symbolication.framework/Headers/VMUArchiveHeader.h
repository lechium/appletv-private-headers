/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUHeader.h"

@class NSMutableArray, NSString;

@interface VMUArchiveHeader : VMUHeader {
	NSMutableArray *_headers;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *headers;	// G=0x35760a11; converted property
+ (id)archiveHeaderWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;	// 0x357605a1
- (id)initWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;	// 0x357605f5
- (id)architecture;	// 0x35760a21
- (void)dealloc;	// 0x35760995
- (id)description;	// 0x35760ad1
// converted property getter: - (id)headers;	// 0x35760a11
- (BOOL)isArchive;	// 0x35760a0d
@end
