/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface INAppTrust : NSObject
+(BOOL)_shouldTrustExtensionForLaunch:(id)arg1 withExplicitAppTrustCache:(id)arg2 ;
+(BOOL)_shouldTrustAppForLaunch:(id)arg1 withExplicitAppTrustCache:(id)arg2 ;
+(BOOL)_appRequiresExplicitTrust:(id)arg1 withExplicitAppTrustCache:(id)arg2 ;
+(BOOL)shouldTrustExtensionForLaunch:(id)arg1 ;
+(id)extensionsTrustedForLaunch:(id)arg1 ;
+(BOOL)shouldTrustAppForLaunch:(id)arg1 ;
+(id)appsTrustedForLaunch:(id)arg1 ;
@end

