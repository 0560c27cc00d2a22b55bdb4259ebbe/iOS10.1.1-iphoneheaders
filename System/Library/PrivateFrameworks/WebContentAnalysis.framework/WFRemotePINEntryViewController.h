/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/WFPINEntryViewControllerProtocol.h>

@protocol WFPINEntryViewControllerProtocol;
@class NSObject;

@interface WFRemotePINEntryViewController : _UIRemoteViewController <WFPINEntryViewControllerProtocol> {

	NSObject*<WFPINEntryViewControllerProtocol> _delegate;

}

@property (assign,nonatomic) NSObject*<WFPINEntryViewControllerProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)setDelegate:(NSObject*<WFPINEntryViewControllerProtocol>)arg1 ;
-(void)dealloc;
-(NSObject*<WFPINEntryViewControllerProtocol>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)setURL:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)requiresKeyboard;
-(BOOL)isNumericPIN;
-(BOOL)simplePIN;
-(void)userDidCancel;
-(void)setPageTitle:(id)arg1 ;
-(void)userEnteredCorrectPIN;
@end

