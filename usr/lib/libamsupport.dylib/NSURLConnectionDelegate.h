/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libamsupport.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLConnectionDelegate <NSObject>
@optional
-(void)connection:(id)arg1 didFailWithError:(id)arg2;
-(BOOL)connectionShouldUseCredentialStorage:(id)arg1;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
-(void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;

@end

