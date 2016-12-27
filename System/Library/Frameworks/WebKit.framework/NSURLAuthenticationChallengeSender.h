/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLAuthenticationChallengeSender <NSObject>
@optional
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;

@required
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
-(void)cancelAuthenticationChallenge:(id)arg1;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;

@end

