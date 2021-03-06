/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarComposedData : NSObject <NSCopying> {
	XXStruct_dUflDB _rawData;	// 4 = 0x4
	BOOL _itemEnabled[24];	// 1968 = 0x7b0
	NSString *_doubleHeightStatus;	// 1992 = 0x7c8
}
@property(copy, nonatomic) NSString *doubleHeightStatus;	// G=0x32e8ba6d; S=0x32aef175; @synthesize=_doubleHeightStatus
@property(readonly, assign, nonatomic) XXStruct_dUflDB *rawData;	// G=0x32aef1c5; 
- (id)initWithRawData:(const XXStruct_dUflDB *)rawData;	// 0x32aef111
- (id)copyWithZone:(NSZone *)zone;	// 0x32e8b9ad
- (void)dealloc;	// 0x32af1321
// declared property getter: - (id)doubleHeightStatus;	// 0x32e8ba6d
- (BOOL)isItemEnabled:(int)enabled;	// 0x32aef6a5
// declared property getter: - (XXStruct_dUflDB *)rawData;	// 0x32aef1c5
// declared property setter: - (void)setDoubleHeightStatus:(id)status;	// 0x32aef175
- (void)setItem:(int)item enabled:(BOOL)enabled;	// 0x32aef1d5
@end

