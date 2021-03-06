/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADImageFillTechnique.h"

@class OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADStretchTechnique : OADImageFillTechnique {
@private
	OADRelativeRect *mFillRect;	// 12 = 0xc
	BOOL mIsFillRectOverridden;	// 16 = 0x10
}
@property(retain) id fillRect;	// G=0x32cd4bc5; S=0x32cb8505; converted property
+ (id)defaultProperties;	// 0x32b98885
- (id)initWithDefaults;	// 0x32cb8481
- (id)copyWithZone:(NSZone *)zone;	// 0x32cc0915
- (void)dealloc;	// 0x32b13585
// converted property getter: - (id)fillRect;	// 0x32cd4bc5
- (unsigned)hash;	// 0x32b83659
- (BOOL)isEqual:(id)equal;	// 0x32cd5511
- (BOOL)isFillRectOverridden;	// 0x32cd4b91
// converted property setter: - (void)setFillRect:(id)rect;	// 0x32cb8505
@end

