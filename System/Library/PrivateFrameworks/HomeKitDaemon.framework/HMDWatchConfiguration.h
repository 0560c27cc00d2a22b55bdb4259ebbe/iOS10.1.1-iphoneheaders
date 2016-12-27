/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSUUID;

@interface HMDWatchConfiguration : NSObject {

	NSString* _uniqueId;
	NSDictionary* _metadataConfig;
	NSDictionary* _homeConfig;
	NSUUID* _primaryHome;

}

@property (nonatomic,retain) NSString * uniqueId;                        //@synthesize uniqueId=_uniqueId - In the implementation block
@property (nonatomic,retain) NSDictionary * metadataConfig;              //@synthesize metadataConfig=_metadataConfig - In the implementation block
@property (nonatomic,retain) NSDictionary * homeConfig;                  //@synthesize homeConfig=_homeConfig - In the implementation block
@property (nonatomic,retain) NSUUID * primaryHome;                       //@synthesize primaryHome=_primaryHome - In the implementation block
-(id)description;
-(NSString *)uniqueId;
-(NSDictionary *)metadataConfig;
-(NSDictionary *)homeConfig;
-(void)setHomeConfig:(NSDictionary *)arg1 ;
-(id)initWithUniqueID:(id)arg1 ;
-(void)setHomeConfiguration:(id)arg1 ;
-(void)setConfigVersion:(id)arg1 forHome:(id)arg2 ;
-(void)setUniqueId:(NSString *)arg1 ;
-(void)setMetadataConfig:(NSDictionary *)arg1 ;
-(NSUUID *)primaryHome;
-(void)setPrimaryHome:(NSUUID *)arg1 ;
@end

