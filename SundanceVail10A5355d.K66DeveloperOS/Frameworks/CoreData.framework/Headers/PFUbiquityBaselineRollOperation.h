/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityBaselineOperation.h"

@class NSObject;
@protocol PFUbiquityBaselineRollOperationDelegate;

@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation {
}
@property(assign) NSObject<PFUbiquityBaselineRollOperationDelegate> *delegate;	// G=0x335afead; S=0x335afe81; 
// declared property getter: - (id)delegate;	// 0x335afead
- (BOOL)haveConsistentStateForBaselineRoll;	// 0x335b0061
- (BOOL)isEqual:(id)equal;	// 0x335afed9
- (void)main;	// 0x335b0ded
- (BOOL)rollBaselineWithError:(id *)error;	// 0x335b04f9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x335afe81
@end
