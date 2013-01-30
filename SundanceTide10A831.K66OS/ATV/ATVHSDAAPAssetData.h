/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ATVHSDAAPAssetData : XXUnknownSuperclass {
	NSData *_assetData;	// 4 = 0x4
	NSString *_assetString;	// 8 = 0x8
}
@property(retain, nonatomic) NSData *assetData;	// G=0xea949; S=0xea959; @synthesize=_assetData
@property(retain, nonatomic) NSString *assetString;	// G=0xea969; S=0xea979; @synthesize=_assetString
- (id)initWithData:(id)data;	// 0xe8dfd
- (id)initWithString:(id)string;	// 0xe8e45
// declared property getter: - (id)assetData;	// 0xea949
- (id)assetPlaybackURLWithHSClient:(id)hsclient;	// 0xe90d9
// declared property getter: - (id)assetString;	// 0xea969
- (unsigned long)codeForMediaKey:(id)mediaKey;	// 0xe9aad
- (void)dealloc;	// 0xe8e8d
- (id)decryptedDRMTokenDataWithHSClient:(id)hsclient;	// 0xe91b9
- (id)mediaTypeForMediaKind:(unsigned long)mediaKind;	// 0xea7c5
// declared property setter: - (void)setAssetData:(id)data;	// 0xea959
// declared property setter: - (void)setAssetString:(id)string;	// 0xea979
- (id)valueForATVMediaKey:(id)atvmediaKey withHSDataClient:(id)hsdataClient;	// 0xe8ee5
- (id)valueForCode:(unsigned long)code;	// 0xe900d
- (id)valueForCode:(unsigned long)code data:(char *)data length:(unsigned long)length;	// 0xe92f1
@end
