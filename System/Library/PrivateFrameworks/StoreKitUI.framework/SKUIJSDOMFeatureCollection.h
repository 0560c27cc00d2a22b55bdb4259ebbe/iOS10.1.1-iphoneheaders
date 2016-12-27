/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSDOMFeatureCollection.h>

@protocol SKUIJSDOMFeatureCollection <JSExport>
@required
-(void)setEditing:(BOOL)arg1 :(id)arg2;

@end


@protocol SKUIJSDOMFeatureCollectionAppBridge;
@interface SKUIJSDOMFeatureCollection : IKJSObject <SKUIJSDOMFeatureCollection> {

	id<SKUIJSDOMFeatureCollectionAppBridge> _appBridge;

}

@property (assign,nonatomic,__weak) id<SKUIJSDOMFeatureCollectionAppBridge> appBridge;              //@synthesize appBridge=_appBridge - In the implementation block
-(void)setAppBridge:(id<SKUIJSDOMFeatureCollectionAppBridge>)arg1 ;
-(void)setEditing:(BOOL)arg1 :(id)arg2 ;
-(id<SKUIJSDOMFeatureCollectionAppBridge>)appBridge;
@end

