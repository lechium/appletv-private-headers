/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface MFPartialNetworkData : NSObject {
	NSMutableData *_rawData;	// 4 = 0x4
	NSMutableData *_unixData;	// 8 = 0x8
}
@property(retain) NSMutableData *rawData;	// G=0x346ee589; S=0x346ee501; converted property
- (void)appendRawData:(id)data;	// 0x346ee3e1
- (id)copyDataWithUnixLineEndings;	// 0x346ee611
- (id)dataWithUnixLineEndings;	// 0x346ee5e9
- (void)dealloc;	// 0x346ee699
- (void)purgeCaches;	// 0x346ee6fd
// converted property getter: - (id)rawData;	// 0x346ee589
- (unsigned)rawDataLength;	// 0x346ee599
// converted property setter: - (void)setRawData:(id)data;	// 0x346ee501
@end

