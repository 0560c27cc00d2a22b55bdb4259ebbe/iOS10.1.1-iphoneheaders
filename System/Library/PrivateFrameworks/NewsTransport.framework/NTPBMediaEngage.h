/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray;

@interface NTPBMediaEngage : PBCodable <NSCopying> {

	long long _mediaPausePosition;
	long long _mediaResumePosition;
	long long _mediaResumeTimePlayed;
	long long _mediaTimePlayed;
	long long _personalizationTreatmentId;
	NSString* _articleId;
	NSData* _articleSessionId;
	int _articleType;
	NSData* _articleViewingSessionId;
	int _backendArticleVersion;
	int _feedCellSection;
	NSString* _feedId;
	int _feedType;
	NSData* _feedViewExposureId;
	NSString* _mediaId;
	int _mediaPauseLocation;
	int _mediaPauseMethod;
	int _mediaPlayLocation;
	int _mediaPlayMethod;
	int _mediaResumeMethod;
	int _mediaType;
	NSMutableArray* _namedEntities;
	int _publisherArticleVersion;
	NSString* _referencedArticleId;
	NSString* _sectionHeadlineId;
	NSString* _sourceChannelId;
	NSString* _surfacedByChannelId;
	NSString* _surfacedBySectionId;
	NSString* _surfacedByTopicId;
	int _userAction;
	BOOL _adSupportedChannel;
	BOOL _isDigitalReplicaAd;
	BOOL _isUserSubscribedToFeed;
	BOOL _isVideoInFeed;
	SCD_Struct_NT9 _has;

}

