/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SimDevice, NSString;

@interface OSLogDevice : NSObject {

	long long _devType;
	void* _mobDev;
	SimDevice* _simDev;
	NSString* _uid;

}

@property (assign) long long devType;               //@synthesize devType=_devType - In the implementation block
@property (assign) void* mobDev;                    //@synthesize mobDev=_mobDev - In the implementation block
@property (retain) SimDevice * simDev;              //@synthesize simDev=_simDev - In the implementation block
@property (retain) NSString * uid;                  //@synthesize uid=_uid - In the implementation block
-(id)init;
-(id)description;
-(NSString *)uid;
-(void)setUid:(NSString *)arg1 ;
-(long long)devType;
-(void*)mobDev;
-(SimDevice *)simDev;
-(id)initWithMobileDevice:(void*)arg1 andID:(id)arg2 ;
-(id)initWithSimualatedDevice:(id)arg1 ;
-(void)setDevType:(long long)arg1 ;
-(void)setMobDev:(void*)arg1 ;
-(void)setSimDev:(SimDevice *)arg1 ;
@end

