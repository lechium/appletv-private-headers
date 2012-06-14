/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVMetadataItem.h"

@class AVMutableMetadataItemInternal, NSString, NSDictionary, NSLocale;
@protocol NSObject;

@interface AVMutableMetadataItem : AVMetadataItem {
	AVMutableMetadataItemInternal *_mutablePriv;	// 8 = 0x8
}
@property(assign) XXStruct_pwHToB duration;	// G=0x366fd605; S=0x366fd891; 
@property(copy) NSDictionary *extraAttributes;	// G=0x366fd6c9; S=0x366fd939; 
@property(copy) id<NSCopying, NSObject> key;	// G=0x366fd515; S=0x366fd6f1; 
@property(copy) NSString *keySpace;	// G=0x366fd53d; S=0x366fd76d; 
@property(copy) NSLocale *locale;	// G=0x366fd565; S=0x366fd7e9; 
@property(assign) XXStruct_pwHToB time;	// G=0x366fd58d; S=0x366fd849; 
@property(copy) id<NSCopying, NSObject> value;	// G=0x366fd67d; S=0x366fd8d9; 
+ (id)metadataItem;	// 0x366fd4d1
- (id)copyWithZone:(NSZone *)zone;	// 0x366fd999
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x366fd605
// declared property getter: - (id)extraAttributes;	// 0x366fd6c9
// declared property getter: - (id)key;	// 0x366fd515
// declared property getter: - (id)keySpace;	// 0x366fd53d
// declared property getter: - (id)locale;	// 0x366fd565
// declared property setter: - (void)setDuration:(XXStruct_pwHToB)duration;	// 0x366fd891
// declared property setter: - (void)setExtraAttributes:(id)attributes;	// 0x366fd939
// declared property setter: - (void)setKey:(id)key;	// 0x366fd6f1
// declared property setter: - (void)setKeySpace:(id)space;	// 0x366fd76d
// declared property setter: - (void)setLocale:(id)locale;	// 0x366fd7e9
// declared property setter: - (void)setTime:(XXStruct_pwHToB)time;	// 0x366fd849
// declared property setter: - (void)setValue:(id)value;	// 0x366fd8d9
// declared property getter: - (XXStruct_pwHToB)time;	// 0x366fd58d
// declared property getter: - (id)value;	// 0x366fd67d
@end

