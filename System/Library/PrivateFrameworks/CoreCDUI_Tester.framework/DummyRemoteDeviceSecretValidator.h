/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreCDUI_Tester.framework/CoreCDUI_Tester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDP/CDPRemoteDeviceSecretValidator.h>

@class NSString;

@interface DummyRemoteDeviceSecretValidator : CDPRemoteDeviceSecretValidator {

	NSString* _expectedString;
	unsigned long long _failedAttempts;

}
-(unsigned long long)supportedEscapeOfferMask;
-(void)approveFromAnotherDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)supportedEscapeOfferMaskCompletion:(/*^block*/id)arg1 ;
-(void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)initWithExpectedSecret:(id)arg1 ;
@end

