/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BPSBuddyController <NSObject>
@optional
+(BOOL)controllerNeedsToRun;
-(id)viewController;
-(BOOL)controllerAllowsNavigatingBackTo;
-(BOOL)controllerAllowsNavigatingBackFrom;
-(BOOL)holdBeforeDisplaying;

@required
-(void)setDelegate:(id)arg1;
-(id)delegate;

@end

