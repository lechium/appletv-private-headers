/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADMovie.h"

@class NSString, NSData;

@interface OADEmbeddedMediaFile : OADMovie {
	NSData *mData;	// 12 = 0xc
	NSString *mName;	// 16 = 0x10
}
@property(retain) NSData *data;	// G=0x31dd0c31; S=0x31d588d1; @synthesize=mData
@property(retain) NSString *name;	// G=0x31dd0c45; S=0x31d588c1; @synthesize=mName
// declared property getter: - (id)data;	// 0x31dd0c31
- (void)dealloc;	// 0x31d588e1
// declared property getter: - (id)name;	// 0x31dd0c45
// declared property setter: - (void)setData:(id)data;	// 0x31d588d1
// declared property setter: - (void)setName:(id)name;	// 0x31d588c1
@end

