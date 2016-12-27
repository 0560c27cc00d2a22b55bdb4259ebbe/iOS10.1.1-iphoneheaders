/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface _MPStoreFollow : NSObject {

	NSNumber* _targetEntityId;
	long long _targetEntityType;

}

@property (nonatomic,retain) NSNumber * targetEntityId;               //@synthesize targetEntityId=_targetEntityId - In the implementation block
@property (assign,nonatomic) long long targetEntityType;              //@synthesize targetEntityType=_targetEntityType - In the implementation block
+(id)followWithPerson:(id)arg1 ;
+(id)followWithStoreDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSNumber *)targetEntityId;
-(void)setTargetEntityId:(NSNumber *)arg1 ;
-(void)setTargetEntityType:(long long)arg1 ;
-(long long)targetEntityType;
@end
