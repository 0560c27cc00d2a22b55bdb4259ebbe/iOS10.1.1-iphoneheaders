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

@class NSMutableArray;

@interface NTPBNotificationEntity : PBCodable <NSCopying> {

	int _notificationType;
	int _subscriberType;
	NSMutableArray* _tagIds;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasNotificationType; 
@property (assign,nonatomic) int notificationType;                  //@synthesize notificationType=_notificationType - In the implementation block
@property (nonatomic,retain) NSMutableArray * tagIds;               //@synthesize tagIds=_tagIds - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriberType; 
@property (assign,nonatomic) int subscriberType;                    //@synthesize subscriberType=_subscriberType - In the implementation block
+(Class)tagIdType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)notificationType;
-(NSMutableArray *)tagIds;
-(void)setTagIds:(NSMutableArray *)arg1 ;
-(void)setNotificationType:(int)arg1 ;
-(void)setSubscriberType:(int)arg1 ;
-(void)addTagId:(id)arg1 ;
-(void)setHasNotificationType:(BOOL)arg1 ;
-(BOOL)hasNotificationType;
-(void)clearTagIds;
-(unsigned long long)tagIdsCount;
-(id)tagIdAtIndex:(unsigned long long)arg1 ;
-(int)subscriberType;
-(void)setHasSubscriberType:(BOOL)arg1 ;
-(BOOL)hasSubscriberType;
@end

