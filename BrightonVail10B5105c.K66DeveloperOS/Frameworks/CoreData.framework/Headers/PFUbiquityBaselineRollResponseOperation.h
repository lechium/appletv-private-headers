/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityBaselineRollOperation.h"

@class NSObject;
@protocol PFUbiquityBaselineRollResponseOperationDelegate;

@interface PFUbiquityBaselineRollResponseOperation : PFUbiquityBaselineRollOperation {
}
@property(assign) NSObject<PFUbiquityBaselineRollResponseOperationDelegate> *delegate;	// G=0x36387175; S=0x36387149; 
- (BOOL)canAdoptBaseline:(id)baseline byReplacingLocalStoreFile:(BOOL *)file withStack:(id)stack withError:(id *)error;	// 0x363871cd
// declared property getter: - (id)delegate;	// 0x36387175
- (void)main;	// 0x363876a1
- (id)retainedDelegate;	// 0x363871a1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36387149
@end

