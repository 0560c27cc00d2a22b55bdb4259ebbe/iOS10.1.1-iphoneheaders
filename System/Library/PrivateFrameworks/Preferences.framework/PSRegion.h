/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PSRegion : NSObject {

	NSString* _regionName;
	NSString* _regionCode;

}

@property (nonatomic,retain) NSString * regionName;              //@synthesize regionName=_regionName - In the implementation block
@property (nonatomic,retain) NSString * regionCode;              //@synthesize regionCode=_regionCode - In the implementation block
+(id)regionWithName:(id)arg1 code:(id)arg2 ;
-(void)setRegionName:(NSString *)arg1 ;
-(NSString *)regionName;
-(void)setRegionCode:(NSString *)arg1 ;
-(NSString *)regionCode;
@end
