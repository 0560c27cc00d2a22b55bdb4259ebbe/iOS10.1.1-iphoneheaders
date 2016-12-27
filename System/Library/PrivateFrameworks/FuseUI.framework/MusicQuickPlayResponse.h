/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSDictionary;

@interface MusicQuickPlayResponse : NSObject {

	long long _containerType;
	NSString* _containerID;
	NSData* _recommendationData;
	NSDictionary* _storePlatformDictionary;

}

@property (assign,nonatomic) long long containerType;                             //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,retain) NSString * containerID;                              //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,retain) NSData * recommendationData;                         //@synthesize recommendationData=_recommendationData - In the implementation block
@property (nonatomic,retain) NSDictionary * storePlatformDictionary;              //@synthesize storePlatformDictionary=_storePlatformDictionary - In the implementation block
-(NSString *)containerID;
-(long long)containerType;
-(void)setContainerType:(long long)arg1 ;
-(NSDictionary *)storePlatformDictionary;
-(void)setStorePlatformDictionary:(NSDictionary *)arg1 ;
-(void)setContainerID:(NSString *)arg1 ;
-(void)setRecommendationData:(NSData *)arg1 ;
-(NSData *)recommendationData;
-(id)initWithStoreDictionary:(id)arg1 ;
-(id)createPlaybackContext;
@end

