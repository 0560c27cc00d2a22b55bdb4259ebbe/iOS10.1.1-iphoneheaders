/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRSendButtonEventMessageProtobuf : PBCodable <NSCopying> {

	unsigned _usage;
	unsigned _usagePage;
	BOOL _buttonDown;
	SCD_Struct_MR12 _has;

}

@property (assign,nonatomic) BOOL hasUsagePage; 
@property (assign,nonatomic) unsigned usagePage;              //@synthesize usagePage=_usagePage - In the implementation block
@property (assign,nonatomic) BOOL hasUsage; 
@property (assign,nonatomic) unsigned usage;                  //@synthesize usage=_usage - In the implementation block
@property (assign,nonatomic) BOOL hasButtonDown; 
@property (assign,nonatomic) BOOL buttonDown;                 //@synthesize buttonDown=_buttonDown - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)usage;
-(void)setUsage:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setButtonDown:(BOOL)arg1 ;
-(BOOL)buttonDown;
-(void)setHasUsagePage:(BOOL)arg1 ;
-(BOOL)hasUsagePage;
-(void)setHasUsage:(BOOL)arg1 ;
-(BOOL)hasUsage;
-(void)setHasButtonDown:(BOOL)arg1 ;
-(BOOL)hasButtonDown;
-(void)setUsagePage:(unsigned)arg1 ;
-(unsigned)usagePage;
@end

