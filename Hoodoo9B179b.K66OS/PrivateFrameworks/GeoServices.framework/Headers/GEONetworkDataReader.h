/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface GEONetworkDataReader : NSObject {
	NSMutableData *_data;	// 4 = 0x4
	unsigned _dataLength;	// 8 = 0x8
	const void *_bytes;	// 12 = 0xc
	unsigned _bookmarkOffset;	// 16 = 0x10
	unsigned _offset;	// 20 = 0x14
}
- (id)initWithData:(id)data;	// 0x32cf864d
- (void)appendNetworkData:(id)data;	// 0x32cf8771
- (void)dealloc;	// 0x32cf86e1
- (BOOL)hasUnreadData;	// 0x32cf8981
- (void)markOffset;	// 0x32cf8941
- (id)readData:(unsigned short)data;	// 0x32cf88e5
- (id)readString;	// 0x32cf87e1
- (unsigned short)readUnsignedShort;	// 0x32cf8899
- (void)seekToMarkedOffset;	// 0x32cf8961
@end

