/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HMBulletinObjectTuple : NSObject {

	NSString* _queryName;
	NSString* _uuidString;

}

@property (nonatomic,readonly) NSString * queryName;               //@synthesize queryName=_queryName - In the implementation block
@property (nonatomic,readonly) NSString * uuidString;              //@synthesize uuidString=_uuidString - In the implementation block
+(id)tupleWithQueryType:(long long)arg1 uuidString:(id)arg2 ;
-(NSString *)queryName;
-(NSString *)uuidString;
-(id)initWithQueryType:(long long)arg1 uuidString:(id)arg2 ;
@end

