/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDCommonTimeNodeData.h"

@class PDAnimationTargetElement, NSString;

__attribute__((visibility("hidden")))
@interface PDSequentialTimeNodeGroup : PDCommonTimeNodeData {
}
@property(assign, nonatomic) double delay;	// G=0x3295e001; S=0x3295dfa5; 
@property(assign, nonatomic) double direction;	// G=0x3295e08d; S=0x3295e055; 
@property(retain, nonatomic) NSString *groupId;	// G=0x3295e0ed; S=0x3295e0c1; 
@property(assign, nonatomic) int iterateType;	// G=0x3295df6d; S=0x3295df31; 
@property(assign, nonatomic) int presetClass;	// G=0x3295de61; S=0x3295de35; 
@property(assign, nonatomic) int presetId;	// G=0x3295deb5; S=0x3295de89; 
@property(retain, nonatomic) PDAnimationTargetElement *targetElement;	// G=0x3295de0d; S=0x3295dde1; 
@property(assign, nonatomic) int triggerType;	// G=0x3295df09; S=0x3295dedd; 
+ (id)createSequentialTimeNodeGroupForAnimationInfo;	// 0x3295e115
// declared property getter: - (double)delay;	// 0x3295e001
// declared property getter: - (double)direction;	// 0x3295e08d
// declared property getter: - (id)groupId;	// 0x3295e0ed
// declared property getter: - (int)iterateType;	// 0x3295df6d
- (id)level1ParallelTimeNodeGroup;	// 0x3295dd0d
- (id)level2ParallelTimeNodeGroup;	// 0x3295dd49
- (id)level3SetBehavior;	// 0x3295dd95
// declared property getter: - (int)presetClass;	// 0x3295de61
// declared property getter: - (int)presetId;	// 0x3295deb5
// declared property setter: - (void)setDelay:(double)delay;	// 0x3295dfa5
// declared property setter: - (void)setDirection:(double)direction;	// 0x3295e055
// declared property setter: - (void)setGroupId:(id)anId;	// 0x3295e0c1
// declared property setter: - (void)setIterateType:(int)type;	// 0x3295df31
// declared property setter: - (void)setPresetClass:(int)aClass;	// 0x3295de35
// declared property setter: - (void)setPresetId:(int)anId;	// 0x3295de89
// declared property setter: - (void)setTargetElement:(id)element;	// 0x3295dde1
// declared property setter: - (void)setTriggerType:(int)type;	// 0x3295dedd
// declared property getter: - (id)targetElement;	// 0x3295de0d
// declared property getter: - (int)triggerType;	// 0x3295df09
@end

