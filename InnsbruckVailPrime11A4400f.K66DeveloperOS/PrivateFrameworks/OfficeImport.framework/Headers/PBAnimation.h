/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"


@interface PBAnimation : NSObject {
}
+ (void)generatePpt10AnimationFromState:(id)state timings:(id)timings;	// 0x3190ea3d
+ (BOOL)hasPpt10Animations:(id)animations;	// 0x3190e7b9
+ (void)mapAnimationsFromSlide:(id)slide tgtSlide:(id)slide2 state:(id)state;	// 0x3190e719
+ (id)newChartBuild:(id)build;	// 0x31910e41
+ (id)newColorFromBehaviorColor:(PptAnimColorBehavior_Color_Struct *)behaviorColor;	// 0x3190fec9
+ (id)newParaBuild:(id)build;	// 0x31910d41
+ (void)parseAnimateBehaviorContainer:(id)container animBehavior:(id)behavior timeNode:(id)node;	// 0x3190fc59
+ (id)parseBehaviorContainer:(id)container timeNode:(id)node state:(id)state;	// 0x3190ed49
+ (void)parseBuildList:(id)list buildMap:(id)map state:(id)state;	// 0x31910ed1
+ (void)parseCmdBehaviorContainer:(id)container cmdBehavior:(id)behavior timeNode:(id)node;	// 0x31910709
+ (void)parseColorBehaviorContainer:(id)container colorBehavior:(id)behavior timeNode:(id)node;	// 0x3190ffd5
+ (void)parseEffectBehaviorContainer:(id)container effectBehavior:(id)behavior timeNode:(id)node;	// 0x319101b1
+ (id)parseMediaContainer:(id)container timeNode:(id)node state:(id)state;	// 0x3190f8f1
+ (void)parseMotionBehaviorContainer:(id)container motionBehavior:(id)behavior timeNode:(id)node;	// 0x319102dd
+ (void)parsePpt10Animation:(id)animation timings:(id)timings state:(id)state;	// 0x3190e7f1
+ (void)parseRotationBehaviorContainer:(id)container rotationBehavior:(id)behavior timeNode:(id)node;	// 0x31910601
+ (void)parseTargetContainerHolder:(id)holder setTargetObj:(id)obj state:(id)state;	// 0x31910a31
+ (void)parseTimeConditionsHolder:(id)holder commonData:(id)data;	// 0x3190fa99
+ (void)parseTimeNodeContainer:(id)container siblings:(id)siblings state:(id)state;	// 0x3190f445
+ (void)parseTimeNodeVariants:(id)variants commonData:(id)data;	// 0x31910835
@end

