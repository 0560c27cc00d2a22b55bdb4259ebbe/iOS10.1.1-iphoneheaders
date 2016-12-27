/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSApplication.h>
#import <libobjc.A.dylib/SKUIJSApplication.h>

@protocol SKUIJSApplication <JSExport>
@required
-(void)launchFailed;
-(void)launchComplete:(id)arg1;
-(void)sendDocumentMessage:(id)arg1 :(id)arg2 :(id)arg3;

@end


@class SKUIApplicationController;

@interface SKUIJSApplication : IKJSApplication <SKUIJSApplication> {

	SKUIApplicationController* _applicationController;

}

@property (nonatomic,__weak,readonly) SKUIApplicationController * applicationController;              //@synthesize applicationController=_applicationController - In the implementation block
-(SKUIApplicationController *)applicationController;
-(void)launchFailed;
-(void)launchComplete:(id)arg1 ;
-(void)sendDocumentMessage:(id)arg1 :(id)arg2 :(id)arg3 ;
-(id)initWithAppContext:(id)arg1 applicationController:(id)arg2 ;
@end
