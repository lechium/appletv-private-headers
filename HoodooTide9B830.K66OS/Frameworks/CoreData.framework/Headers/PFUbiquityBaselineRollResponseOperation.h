/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityBaselineRollOperation.h"

@class NSObject;
@protocol PFUbiquityBaselineRollResponseOperationDelegate;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineRollResponseOperation : PFUbiquityBaselineRollOperation {
}
@property(assign) NSObject<PFUbiquityBaselineRollResponseOperationDelegate> *delegate;	// G=0x323ac37d; S=0x323ab641; 
- (BOOL)canAdoptBaseline:(id)baseline byReplacingLocalStoreFile:(BOOL *)file withStack:(id)stack withError:(id *)error;	// 0x323abf3d
// declared property getter: - (id)delegate;	// 0x323ac37d
- (void)main;	// 0x323ab66d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x323ab641
@end
