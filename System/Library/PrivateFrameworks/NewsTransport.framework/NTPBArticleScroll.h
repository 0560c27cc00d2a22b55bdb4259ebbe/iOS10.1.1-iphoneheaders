/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NTPBArticleScroll : PBCodable <NSCopying> {

	NSString* _articleId;
	NSData* _articleSessionId;
	NSData* _articleViewingSessionId;
	NSData* _feedViewExposureId;
	NSString* _referencedArticleId;
	int _scrollHostViewType;
	NSString* _scrollVelocity;
	float _scrollingVelocity;
	NSString* _sectionHeadlineId;
	NSString* _sourceChannelId;
	NSString* _verticalScrollPositionEnd;
	float _verticalScrollPositionEnding;
	NSString* _verticalScrollPositionStart;
	float _verticalScrollPositionStarting;
	BOOL _adSupportedChannel;
	SCD_Struct_NT6 _has;

}

@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;                      //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleSessionId; 
@property (nonatomic,retain) NSData * articleSessionId;                           //@synthesize articleSessionId=_articleSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                    //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                          //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasScrollHostViewType; 
@property (assign,nonatomic) int scrollHostViewType;                              //@synthesize scrollHostViewType=_scrollHostViewType - In the implementation block
@property (nonatomic,readonly) BOOL hasVerticalScrollPositionStart; 
@property (nonatomic,retain) NSString * verticalScrollPositionStart;              //@synthesize verticalScrollPositionStart=_verticalScrollPositionStart - In the implementation block
@property (nonatomic,readonly) BOOL hasVerticalScrollPositionEnd; 
@property (nonatomic,retain) NSString * verticalScrollPositionEnd;                //@synthesize verticalScrollPositionEnd=_verticalScrollPositionEnd - In the implementation block
@property (nonatomic,readonly) BOOL hasScrollVelocity; 
@property (nonatomic,retain) NSString * scrollVelocity;                           //@synthesize scrollVelocity=_scrollVelocity - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                         //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasAdSupportedChannel; 
@property (assign,nonatomic) BOOL adSupportedChannel;                             //@synthesize adSupportedChannel=_adSupportedChannel - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionHeadlineId; 
@property (nonatomic,retain) NSString * sectionHeadlineId;                        //@synthesize sectionHeadlineId=_sectionHeadlineId - In the implementation block
@property (assign,nonatomic) BOOL hasVerticalScrollPositionStarting; 
@property (assign,nonatomic) float verticalScrollPositionStarting;                //@synthesize verticalScrollPositionStarting=_verticalScrollPositionStarting - In the implementation block
@property (assign,nonatomic) BOOL hasVerticalScrollPositionEnding; 
@property (assign,nonatomic) float verticalScrollPositionEnding;                  //@synthesize verticalScrollPositionEnding=_verticalScrollPositionEnding - In the implementation block
@property (assign,nonatomic) BOOL hasScrollingVelocity; 
@property (assign,nonatomic) float scrollingVelocity;                             //@synthesize scrollingVelocity=_scrollingVelocity - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(NSString *)articleId;
-(void)setArticleId:(NSString *)arg1 ;
-(NSString *)referencedArticleId;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(void)setArticleSessionId:(NSData *)arg1 ;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(BOOL)hasArticleId;
-(BOOL)hasReferencedArticleId;
-(BOOL)hasSourceChannelId;
-(BOOL)hasArticleSessionId;
-(BOOL)hasArticleViewingSessionId;
-(BOOL)hasFeedViewExposureId;
-(NSString *)sourceChannelId;
-(NSData *)articleSessionId;
-(NSData *)articleViewingSessionId;
-(NSData *)feedViewExposureId;
-(void)setSectionHeadlineId:(NSString *)arg1 ;
-(void)setAdSupportedChannel:(BOOL)arg1 ;
-(void)setHasAdSupportedChannel:(BOOL)arg1 ;
-(BOOL)hasAdSupportedChannel;
-(BOOL)hasSectionHeadlineId;
-(BOOL)adSupportedChannel;
-(NSString *)sectionHeadlineId;
-(void)setVerticalScrollPositionStart:(NSString *)arg1 ;
-(void)setVerticalScrollPositionEnd:(NSString *)arg1 ;
-(void)setScrollVelocity:(NSString *)arg1 ;
-(int)scrollHostViewType;
-(void)setScrollHostViewType:(int)arg1 ;
-(void)setHasScrollHostViewType:(BOOL)arg1 ;
-(BOOL)hasScrollHostViewType;
-(BOOL)hasVerticalScrollPositionStart;
-(BOOL)hasVerticalScrollPositionEnd;
-(BOOL)hasScrollVelocity;
-(void)setVerticalScrollPositionStarting:(float)arg1 ;
-(void)setHasVerticalScrollPositionStarting:(BOOL)arg1 ;
-(BOOL)hasVerticalScrollPositionStarting;
-(void)setVerticalScrollPositionEnding:(float)arg1 ;
-(void)setHasVerticalScrollPositionEnding:(BOOL)arg1 ;
-(BOOL)hasVerticalScrollPositionEnding;
-(void)setScrollingVelocity:(float)arg1 ;
-(void)setHasScrollingVelocity:(BOOL)arg1 ;
-(BOOL)hasScrollingVelocity;
-(NSString *)verticalScrollPositionStart;
-(NSString *)verticalScrollPositionEnd;
-(NSString *)scrollVelocity;
-(float)verticalScrollPositionStarting;
-(float)verticalScrollPositionEnding;
-(float)scrollingVelocity;
@end
