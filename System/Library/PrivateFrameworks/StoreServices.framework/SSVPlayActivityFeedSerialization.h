/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SSVPlayActivityFeedSerialization : NSObject {

	NSString* _currentStoreFrontID;

}

@property (nonatomic,copy) NSString * currentStoreFrontID;              //@synthesize currentStoreFrontID=_currentStoreFrontID - In the implementation block
+(id)defaultOverrideHTTPHeaderFields;
-(id)propertyListObjectWithPlayActivityEvent:(id)arg1 ;
-(void)setCurrentStoreFrontID:(NSString *)arg1 ;
-(NSString *)currentStoreFrontID;
@end

