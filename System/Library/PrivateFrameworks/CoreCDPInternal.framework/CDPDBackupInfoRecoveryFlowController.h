/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPInternal/CDPDRecoveryFlowController.h>

@class NSArray;

@interface CDPDBackupInfoRecoveryFlowController : CDPDRecoveryFlowController {

	NSArray* _icscRecoveryDevices;

}
-(void)retrieveInflatedDevices:(/*^block*/id)arg1 ;
-(BOOL)secretValidator:(id)arg1 shouldContinueValidationAfterError:(id)arg2 ;
-(void)secretValidator:(id)arg1 didFailRecoveryWithErrors:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_idmsDictionaryWithValidationResults:(id)arg1 error:(id*)arg2 ;
-(id)_verificationFailedErrorWithUnderlyingError:(id)arg1 ;
-(id)_recoveryListFromDevices:(id)arg1 ;
-(void)_showCooldownErrorWithUnderlyingError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_hardLimitError;
-(void)_showHardLimitError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_hardLimitErrorForSingleRecord:(id)arg1 ;
-(id)_outOfattemptsErrorForRecord:(id)arg1 ;
-(id)_cooldownErrorWithUnderlyingError:(id)arg1 ;
-(void)beginIDMSRecoveryWithCompletion:(/*^block*/id)arg1 ;
@end

