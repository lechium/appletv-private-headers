/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFReader.h"
#import <NSObject.h> // Unknown library

@class WMFPlayer;

__attribute__((visibility("hidden")))
@interface WMFReader : NSObject <MFReader> {
@private
	int m_recordsRead;	// 4 = 0x4
	WMFPlayer *m_player;	// 8 = 0x8
	unsigned m_length;	// 12 = 0xc
	char *m_pBuffer;	// 16 = 0x10
	unsigned m_cursor;	// 20 = 0x14
}
- (id)initWithWMFPlayer:(id)wmfplayer;	// 0x327cb2f1
- (int)checkBytesAvailable:(unsigned)available;	// 0x327cb4c1
- (void)dealloc;	// 0x327c6049
- (int)moveDataCursor:(unsigned)cursor;	// 0x327cc01d
- (int)play:(id)play;	// 0x327cb31d
- (int)playHeaders;	// 0x327cb3f9
- (int)playRecord;	// 0x327cc049
- (oneway void)release;	// 0x327c601d
@end

