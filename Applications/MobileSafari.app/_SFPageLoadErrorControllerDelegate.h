/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _SFPageLoadErrorControllerDelegate <NSObject>
@optional
-(void)pageLoadErrorController:(id)arg1 didChooseOnlyAvailableIdentityForAuthenticationChallenge:(id)arg2;
-(id)pageLoadErrorControllerApplicationDisplayName:(id)arg1;

@required
-(void)pageLoadErrorControllerDidShowAlert:(id)arg1;
-(void)pageLoadErrorController:(id)arg1 setAllowsSpecificHTTPSCertificate:(id)arg2 forHost:(id)arg3;
-(void)pageLoadErrorControllerWillShowPrintingDuringLoadAlert:(id)arg1 action:(int)arg2;
-(BOOL)pageLoadErrorControllerShouldHandleCertificateError:(id)arg1;
-(void)pageLoadErrorController:(id)arg1 loadFailedRequestAfterError:(id)arg2;

@end

