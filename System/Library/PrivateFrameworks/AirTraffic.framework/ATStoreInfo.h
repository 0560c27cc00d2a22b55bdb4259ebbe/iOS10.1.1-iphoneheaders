/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSNumber, NSString, NSDictionary;

@interface ATStoreInfo : NSObject <NSSecureCoding> {

	NSMutableDictionary* _downloadDictionary;
	NSMutableDictionary* _assetDictionary;

}

@property (nonatomic,retain) NSNumber * adamID; 
@property (nonatomic,retain) NSNumber * DSID; 
@property (nonatomic,retain) NSNumber * collectionID; 
@property (nonatomic,retain) NSNumber * versionID; 
@property (nonatomic,retain) NSNumber * drmFree; 
@property (nonatomic,retain) NSNumber * sagaID; 
@property (nonatomic,retain) NSNumber * matchStatus; 
@property (nonatomic,retain) NSNumber * redownloadStatus; 
@property (nonatomic,retain) NSString * appleID; 
@property (nonatomic,retain) NSString * syncID; 
@property (nonatomic,retain) NSString * storefrontID; 
@property (nonatomic,retain) NSString * XID; 
@property (nonatomic,retain) NSString * flavor; 
@property (nonatomic,retain) NSString * dimensions; 
@property (nonatomic,retain) NSString * podcastEpisodeGUID; 
@property (nonatomic,retain) NSString * redownloadParams; 
@property (readonly) NSDictionary * downloadDictionary;                  //@synthesize downloadDictionary=_downloadDictionary - In the implementation block
@property (readonly) NSDictionary * assetDictionary;                     //@synthesize assetDictionary=_assetDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)podcastEpisodeGUID;
-(void)setPodcastEpisodeGUID:(NSString *)arg1 ;
-(NSString *)redownloadParams;
-(void)setDimensions:(NSString *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)dimensions;
-(NSDictionary *)downloadDictionary;
-(NSDictionary *)assetDictionary;
-(NSString *)flavor;
-(NSNumber *)matchStatus;
-(void)setCollectionID:(NSNumber *)arg1 ;
-(void)setXID:(NSString *)arg1 ;
-(NSString *)XID;
-(void)setSagaID:(NSNumber *)arg1 ;
-(NSNumber *)sagaID;
-(void)setMatchStatus:(NSNumber *)arg1 ;
-(void)setRedownloadStatus:(NSNumber *)arg1 ;
-(NSNumber *)redownloadStatus;
-(void)setRedownloadParams:(NSString *)arg1 ;
-(void)setDrmFree:(NSNumber *)arg1 ;
-(NSNumber *)drmFree;
-(NSNumber *)versionID;
-(NSNumber *)collectionID;
-(NSNumber *)DSID;
-(void)setAppleID:(NSString *)arg1 ;
-(NSString *)appleID;
-(NSNumber *)adamID;
-(void)setAdamID:(NSNumber *)arg1 ;
-(void)setSyncID:(NSString *)arg1 ;
-(NSString *)syncID;
-(void)setVersionID:(NSNumber *)arg1 ;
-(NSString *)storefrontID;
-(void)setStorefrontID:(NSString *)arg1 ;
-(void)setDSID:(NSNumber *)arg1 ;
-(void)setFlavor:(NSString *)arg1 ;
@end

