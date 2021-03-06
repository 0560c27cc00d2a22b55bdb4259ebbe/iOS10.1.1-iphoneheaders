/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HMVendorModelEntry : NSObject {

	NSString* _modelName;
	NSString* _appBundleID;
	NSString* _appStoreID;
	NSString* _manufacturer;

}

@property (nonatomic,readonly) NSString * modelName;                 //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,readonly) NSString * appBundleID;               //@synthesize appBundleID=_appBundleID - In the implementation block
@property (nonatomic,readonly) NSString * appStoreID;                //@synthesize appStoreID=_appStoreID - In the implementation block
@property (nonatomic,readonly) NSString * manufacturer;              //@synthesize manufacturer=_manufacturer - In the implementation block
-(NSString *)appBundleID;
-(id)description;
-(NSString *)modelName;
-(NSString *)manufacturer;
-(NSString *)appStoreID;
-(id)initWithModelName:(id)arg1 appBundleID:(id)arg2 appStoreID:(id)arg3 manufacturer:(id)arg4 ;
@end

