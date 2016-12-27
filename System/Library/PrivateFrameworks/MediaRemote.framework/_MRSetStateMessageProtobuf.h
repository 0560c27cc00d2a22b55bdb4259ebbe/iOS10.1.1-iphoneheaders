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

@class NSString, _MRNowPlayingInfoProtobuf, _MRPlaybackQueueProtobuf, _MRPlaybackQueueContextProtobuf, _MRSupportedCommandsProtobuf;

@interface _MRSetStateMessageProtobuf : PBCodable <NSCopying> {

	NSString* _displayID;
	NSString* _displayName;
	_MRNowPlayingInfoProtobuf* _nowPlayingInfo;
	_MRPlaybackQueueProtobuf* _playbackQueue;
	_MRPlaybackQueueContextProtobuf* _playbackQueueContext;
	unsigned _playbackState;
	_MRSupportedCommandsProtobuf* _supportedCommands;
	SCD_Struct_MR1 _has;

}

@property (nonatomic,readonly) BOOL hasNowPlayingInfo; 
@property (nonatomic,retain) _MRNowPlayingInfoProtobuf * nowPlayingInfo;                          //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSupportedCommands; 
@property (nonatomic,retain) _MRSupportedCommandsProtobuf * supportedCommands;                    //@synthesize supportedCommands=_supportedCommands - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackQueue; 
@property (nonatomic,retain) _MRPlaybackQueueProtobuf * playbackQueue;                            //@synthesize playbackQueue=_playbackQueue - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayID; 
@property (nonatomic,retain) NSString * displayID;                                                //@synthesize displayID=_displayID - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                                              //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackState; 
@property (assign,nonatomic) unsigned playbackState;                                              //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackQueueContext; 
@property (nonatomic,retain) _MRPlaybackQueueContextProtobuf * playbackQueueContext;              //@synthesize playbackQueueContext=_playbackQueueContext - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDisplayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setPlaybackQueue:(_MRPlaybackQueueProtobuf *)arg1 ;
-(void)setPlaybackQueueContext:(_MRPlaybackQueueContextProtobuf *)arg1 ;
-(BOOL)hasNowPlayingInfo;
-(BOOL)hasSupportedCommands;
-(BOOL)hasPlaybackQueue;
-(BOOL)hasDisplayID;
-(void)setHasPlaybackState:(BOOL)arg1 ;
-(BOOL)hasPlaybackState;
-(BOOL)hasPlaybackQueueContext;
-(_MRPlaybackQueueContextProtobuf *)playbackQueueContext;
-(_MRSupportedCommandsProtobuf *)supportedCommands;
-(void)setSupportedCommands:(_MRSupportedCommandsProtobuf *)arg1 ;
-(_MRPlaybackQueueProtobuf *)playbackQueue;
-(void)setNowPlayingInfo:(_MRNowPlayingInfoProtobuf *)arg1 ;
-(_MRNowPlayingInfoProtobuf *)nowPlayingInfo;
-(void)setDisplayID:(NSString *)arg1 ;
-(unsigned)playbackState;
-(NSString *)displayID;
-(void)setPlaybackState:(unsigned)arg1 ;
@end
