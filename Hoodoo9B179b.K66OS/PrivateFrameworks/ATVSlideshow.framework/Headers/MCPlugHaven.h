/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCPlug.h"

@class MCAction, NSString, MCContainerNavigator;

@interface MCPlugHaven : MCPlug {
	NSString *mIDInSupercontainer;	// 60 = 0x3c
	MCContainerNavigator *mSupercontainer;	// 64 = 0x40
}
@property(retain, nonatomic) MCAction *actionOnCompletion;	// G=0x355a47c5; S=0x355a47e5; 
@property(copy, getter=idInSupercontainer) NSString *idInSupercontainer;	// G=0x355a485d; @synthesize=mIDInSupercontainer
@property(assign) MCContainerNavigator *supercontainer;	// G=0x355a4895; S=0x355a48a5; @synthesize=mSupercontainer
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x355a4699
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x355a4805
// declared property getter: - (id)actionOnCompletion;	// 0x355a47c5
- (void)demolish;	// 0x355a4709
// declared property getter: - (id)idInSupercontainer;	// 0x355a485d
- (id)imprint;	// 0x355a4769
// declared property setter: - (void)setActionOnCompletion:(id)completion;	// 0x355a47e5
- (void)setIDInSupercontainer:(id)supercontainer;	// 0x355a4871
// declared property setter: - (void)setSupercontainer:(id)supercontainer;	// 0x355a48a5
// declared property getter: - (id)supercontainer;	// 0x355a4895
@end

