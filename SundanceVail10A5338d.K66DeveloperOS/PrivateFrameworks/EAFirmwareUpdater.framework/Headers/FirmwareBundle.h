/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

#import <NSObject.h> // Unknown library

@class NSData;

@interface FirmwareBundle : NSObject {
	NSData *hash;	// 4 = 0x4
	NSData *firmwareImage;	// 8 = 0x8
	NSData *signature;	// 12 = 0xc
	NSData *certificate;	// 16 = 0x10
	unsigned productIDCode;	// 20 = 0x14
	unsigned firmwareImageBaseAddress;	// 24 = 0x18
	unsigned firmwareImageSize;	// 28 = 0x1c
}
@property(readonly, assign) NSData *certificate;	// G=0x31da5371; @synthesize
@property(readonly, assign) NSData *firmwareImage;	// G=0x31da5349; @synthesize
@property(readonly, assign) unsigned firmwareImageBaseAddress;	// G=0x31da53ad; @synthesize
@property(readonly, assign) unsigned firmwareImageSize;	// G=0x31da53c1; @synthesize
@property(readonly, assign) NSData *hash;	// G=0x31da535d; @synthesize
@property(readonly, assign) unsigned productIDCode;	// G=0x31da5399; @synthesize
@property(readonly, assign) NSData *signature;	// G=0x31da5385; @synthesize
+ (id)parseResourceFileIntoData:(id)data;	// 0x31da4f11
- (id)initWithBundle:(id)bundle;	// 0x31da4ae1
- (id)initWithBundleName:(id)bundleName;	// 0x31da4e6d
- (id)initWithBundlePath:(id)bundlePath;	// 0x31da4e09
// declared property getter: - (id)certificate;	// 0x31da5371
- (void)dealloc;	// 0x31da52bd
// declared property getter: - (id)firmwareImage;	// 0x31da5349
// declared property getter: - (unsigned)firmwareImageBaseAddress;	// 0x31da53ad
// declared property getter: - (unsigned)firmwareImageSize;	// 0x31da53c1
// declared property getter: - (id)hash;	// 0x31da535d
- (id)parseFirmwareImageFileIntoData:(id)data;	// 0x31da5071
// declared property getter: - (unsigned)productIDCode;	// 0x31da5399
// declared property getter: - (id)signature;	// 0x31da5385
@end

