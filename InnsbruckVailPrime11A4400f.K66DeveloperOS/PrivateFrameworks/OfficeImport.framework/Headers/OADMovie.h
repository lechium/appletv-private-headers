/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDelayedMedia.h"

@class NSString, NSData;

@interface OADMovie : OCDDelayedMedia {
	NSData *mData;	// 12 = 0xc
	NSString *mName;	// 16 = 0x10
}
@property(retain) NSData *data;	// G=0x318f0ac5; S=0x31864829; @synthesize=mData
@property(retain) NSString *name;	// G=0x318f0ad9; S=0x31864819; @synthesize=mName
// declared property getter: - (id)data;	// 0x318f0ac5
- (void)dealloc;	// 0x31864879
// declared property getter: - (id)name;	// 0x318f0ad9
// declared property setter: - (void)setData:(id)data;	// 0x31864829
// declared property setter: - (void)setName:(id)name;	// 0x31864819
@end
