/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface SSVPBPlayActivityEvent : PBCodable <NSCopying> {

	unsigned long long _cloudPlaylistID;
	long long _containerAdamID;
	long long _equivalencySourceAdamID;
	double _eventDateTimestamp;
	double _eventSecondsFromGMT;
	unsigned long long _itemCloudID;
	double _itemDuration;
	double _itemEndTime;
	double _itemStartTime;
	long long _persistentID;
	long long _purchasedAdamID;
	long long _radioAdamID;
	long long _stationID;
	unsigned long long _storeAccountID;
	long long _subscriptionAdamID;
	NSString* _buildVersion;
	NSString* _cloudAlbumID;
	NSString* _containerID;
	int _containerType;
	NSString* _deviceName;
	int _endReasonType;
	int _eventType;
	NSString* _externalID;
	NSString* _featureName;
	NSString* _globalPlaylistID;
	int _itemType;
	NSString* _lyricsID;
	int _mediaType;
	NSString* _personalizedContainerID;
	NSString* _playlistVersionHash;
	int _reasonHintType;
	NSData* _recommendationData;
	NSString* _requestingBundleIdentifier;
	NSString* _requestingBundleVersion;
	int _sourceType;
	NSString* _stationHash;
	NSString* _stationStringID;
	NSString* _storeFrontID;
	NSString* _storeID;
	NSData* _timedMetadata;
	NSData* _trackInfo;
	BOOL _offline;
	BOOL _sBEnabled;
	SCD_Struct_SS19 _has;

}

