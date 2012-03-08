/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVEvaluation : NSObject {
}
+ (id)evaluationWithName:(id)name;	// 0x32f7f1a1
+ (void)initialize;	// 0x32f7f13d
+ (void)registerEvaluation:(id)evaluation withName:(id)name;	// 0x32f7f1bd
- (BOOL)evaluateValue:(id)value usingOperator:(id)anOperator withUserInfo:(id)userInfo;	// 0x32f7f2f5
- (SEL)selectorForOperator:(id)anOperator;	// 0x32f7f1d9
@end

