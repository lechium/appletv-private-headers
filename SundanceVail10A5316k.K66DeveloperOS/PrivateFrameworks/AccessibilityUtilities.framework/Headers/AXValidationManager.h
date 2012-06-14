/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface AXValidationManager : NSObject {
@private
	BOOL _shouldLogToConsole;	// 4 = 0x4
	BOOL _shouldCrashOnError;	// 5 = 0x5
	BOOL _shouldReportToServer;	// 6 = 0x6
	unsigned _numberOfValidationErrors;	// 8 = 0x8
	BOOL _forceDoNotReport;	// 12 = 0xc
	NSString *_validationTargetName;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL forceDoNotReport;	// G=0x30a7f23d; S=0x30a7f24d; @synthesize=_forceDoNotReport
@property(assign, nonatomic) unsigned numberOfValidationErrors;	// G=0x30a7f21d; S=0x30a7f22d; @synthesize=_numberOfValidationErrors
@property(assign, nonatomic) BOOL shouldCrashOnError;	// G=0x30a7f1dd; S=0x30a7f1ed; @synthesize=_shouldCrashOnError
@property(assign, nonatomic) BOOL shouldLogToConsole;	// G=0x30a7f1bd; S=0x30a7f1cd; @synthesize=_shouldLogToConsole
@property(assign, nonatomic) BOOL shouldReportToServer;	// G=0x30a7f1fd; S=0x30a7f20d; @synthesize=_shouldReportToServer
@property(copy, nonatomic) NSString *validationTargetName;	// G=0x30a7f25d; S=0x30a7f271; @synthesize=_validationTargetName
+ (id)sharedInstance;	// 0x30a7dec9
// declared property getter: - (BOOL)forceDoNotReport;	// 0x30a7f23d
// declared property getter: - (unsigned)numberOfValidationErrors;	// 0x30a7f21d
- (void)performValidations:(id)validations withPreValidationHandler:(id)preValidationHandler postValidationHandler:(id)handler;	// 0x30a7df35
// declared property setter: - (void)setForceDoNotReport:(BOOL)report;	// 0x30a7f24d
// declared property setter: - (void)setNumberOfValidationErrors:(unsigned)validationErrors;	// 0x30a7f22d
// declared property setter: - (void)setShouldCrashOnError:(BOOL)crashOnError;	// 0x30a7f1ed
// declared property setter: - (void)setShouldLogToConsole:(BOOL)logToConsole;	// 0x30a7f1cd
// declared property setter: - (void)setShouldReportToServer:(BOOL)reportToServer;	// 0x30a7f20d
// declared property setter: - (void)setValidationTargetName:(id)name;	// 0x30a7f271
// declared property getter: - (BOOL)shouldCrashOnError;	// 0x30a7f1dd
// declared property getter: - (BOOL)shouldLogToConsole;	// 0x30a7f1bd
// declared property getter: - (BOOL)shouldReportToServer;	// 0x30a7f1fd
- (BOOL)validateClass:(id)aClass;	// 0x30a7e075
- (BOOL)validateClass:(id)aClass conformsToProtocol:(id)protocol;	// 0x30a7ede9
- (BOOL)validateClass:(id)aClass hasClassMethod:(id)method;	// 0x30a7ebf5
- (BOOL)validateClass:(id)aClass hasClassMethod:(id)method returnType:(char *)type parameterCount:(unsigned)count;	// 0x30a7e605
- (BOOL)validateClass:(id)aClass hasInstanceMethod:(id)method;	// 0x30a7e4dd
- (BOOL)validateClass:(id)aClass hasInstanceMethod:(id)method returnType:(char *)type parameterCount:(unsigned)count;	// 0x30a7e8fd
- (BOOL)validateClass:(id)aClass hasInstanceVariable:(id)variable;	// 0x30a7e251
- (BOOL)validateClass:(id)aClass hasInstanceVariable:(id)variable withType:(char *)type;	// 0x30a7e34d
- (BOOL)validateClass:(id)aClass hasProperty:(id)property;	// 0x30a7ece9
- (BOOL)validateClass:(id)aClass isKindOfClass:(id)aClass2;	// 0x30a7e159
- (BOOL)validateProtocol:(id)protocol hasMethod:(id)method isInstanceMethod:(BOOL)method3 isRequired:(BOOL)required;	// 0x30a7eedd
- (BOOL)validateProtocol:(id)protocol hasOptionalClassMethod:(id)method;	// 0x30a7f069
- (BOOL)validateProtocol:(id)protocol hasOptionalInstanceMethod:(id)method;	// 0x30a7f01d
- (BOOL)validateProtocol:(id)protocol hasProperty:(id)property;	// 0x30a7f0b5
- (BOOL)validateProtocol:(id)protocol hasRequiredClassMethod:(id)method;	// 0x30a7f091
- (BOOL)validateProtocol:(id)protocol hasRequiredInstanceMethod:(id)method;	// 0x30a7f041
// declared property getter: - (id)validationTargetName;	// 0x30a7f25d
@end

