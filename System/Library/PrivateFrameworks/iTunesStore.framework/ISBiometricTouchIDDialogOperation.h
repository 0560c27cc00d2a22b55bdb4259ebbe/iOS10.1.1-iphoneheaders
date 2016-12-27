/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISBiometricAuthenticationContext, ISDialog;

@interface ISBiometricTouchIDDialogOperation : ISOperation {

	ISBiometricAuthenticationContext* _context;
	ISDialog* _dialog;

}

@property (retain) ISDialog * dialog;                                                              //@synthesize dialog=_dialog - In the implementation block
@property (retain) ISBiometricAuthenticationContext * biometricAuthenticationContext;              //@synthesize context=_context - In the implementation block
-(void)run;
-(void)setBiometricAuthenticationContext:(ISBiometricAuthenticationContext *)arg1 ;
-(BOOL)_runSignatureOperationReturningError:(id*)arg1 ;
-(BOOL)_runAuthkitOperationWithError:(id)arg1 returningError:(id*)arg2 ;
-(id)initWithDialog:(id)arg1 ;
-(ISBiometricAuthenticationContext *)biometricAuthenticationContext;
-(ISDialog *)dialog;
-(void)setDialog:(ISDialog *)arg1 ;
@end

