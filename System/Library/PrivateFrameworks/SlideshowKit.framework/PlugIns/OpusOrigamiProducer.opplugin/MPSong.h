/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MCSong, MPAudioPlaylist, MPSongInternal, NSURL;

@interface MPSong : NSObject <NSCoding, NSCopying> {

	NSString* _path;
	MCSong* _song;
	MPAudioPlaylist* _parentPlaylist;
	MPSongInternal* _internal;

}

@property (assign,nonatomic) double audioVolume; 
@property (assign,nonatomic) double fadeInDuration; 
@property (assign,nonatomic) double fadeOutDuration; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,copy) NSString * path; 
@property (nonatomic,copy) NSURL * URL; 
+(id)songWithPath:(id)arg1 ;
+(id)songWithURL:(id)arg1 ;
+(id)song;
-(void)copyStruct:(id)arg1 ;
-(void)setInternalDuration;
-(void)setInternalStartTime;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(long long)index;
-(id)initWithPath:(id)arg1 ;
-(double)audioVolume;
-(void)setAudioVolume:(double)arg1 ;
-(double)startTime;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)setSong:(id)arg1 ;
-(double)stopTime;
-(id)song;
-(id)parentPlaylist;
-(void)setParentPlaylist:(id)arg1 ;
-(double)maxDuration;
-(id)parentDocument;
@end

