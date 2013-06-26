/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface NetflixTopHeader : XXUnknownSuperclass {
	int startOffset;	// 4 = 0x4
	unsigned short version;	// 8 = 0x8
	unsigned short headerObjectPID;	// 10 = 0xa
	unsigned char drm;	// 12 = 0xc
	unsigned crc;	// 16 = 0x10
}
- (id)initWithData:(char *)data length:(unsigned)length;	// 0x52533d
- (void)dealloc;	// 0x5254ed
- (unsigned)getCrc;	// 0x5254dd
- (unsigned char)getDrm;	// 0x5254cd
- (unsigned short)getHeaderObjectPID;	// 0x5254bd
- (int)getStartOffset;	// 0x52549d
- (unsigned short)getVersion;	// 0x5254ad
@end