@property (assign,nonatomic) BOOL hasMediaType; 
@property (assign,nonatomic) int mediaType;                                     //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) BOOL hasMediaId; 
@property (nonatomic,retain) NSString * mediaId;                                //@synthesize mediaId=_mediaId - In the implementation block
@property (assign,nonatomic) BOOL hasMediaTimePlayed; 
@property (assign,nonatomic) long long mediaTimePlayed;                         //@synthesize mediaTimePlayed=_mediaTimePlayed - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                              //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;                    //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleSessionId; 
@property (nonatomic,retain) NSData * articleSessionId;                         //@synthesize articleSessionId=_articleSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                  //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                        //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasMediaPlayMethod; 
@property (assign,nonatomic) int mediaPlayMethod;                               //@synthesize mediaPlayMethod=_mediaPlayMethod - In the implementation block
@property (assign,nonatomic) BOOL hasMediaPauseMethod; 
@property (assign,nonatomic) int mediaPauseMethod;                              //@synthesize mediaPauseMethod=_mediaPauseMethod - In the implementation block
@property (assign,nonatomic) BOOL hasMediaPausePosition; 
@property (assign,nonatomic) long long mediaPausePosition;                      //@synthesize mediaPausePosition=_mediaPausePosition - In the implementation block
@property (assign,nonatomic) BOOL hasMediaResumeTimePlayed; 
@property (assign,nonatomic) long long mediaResumeTimePlayed;                   //@synthesize mediaResumeTimePlayed=_mediaResumeTimePlayed - In the implementation block
@property (assign,nonatomic) BOOL hasMediaResumeMethod; 
@property (assign,nonatomic) int mediaResumeMethod;                             //@synthesize mediaResumeMethod=_mediaResumeMethod - In the implementation block
@property (assign,nonatomic) BOOL hasMediaResumePosition; 
@property (assign,nonatomic) long long mediaResumePosition;                     //@synthesize mediaResumePosition=_mediaResumePosition - In the implementation block
@property (assign,nonatomic) BOOL hasMediaPlayLocation; 
@property (assign,nonatomic) int mediaPlayLocation;                             //@synthesize mediaPlayLocation=_mediaPlayLocation - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                      //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                                 //@synthesize feedId=_feedId - In the implementation block
@property (assign,nonatomic) BOOL hasFeedCellSection; 
@property (assign,nonatomic) int feedCellSection;                               //@synthesize feedCellSection=_feedCellSection - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                       //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserSubscribedToFeed; 
@property (assign,nonatomic) BOOL isUserSubscribedToFeed;                       //@synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed - In the implementation block
@property (assign,nonatomic) BOOL hasArticleType; 
@property (assign,nonatomic) int articleType;                                   //@synthesize articleType=_articleType - In the implementation block
@property (nonatomic,retain) NSMutableArray * namedEntities;                    //@synthesize namedEntities=_namedEntities - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersion; 
@property (assign,nonatomic) int publisherArticleVersion;                       //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersion; 
@property (assign,nonatomic) int backendArticleVersion;                         //@synthesize backendArticleVersion=_backendArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasAdSupportedChannel; 
@property (assign,nonatomic) BOOL adSupportedChannel;                           //@synthesize adSupportedChannel=_adSupportedChannel - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByChannelId; 
@property (nonatomic,retain) NSString * surfacedByChannelId;                    //@synthesize surfacedByChannelId=_surfacedByChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedBySectionId; 
@property (nonatomic,retain) NSString * surfacedBySectionId;                    //@synthesize surfacedBySectionId=_surfacedBySectionId - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByTopicId; 
@property (nonatomic,retain) NSString * surfacedByTopicId;                      //@synthesize surfacedByTopicId=_surfacedByTopicId - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionHeadlineId; 
@property (nonatomic,retain) NSString * sectionHeadlineId;                      //@synthesize sectionHeadlineId=_sectionHeadlineId - In the implementation block
@property (assign,nonatomic) BOOL hasIsDigitalReplicaAd; 
@property (assign,nonatomic) BOOL isDigitalReplicaAd;                           //@synthesize isDigitalReplicaAd=_isDigitalReplicaAd - In the implementation block
@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                    //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideoInFeed; 
@property (assign,nonatomic) BOOL isVideoInFeed;                                //@synthesize isVideoInFeed=_isVideoInFeed - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalizationTreatmentId; 
@property (assign,nonatomic) long long personalizationTreatmentId;              //@synthesize personalizationTreatmentId=_personalizationTreatmentId - In the implementation block
@property (assign,nonatomic) BOOL hasMediaPauseLocation; 
@property (assign,nonatomic) int mediaPauseLocation;                            //@synthesize mediaPauseLocation=_mediaPauseLocation - In the implementation block
+(Class)namedEntitiesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasFeedId;
-(NSString *)feedId;
-(void)setFeedId:(NSString *)arg1 ;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
-(int)feedType;
-(void)setFeedType:(int)arg1 ;
-(int)publisherArticleVersion;
-(int)backendArticleVersion;
-(void)setPublisherArticleVersion:(int)arg1 ;
-(void)setBackendArticleVersion:(int)arg1 ;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(NSString *)articleId;
-(void)setArticleId:(NSString *)arg1 ;
-(NSString *)referencedArticleId;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(void)setArticleSessionId:(NSData *)arg1 ;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(int)userAction;
-(void)setUserAction:(int)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(BOOL)hasUserAction;
-(BOOL)hasArticleId;
-(BOOL)hasReferencedArticleId;
-(BOOL)hasSourceChannelId;
-(void)setHasFeedType:(BOOL)arg1 ;
-(BOOL)hasFeedType;
-(id)feedTypeAsString:(int)arg1 ;
-(int)StringAsFeedType:(id)arg1 ;
-(void)setIsUserSubscribedToFeed:(BOOL)arg1 ;
-(void)setHasIsUserSubscribedToFeed:(BOOL)arg1 ;
-(BOOL)hasIsUserSubscribedToFeed;
-(BOOL)hasArticleSessionId;
-(BOOL)hasArticleViewingSessionId;
-(BOOL)hasFeedViewExposureId;
-(NSString *)sourceChannelId;
-(BOOL)isUserSubscribedToFeed;
-(NSData *)articleSessionId;
-(NSData *)articleViewingSessionId;
-(NSData *)feedViewExposureId;
-(void)addNamedEntities:(id)arg1 ;
-(void)setMediaId:(NSString *)arg1 ;
-(void)setSurfacedByChannelId:(NSString *)arg1 ;
-(void)setSurfacedBySectionId:(NSString *)arg1 ;
-(void)setSurfacedByTopicId:(NSString *)arg1 ;
-(void)setSectionHeadlineId:(NSString *)arg1 ;
-(void)setHasMediaType:(BOOL)arg1 ;
-(BOOL)hasMediaType;
-(id)mediaTypeAsString:(int)arg1 ;
-(int)StringAsMediaType:(id)arg1 ;
-(BOOL)hasMediaId;
-(int)feedCellSection;
-(void)setFeedCellSection:(int)arg1 ;
-(void)setHasFeedCellSection:(BOOL)arg1 ;
-(BOOL)hasFeedCellSection;
-(id)feedCellSectionAsString:(int)arg1 ;
-(int)StringAsFeedCellSection:(id)arg1 ;
-(int)articleType;
-(void)setArticleType:(int)arg1 ;
-(void)setHasArticleType:(BOOL)arg1 ;
-(BOOL)hasArticleType;
-(id)articleTypeAsString:(int)arg1 ;
-(int)StringAsArticleType:(id)arg1 ;
-(void)clearNamedEntities;
-(unsigned long long)namedEntitiesCount;
-(id)namedEntitiesAtIndex:(unsigned long long)arg1 ;
-(void)setHasPublisherArticleVersion:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersion;
-(void)setHasBackendArticleVersion:(BOOL)arg1 ;
-(BOOL)hasBackendArticleVersion;
-(void)setAdSupportedChannel:(BOOL)arg1 ;
-(void)setHasAdSupportedChannel:(BOOL)arg1 ;
-(BOOL)hasAdSupportedChannel;
-(BOOL)hasSurfacedByChannelId;
-(BOOL)hasSurfacedBySectionId;
-(BOOL)hasSurfacedByTopicId;
-(BOOL)hasSectionHeadlineId;
-(void)setIsDigitalReplicaAd:(BOOL)arg1 ;
-(void)setHasIsDigitalReplicaAd:(BOOL)arg1 ;
-(BOOL)hasIsDigitalReplicaAd;
-(void)setPersonalizationTreatmentId:(long long)arg1 ;
-(void)setHasPersonalizationTreatmentId:(BOOL)arg1 ;
-(BOOL)hasPersonalizationTreatmentId;
-(NSString *)mediaId;
-(NSMutableArray *)namedEntities;
-(void)setNamedEntities:(NSMutableArray *)arg1 ;
-(BOOL)adSupportedChannel;
-(NSString *)surfacedByChannelId;
-(NSString *)surfacedBySectionId;
-(NSString *)surfacedByTopicId;
-(NSString *)sectionHeadlineId;
-(BOOL)isDigitalReplicaAd;
-(long long)personalizationTreatmentId;
-(void)setIsVideoInFeed:(BOOL)arg1 ;
-(void)setHasIsVideoInFeed:(BOOL)arg1 ;
-(BOOL)hasIsVideoInFeed;
-(BOOL)isVideoInFeed;
-(int)mediaPlayLocation;
-(void)setMediaPlayLocation:(int)arg1 ;
-(void)setHasMediaPlayLocation:(BOOL)arg1 ;
-(BOOL)hasMediaPlayLocation;
-(void)setMediaTimePlayed:(long long)arg1 ;
-(void)setHasMediaTimePlayed:(BOOL)arg1 ;
-(BOOL)hasMediaTimePlayed;
-(long long)mediaTimePlayed;
-(int)mediaPlayMethod;
-(void)setMediaPlayMethod:(int)arg1 ;
-(void)setHasMediaPlayMethod:(BOOL)arg1 ;
-(BOOL)hasMediaPlayMethod;
-(int)mediaPauseMethod;
-(void)setMediaPauseMethod:(int)arg1 ;
-(void)setHasMediaPauseMethod:(BOOL)arg1 ;
-(BOOL)hasMediaPauseMethod;
-(void)setMediaPausePosition:(long long)arg1 ;
-(void)setHasMediaPausePosition:(BOOL)arg1 ;
-(BOOL)hasMediaPausePosition;
-(void)setMediaResumeTimePlayed:(long long)arg1 ;
-(void)setHasMediaResumeTimePlayed:(BOOL)arg1 ;
-(BOOL)hasMediaResumeTimePlayed;
-(int)mediaResumeMethod;
-(void)setMediaResumeMethod:(int)arg1 ;
-(void)setHasMediaResumeMethod:(BOOL)arg1 ;
-(BOOL)hasMediaResumeMethod;
-(void)setMediaResumePosition:(long long)arg1 ;
-(void)setHasMediaResumePosition:(BOOL)arg1 ;
-(BOOL)hasMediaResumePosition;
-(int)mediaPauseLocation;
-(void)setMediaPauseLocation:(int)arg1 ;
-(void)setHasMediaPauseLocation:(BOOL)arg1 ;
-(BOOL)hasMediaPauseLocation;
-(long long)mediaPausePosition;
-(long long)mediaResumeTimePlayed;
-(long long)mediaResumePosition;
@end

