/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ETPVideo : PBCodable <NSCopying> {

	NSData* _introMessageData;
	int _mediaType;
	NSData* _playingMessagesData;
	SCD_Struct_ET18 _has;

}

@property (nonatomic,readonly) BOOL hasIntroMessageData; 
@property (nonatomic,retain) NSData * introMessageData;                  //@synthesize introMessageData=_introMessageData - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayingMessagesData; 
@property (nonatomic,retain) NSData * playingMessagesData;               //@synthesize playingMessagesData=_playingMessagesData - In the implementation block
@property (assign,nonatomic) BOOL hasMediaType; 
@property (assign,nonatomic) int mediaType;                              //@synthesize mediaType=_mediaType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
-(void)setHasMediaType:(BOOL)arg1 ;
-(BOOL)hasMediaType;
-(id)mediaTypeAsString:(int)arg1 ;
-(int)StringAsMediaType:(id)arg1 ;
-(NSData *)introMessageData;
-(NSData *)playingMessagesData;
-(void)setIntroMessageData:(NSData *)arg1 ;
-(void)setPlayingMessagesData:(NSData *)arg1 ;
-(BOOL)hasIntroMessageData;
-(BOOL)hasPlayingMessagesData;
@end

