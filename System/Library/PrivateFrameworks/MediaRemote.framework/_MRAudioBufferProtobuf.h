/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, _MRAudioFormatSettingsProtobuf, NSMutableArray;

@interface _MRAudioBufferProtobuf : PBCodable <NSCopying> {

	long long _maximumPacketSize;
	long long _packetCapacity;
	long long _packetCount;
	NSData* _contents;
	_MRAudioFormatSettingsProtobuf* _formatSettings;
	NSMutableArray* _packetDescriptions;
	SCD_Struct_MR12 _has;

}

@property (nonatomic,readonly) BOOL hasFormatSettings; 
@property (nonatomic,retain) _MRAudioFormatSettingsProtobuf * formatSettings;              //@synthesize formatSettings=_formatSettings - In the implementation block
@property (assign,nonatomic) BOOL hasPacketCapacity; 
@property (assign,nonatomic) long long packetCapacity;                                     //@synthesize packetCapacity=_packetCapacity - In the implementation block
@property (assign,nonatomic) BOOL hasMaximumPacketSize; 
@property (assign,nonatomic) long long maximumPacketSize;                                  //@synthesize maximumPacketSize=_maximumPacketSize - In the implementation block
@property (assign,nonatomic) BOOL hasPacketCount; 
@property (assign,nonatomic) long long packetCount;                                        //@synthesize packetCount=_packetCount - In the implementation block
@property (nonatomic,readonly) BOOL hasContents; 
@property (nonatomic,retain) NSData * contents;                                            //@synthesize contents=_contents - In the implementation block
@property (nonatomic,retain) NSMutableArray * packetDescriptions;                          //@synthesize packetDescriptions=_packetDescriptions - In the implementation block
+(Class)packetDescriptionsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)contents;
-(void)setContents:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(_MRAudioFormatSettingsProtobuf *)formatSettings;
-(long long)packetCapacity;
-(void)setFormatSettings:(_MRAudioFormatSettingsProtobuf *)arg1 ;
-(void)setPacketDescriptions:(NSMutableArray *)arg1 ;
-(void)addPacketDescriptions:(id)arg1 ;
-(unsigned long long)packetDescriptionsCount;
-(void)clearPacketDescriptions;
-(id)packetDescriptionsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasFormatSettings;
-(void)setPacketCapacity:(long long)arg1 ;
-(void)setHasPacketCapacity:(BOOL)arg1 ;
-(BOOL)hasPacketCapacity;
-(void)setMaximumPacketSize:(long long)arg1 ;
-(void)setHasMaximumPacketSize:(BOOL)arg1 ;
-(BOOL)hasMaximumPacketSize;
-(void)setHasPacketCount:(BOOL)arg1 ;
-(BOOL)hasPacketCount;
-(BOOL)hasContents;
-(long long)maximumPacketSize;
-(long long)packetCount;
-(void)setPacketCount:(long long)arg1 ;
-(NSMutableArray *)packetDescriptions;
@end

