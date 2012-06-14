/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityBaselineOperation.h"

@class NSObject;
@protocol PFUbiquityBaselineRollOperationDelegate;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation {
}
@property(assign) NSObject<PFUbiquityBaselineRollOperationDelegate> *delegate;	// G=0x32e3d909; S=0x32e3d8dd; 
// declared property getter: - (id)delegate;	// 0x32e3d909
- (BOOL)haveConsistentStateForBaselineRoll;	// 0x32e3da85
- (BOOL)isEqual:(id)equal;	// 0x32e3d935
- (void)main;	// 0x32e3e74d
- (BOOL)rollBaselineWithError:(id *)error;	// 0x32e3dec9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32e3d8dd
@end

