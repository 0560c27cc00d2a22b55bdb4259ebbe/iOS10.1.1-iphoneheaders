/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface SPProtoAudioFileQueuePlayerSetItems : PBCodable <NSCopying> {

	NSString* _identifier;
	NSMutableArray* _playerItemIdentifiers;

}

@property (nonatomic,retain) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * playerItemIdentifiers;              //@synthesize playerItemIdentifiers=_playerItemIdentifiers - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addPlayerItemIdentifiers:(id)arg1 ;
-(unsigned long long)playerItemIdentifiersCount;
-(void)clearPlayerItemIdentifiers;
-(id)playerItemIdentifiersAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)playerItemIdentifiers;
-(void)setPlayerItemIdentifiers:(NSMutableArray *)arg1 ;
-(id)sockPuppetMessage;
@end

