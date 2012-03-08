/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADEmbeddedMediaFile.h"


__attribute__((visibility("hidden")))
@interface OADWavAudioFile : OADEmbeddedMediaFile {
@private
	float mDuration;	// 20 = 0x14
	BOOL mHasDuration;	// 24 = 0x18
}
@property(assign, nonatomic) float duration;	// G=0x32ac0951; S=0x32ac0961; @synthesize=mDuration
@property(assign, nonatomic) BOOL hasDuration;	// G=0x32ac0931; S=0x32ac0941; @synthesize=mHasDuration
// declared property getter: - (float)duration;	// 0x32ac0951
// declared property getter: - (BOOL)hasDuration;	// 0x32ac0931
// declared property setter: - (void)setDuration:(float)duration;	// 0x32ac0961
// declared property setter: - (void)setHasDuration:(BOOL)duration;	// 0x32ac0941
@end

