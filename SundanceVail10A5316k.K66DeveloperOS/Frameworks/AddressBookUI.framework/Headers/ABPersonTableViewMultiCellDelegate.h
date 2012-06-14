/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABMultiCellContentViewUpdateDelegate.h"
#import "ABPersonTableHeaderViewDelegate.h"
#import "ABDatePickerViewControllerDismissDelegate.h"
#import <NSObject.h> // Unknown library

@class ABPersonPickersDelegate, ABPersonTableViewDataSource, ABStyleProvider, UIDatePicker;

@interface ABPersonTableViewMultiCellDelegate : NSObject <ABMultiCellContentViewUpdateDelegate, ABPersonTableHeaderViewDelegate, ABDatePickerViewControllerDismissDelegate> {
@private
	UIDatePicker *_datePicker;	// 4 = 0x4
	ABPersonTableViewDataSource *_dataSource;	// 8 = 0x8
	ABStyleProvider *_styleProvider;	// 12 = 0xc
	ABPersonPickersDelegate *_pickersDelegate;	// 16 = 0x10
}
@property(assign, nonatomic) ABPersonTableViewDataSource *dataSource;	// G=0x34cd113d; S=0x34cd114d; @synthesize=_dataSource
@property(assign, nonatomic) ABPersonPickersDelegate *pickersDelegate;	// G=0x34cd117d; S=0x34cd118d; @synthesize=_pickersDelegate
@property(retain, nonatomic) ABStyleProvider *styleProvider;	// G=0x34cd115d; S=0x34cd116d; @synthesize=_styleProvider
- (BOOL)ABTabToNextResponder:(BOOL)nextResponder fromView:(id)view;	// 0x34cd1051
- (id)_capitalizedTitleForContentView:(id)contentView;	// 0x34cd0525
- (void)_multiCellContentView:(id)view selectedAlert:(id)alert;	// 0x34cd0125
- (void)_multiCellContentView:(id)view selectedCountry:(id)country;	// 0x34ccfa7d
- (void)_multiCellContentView:(id)view selectedLabel:(id)label;	// 0x34ccf691
- (void)_multiCellContentView:(id)view selectedService:(id)service;	// 0x34ccfe11
- (BOOL)_tableView:(id)view isValidIndexPath:(id)path;	// 0x34cd0b15
// declared property getter: - (id)dataSource;	// 0x34cd113d
- (void)dateField:(id)field delegateDismissDatePicker:(id)picker;	// 0x34cd09f9
- (void)dateField:(id)field delegatePrepareToPresentDatePicker:(id)presentDatePicker;	// 0x34cd0681
- (void)dateField:(id)field delegatePresentDatePicker:(id)picker;	// 0x34cd06cd
- (BOOL)dateField:(id)field shouldPresentDatePicker:(id)picker;	// 0x34cd0629
- (id)datePickerForDateField:(id)dateField;	// 0x34cd05c5
- (void)datePickerViewControllerWillDisappear:(id)datePickerViewController;	// 0x34cd0a49
- (void)dealloc;	// 0x34ccd8ad
- (void)multiCellContentView:(id)view didResizeAnimated:(BOOL)animated;	// 0x34ccf4b9
- (void)multiCellContentView:(id)view entryField:(id)field didUpdateValue:(id)value forKey:(id)key;	// 0x34ccdf15
- (void)multiCellContentView:(id)view entryFieldDidBeginEditing:(id)entryField;	// 0x34ccdca1
- (void)multiCellContentView:(id)view entryFieldDidEndEditing:(id)entryField;	// 0x34cce6c1
- (BOOL)multiCellContentView:(id)view entryFieldShouldBeginEditing:(id)entryField;	// 0x34ccdc05
- (void)multiCellContentView:(id)view touchesBeganForView:(id)view2;	// 0x34ccd911
- (void)multiCellContentView:(id)view touchesCancelledForView:(id)view2;	// 0x34ccdbdd
- (void)multiCellContentView:(id)view touchesEndedForView:(id)view2;	// 0x34ccd9fd
- (void)multiCellContentView:(id)view willResizeAnimated:(BOOL)animated;	// 0x34ccf445
- (void)multiCellContentViewDidEndEditing:(id)multiCellContentView;	// 0x34cce7e1
- (void)multiCellContentViewWillHideDeleteConfirmation:(id)multiCellContentView;	// 0x34ccf669
- (void)multiCellContentViewWillShowDeleteConfirmation:(id)multiCellContentView;	// 0x34ccf61d
- (void)personTableHeaderView:(id)view imageViewWasSelected:(id)selected;	// 0x34cd10b1
// declared property getter: - (id)pickersDelegate;	// 0x34cd117d
// declared property setter: - (void)setDataSource:(id)source;	// 0x34cd114d
// declared property setter: - (void)setPickersDelegate:(id)delegate;	// 0x34cd118d
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x34cd116d
// declared property getter: - (id)styleProvider;	// 0x34cd115d
- (BOOL)tabToNextResponder:(BOOL)nextResponder fromView:(id)view;	// 0x34cd0b91
@end
