/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/TKVibrationRecorderViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol TKVibrationRecorderViewControllerDelegate;
@class TKVibrationRecorderView, TLVibrationPattern, UIBarButtonItem, UIAlertController, UIAlertAction, UITextField, TKVibratorController, NSDictionary, TKVibrationRecorderViewController, NSString;

@interface TKVibrationRecorderContentViewController : UIViewController <TKVibrationRecorderViewDelegate, UITextFieldDelegate> {

	int _mode;
	TKVibrationRecorderView* _vibrationRecorderView;
	TLVibrationPattern* _recordedVibrationPattern;
	double _currentVibrationComponentDidStartTimeStamp;
	BOOL _isWaitingForEndOfCurrentVibrationComponent;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _saveButton;
	UIAlertController* _vibrationNameAlertController;
	UIAlertAction* _vibrationNameAlertSaveAction;
	UITextField* _vibrationNameAlertTextField;
	TKVibratorController* _vibratorController;
	NSDictionary* _indefiniteVibrationPattern;
	id<TKVibrationRecorderViewControllerDelegate> _delegate;
	TKVibrationRecorderViewController* _parentVibrationRecorderViewController;

}

@property (assign,nonatomic,__weak) id<TKVibrationRecorderViewControllerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) TKVibrationRecorderViewController * parentVibrationRecorderViewController;              //@synthesize parentVibrationRecorderViewController=_parentVibrationRecorderViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<TKVibrationRecorderViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<TKVibrationRecorderViewControllerDelegate>)delegate;
-(void)applicationWillSuspend;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)_saveButtonTapped:(id)arg1 ;
-(void)_cleanUpVibrationNameAlertController;
-(void)vibrationRecorderView:(id)arg1 buttonTappedWithIdentifier:(int)arg2 ;
-(void)_finishedWithRecorder;
-(TKVibrationRecorderViewController *)parentVibrationRecorderViewController;
-(void)_vibrationNameTextFieldContentsDidChange:(id)arg1 ;
-(void)_cancelButtonInAlertTapped:(id)arg1 ;
-(void)_saveButtonInAlertTapped:(id)arg1 ;
-(void)_updateStateSaveButtonInAlert;
-(void)_stopVibrating;
-(void)_storeVibrationComponentOfTypePause:(BOOL)arg1 ;
-(id)_indefiniteVibrationPattern;
-(void)_startVibratingWithVibrationPattern:(id)arg1 ;
-(void)_accessibilityDidEnterReplayMode;
-(void)_accessibilityDidEnterRecordingMode;
-(void)vibrationComponentDidEndForVibrationRecorderView:(id)arg1 ;
-(void)_eraseCurrentVibrationComponentDidStartTimeStamp;
-(void)_accessibilityDidExitRecordingMode;
-(void)_accessibilityDidExitReplayMode;
-(void)_accessibilityMakeAnnouncementWithStringForLocalizationIdentifier:(id)arg1 ;
-(void)vibrationComponentDidStartForVibrationRecorderView:(id)arg1 ;
-(void)vibrationRecorderViewDidFinishReplayingVibration:(id)arg1 ;
-(BOOL)vibrationRecorderViewDidEnterRecordingMode:(id)arg1 ;
-(void)vibrationRecorderView:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2 ;
-(void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(id)arg1 ;
-(id)initWithVibratorController:(id)arg1 ;
-(void)setParentVibrationRecorderViewController:(TKVibrationRecorderViewController *)arg1 ;
@end