@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType;                                      //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) BOOL hasReasonHintType; 
@property (assign,nonatomic) int reasonHintType;                                 //@synthesize reasonHintType=_reasonHintType - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionAdamID; 
@property (assign,nonatomic) long long subscriptionAdamID;                       //@synthesize subscriptionAdamID=_subscriptionAdamID - In the implementation block
@property (assign,nonatomic) BOOL hasPurchasedAdamID; 
@property (assign,nonatomic) long long purchasedAdamID;                          //@synthesize purchasedAdamID=_purchasedAdamID - In the implementation block
@property (assign,nonatomic) BOOL hasRadioAdamID; 
@property (assign,nonatomic) long long radioAdamID;                              //@synthesize radioAdamID=_radioAdamID - In the implementation block
@property (assign,nonatomic) BOOL hasItemCloudID; 
@property (assign,nonatomic) unsigned long long itemCloudID;                     //@synthesize itemCloudID=_itemCloudID - In the implementation block
@property (nonatomic,readonly) BOOL hasLyricsID; 
@property (nonatomic,retain) NSString * lyricsID;                                //@synthesize lyricsID=_lyricsID - In the implementation block
@property (assign,nonatomic) BOOL hasEquivalencySourceAdamID; 
@property (assign,nonatomic) long long equivalencySourceAdamID;                  //@synthesize equivalencySourceAdamID=_equivalencySourceAdamID - In the implementation block
@property (assign,nonatomic) BOOL hasContainerAdamID; 
@property (assign,nonatomic) long long containerAdamID;                          //@synthesize containerAdamID=_containerAdamID - In the implementation block
@property (nonatomic,readonly) BOOL hasGlobalPlaylistID; 
@property (nonatomic,retain) NSString * globalPlaylistID;                        //@synthesize globalPlaylistID=_globalPlaylistID - In the implementation block
@property (nonatomic,readonly) BOOL hasStationHash; 
@property (nonatomic,retain) NSString * stationHash;                             //@synthesize stationHash=_stationHash - In the implementation block
@property (nonatomic,readonly) BOOL hasStationStringID; 
@property (nonatomic,retain) NSString * stationStringID;                         //@synthesize stationStringID=_stationStringID - In the implementation block
@property (assign,nonatomic) BOOL hasStationID; 
@property (assign,nonatomic) long long stationID;                                //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudAlbumID; 
@property (nonatomic,retain) NSString * cloudAlbumID;                            //@synthesize cloudAlbumID=_cloudAlbumID - In the implementation block
@property (assign,nonatomic) BOOL hasCloudPlaylistID; 
@property (assign,nonatomic) unsigned long long cloudPlaylistID;                 //@synthesize cloudPlaylistID=_cloudPlaylistID - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaylistVersionHash; 
@property (nonatomic,retain) NSString * playlistVersionHash;                     //@synthesize playlistVersionHash=_playlistVersionHash - In the implementation block
@property (assign,nonatomic) BOOL hasContainerType; 
@property (assign,nonatomic) int containerType;                                  //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                              //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) BOOL hasEndReasonType; 
@property (assign,nonatomic) int endReasonType;                                  //@synthesize endReasonType=_endReasonType - In the implementation block
@property (assign,nonatomic) BOOL hasEventDateTimestamp; 
@property (assign,nonatomic) double eventDateTimestamp;                          //@synthesize eventDateTimestamp=_eventDateTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEventSecondsFromGMT; 
@property (assign,nonatomic) double eventSecondsFromGMT;                         //@synthesize eventSecondsFromGMT=_eventSecondsFromGMT - In the implementation block
@property (nonatomic,readonly) BOOL hasFeatureName; 
@property (nonatomic,retain) NSString * featureName;                             //@synthesize featureName=_featureName - In the implementation block
@property (assign,nonatomic) BOOL hasItemDuration; 
@property (assign,nonatomic) double itemDuration;                                //@synthesize itemDuration=_itemDuration - In the implementation block
@property (assign,nonatomic) BOOL hasItemEndTime; 
@property (assign,nonatomic) double itemEndTime;                                 //@synthesize itemEndTime=_itemEndTime - In the implementation block
@property (assign,nonatomic) BOOL hasItemStartTime; 
@property (assign,nonatomic) double itemStartTime;                               //@synthesize itemStartTime=_itemStartTime - In the implementation block
@property (assign,nonatomic) BOOL hasItemType; 
@property (assign,nonatomic) int itemType;                                       //@synthesize itemType=_itemType - In the implementation block
@property (assign,nonatomic) BOOL hasMediaType; 
@property (assign,nonatomic) int mediaType;                                      //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) BOOL hasOffline; 
@property (assign,nonatomic) BOOL offline;                                       //@synthesize offline=_offline - In the implementation block
@property (assign,nonatomic) BOOL hasPersistentID; 
@property (assign,nonatomic) long long persistentID;                             //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) BOOL hasSBEnabled; 
@property (assign,nonatomic) BOOL sBEnabled;                                     //@synthesize sBEnabled=_sBEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasSourceType; 
@property (assign,nonatomic) int sourceType;                                     //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) BOOL hasStoreAccountID; 
@property (assign,nonatomic) unsigned long long storeAccountID;                  //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,readonly) BOOL hasTimedMetadata; 
@property (nonatomic,retain) NSData * timedMetadata;                             //@synthesize timedMetadata=_timedMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasTrackInfo; 
@property (nonatomic,retain) NSData * trackInfo;                                 //@synthesize trackInfo=_trackInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasRecommendationData; 
@property (nonatomic,retain) NSData * recommendationData;                        //@synthesize recommendationData=_recommendationData - In the implementation block
@property (nonatomic,readonly) BOOL hasStoreFrontID; 
@property (nonatomic,retain) NSString * storeFrontID;                            //@synthesize storeFrontID=_storeFrontID - In the implementation block
@property (nonatomic,readonly) BOOL hasBuildVersion; 
@property (nonatomic,retain) NSString * buildVersion;                            //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestingBundleIdentifier; 
@property (nonatomic,retain) NSString * requestingBundleIdentifier;              //@synthesize requestingBundleIdentifier=_requestingBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestingBundleVersion; 
@property (nonatomic,retain) NSString * requestingBundleVersion;                 //@synthesize requestingBundleVersion=_requestingBundleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasContainerID; 
@property (nonatomic,retain) NSString * containerID;                             //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,readonly) BOOL hasPersonalizedContainerID; 
@property (nonatomic,retain) NSString * personalizedContainerID;                 //@synthesize personalizedContainerID=_personalizedContainerID - In the implementation block
@property (nonatomic,readonly) BOOL hasStoreID; 
@property (nonatomic,retain) NSString * storeID;                                 //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalID; 
@property (nonatomic,retain) NSString * externalID;                              //@synthesize externalID=_externalID - In the implementation block
-(double)itemEndTime;
-(int)endReasonType;
-(double)itemDuration;
-(double)itemStartTime;
-(NSData *)trackInfo;
-(NSString *)personalizedContainerID;
-(int)reasonHintType;
-(long long)radioAdamID;
-(long long)subscriptionAdamID;
-(long long)purchasedAdamID;
-(NSString *)cloudAlbumID;
-(NSString *)playlistVersionHash;
-(unsigned long long)cloudPlaylistID;
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(BOOL)hasContainerType;
-(BOOL)hasEndReasonType;
-(BOOL)hasEventDateTimestamp;
-(double)eventDateTimestamp;
-(BOOL)hasEventSecondsFromGMT;
-(double)eventSecondsFromGMT;
-(BOOL)hasFeatureName;
-(BOOL)hasItemDuration;
-(BOOL)hasItemEndTime;
-(BOOL)hasItemStartTime;
-(BOOL)hasItemType;
-(BOOL)hasOffline;
-(BOOL)offline;
-(BOOL)hasPersistentID;
-(BOOL)hasRecommendationData;
-(BOOL)hasSBEnabled;
-(BOOL)sBEnabled;
-(BOOL)hasStoreAccountID;
-(BOOL)hasStoreFrontID;
-(BOOL)hasTimedMetadata;
-(BOOL)hasTrackInfo;
-(BOOL)hasReasonHintType;
-(BOOL)hasBuildVersion;
-(BOOL)hasRequestingBundleVersion;
-(BOOL)hasRequestingBundleIdentifier;
-(BOOL)hasContainerID;
-(BOOL)hasExternalID;
-(BOOL)hasPersonalizedContainerID;
-(BOOL)hasStoreID;
-(BOOL)hasContainerAdamID;
-(long long)containerAdamID;
-(BOOL)hasGlobalPlaylistID;
-(BOOL)hasPlaylistVersionHash;
-(void)setPlaylistVersionHash:(NSString *)arg1 ;
-(BOOL)hasStationHash;
-(void)setStationHash:(NSString *)arg1 ;
-(BOOL)hasStationStringID;
-(void)setStationStringID:(NSString *)arg1 ;
-(BOOL)hasStationID;
-(void)setStationID:(long long)arg1 ;
-(BOOL)hasCloudAlbumID;
-(void)setCloudAlbumID:(NSString *)arg1 ;
-(BOOL)hasCloudPlaylistID;
-(void)setCloudPlaylistID:(unsigned long long)arg1 ;
-(BOOL)hasSubscriptionAdamID;
-(void)setSubscriptionAdamID:(long long)arg1 ;
-(BOOL)hasPurchasedAdamID;
-(void)setPurchasedAdamID:(long long)arg1 ;
-(BOOL)hasRadioAdamID;
-(void)setRadioAdamID:(long long)arg1 ;
-(BOOL)hasItemCloudID;
-(unsigned long long)itemCloudID;
-(BOOL)hasLyricsID;
-(BOOL)hasEquivalencySourceAdamID;
-(void)setEndReasonType:(int)arg1 ;
-(void)setEventDateTimestamp:(double)arg1 ;
-(void)setEventSecondsFromGMT:(double)arg1 ;
-(void)setFeatureName:(NSString *)arg1 ;
-(void)setItemDuration:(double)arg1 ;
-(void)setItemEndTime:(double)arg1 ;
-(void)setItemStartTime:(double)arg1 ;
-(void)setOffline:(BOOL)arg1 ;
-(void)setPersistentID:(long long)arg1 ;
-(void)setSBEnabled:(BOOL)arg1 ;
-(void)setTimedMetadata:(NSData *)arg1 ;
-(void)setTrackInfo:(NSData *)arg1 ;
-(void)setPersonalizedContainerID:(NSString *)arg1 ;
-(void)setReasonHintType:(int)arg1 ;
-(void)setContainerAdamID:(long long)arg1 ;
-(void)setItemCloudID:(unsigned long long)arg1 ;
-(void)setHasReasonHintType:(BOOL)arg1 ;
-(id)reasonHintTypeAsString:(int)arg1 ;
-(int)StringAsReasonHintType:(id)arg1 ;
-(void)setHasSubscriptionAdamID:(BOOL)arg1 ;
-(void)setHasPurchasedAdamID:(BOOL)arg1 ;
-(void)setHasRadioAdamID:(BOOL)arg1 ;
-(void)setHasItemCloudID:(BOOL)arg1 ;
-(void)setHasEquivalencySourceAdamID:(BOOL)arg1 ;
-(void)setHasContainerAdamID:(BOOL)arg1 ;
-(void)setHasStationID:(BOOL)arg1 ;
-(void)setHasCloudPlaylistID:(BOOL)arg1 ;
-(void)setHasContainerType:(BOOL)arg1 ;
-(id)containerTypeAsString:(int)arg1 ;
-(int)StringAsContainerType:(id)arg1 ;
-(void)setHasEndReasonType:(BOOL)arg1 ;
-(id)endReasonTypeAsString:(int)arg1 ;
-(int)StringAsEndReasonType:(id)arg1 ;
-(void)setHasEventDateTimestamp:(BOOL)arg1 ;
-(void)setHasEventSecondsFromGMT:(BOOL)arg1 ;
-(void)setHasItemDuration:(BOOL)arg1 ;
-(void)setHasItemEndTime:(BOOL)arg1 ;
-(void)setHasItemStartTime:(BOOL)arg1 ;
-(void)setHasItemType:(BOOL)arg1 ;
-(id)itemTypeAsString:(int)arg1 ;
-(int)StringAsItemType:(id)arg1 ;
-(void)setHasOffline:(BOOL)arg1 ;
-(void)setHasPersistentID:(BOOL)arg1 ;
-(void)setHasSBEnabled:(BOOL)arg1 ;
-(id)sourceTypeAsString:(int)arg1 ;
-(int)StringAsSourceType:(id)arg1 ;
-(void)setHasStoreAccountID:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)buildVersion;
-(id)dictionaryRepresentation;
-(int)sourceType;
-(void)setSourceType:(int)arg1 ;
-(int)eventType;
-(NSString *)containerID;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(long long)stationID;
-(int)itemType;
-(void)setEventType:(int)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)eventTypeAsString:(int)arg1 ;
-(int)StringAsEventType:(id)arg1 ;
-(NSData *)timedMetadata;
-(NSString *)requestingBundleIdentifier;
-(void)setRequestingBundleIdentifier:(NSString *)arg1 ;
-(NSString *)requestingBundleVersion;
-(void)setRequestingBundleVersion:(NSString *)arg1 ;
-(NSString *)stationStringID;
-(int)containerType;
-(void)setContainerType:(int)arg1 ;
-(unsigned long long)storeAccountID;
-(long long)equivalencySourceAdamID;
-(void)setEquivalencySourceAdamID:(long long)arg1 ;
-(NSString *)globalPlaylistID;
-(void)setGlobalPlaylistID:(NSString *)arg1 ;
-(void)setLyricsID:(NSString *)arg1 ;
-(NSString *)lyricsID;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalID;
-(NSString *)featureName;
-(NSString *)stationHash;
-(NSString *)storeID;
-(void)setStoreID:(NSString *)arg1 ;
-(void)setItemType:(int)arg1 ;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
-(long long)persistentID;
-(void)setDeviceName:(NSString *)arg1 ;
-(BOOL)hasDeviceName;
-(void)setContainerID:(NSString *)arg1 ;
-(void)setRecommendationData:(NSData *)arg1 ;
-(NSData *)recommendationData;
-(NSString *)storeFrontID;
-(void)setHasSourceType:(BOOL)arg1 ;
-(BOOL)hasSourceType;
-(NSString *)deviceName;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)setStoreFrontID:(NSString *)arg1 ;
-(void)setHasMediaType:(BOOL)arg1 ;
-(BOOL)hasMediaType;
-(id)mediaTypeAsString:(int)arg1 ;
-(int)StringAsMediaType:(id)arg1 ;
@end

