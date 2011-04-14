/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCPlug.h"

@class MCContainerNavigator, MCAction, NSString;

@interface MCPlugHaven : MCPlug {
	NSString *mIDInSupercontainer;	// 64 = 0x40
	MCContainerNavigator *mSupercontainer;	// 68 = 0x44
}
@property(readonly, assign) MCAction *actionOnCompletion;	// G=0x3154f885; 
@property(copy, getter=idInSupercontainer, setter=setIDInSupercontainer:) NSString *idInSupercontainer;	// G=0x3154f935; S=0x3154f94d; @synthesize=mIDInSupercontainer
@property(assign) MCContainerNavigator *supercontainer;	// G=0x3154f979; S=0x3154f989; @synthesize=mSupercontainer
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3154f759
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3154f8d5
// declared property getter: - (id)actionOnCompletion;	// 0x3154f885
- (void)demolish;	// 0x3154f7c9
// declared property getter: - (id)idInSupercontainer;	// 0x3154f935
- (id)imprint;	// 0x3154f829
// declared property setter: - (void)setIDInSupercontainer:(id)supercontainer;	// 0x3154f94d
// declared property setter: - (void)setSupercontainer:(id)supercontainer;	// 0x3154f989
- (id)setTransitionOnCompletionForTargetPlugObjectID:(id)targetPlugObjectID withTransitionID:(id)transitionID;	// 0x3154f8a5
// declared property getter: - (id)supercontainer;	// 0x3154f979
@end

